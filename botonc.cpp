#include <windows.h>

class MyWindow {
public:
    MyWindow(HINSTANCE hInstance);
    ~MyWindow();

    bool Create(
        LPCSTR lpWindowName,
        DWORD dwStyle,
        DWORD dwExStyle = 0,
        int x = CW_USEDEFAULT,
        int y = CW_USEDEFAULT,
        int nWidth = CW_USEDEFAULT,
        int nHeight = CW_USEDEFAULT,
        HWND hWndParent = 0,
        HMENU hMenu = 0
    );

    HWND Window() const { return m_hwnd; }

protected:
    virtual LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

    HWND m_hwnd;
    HINSTANCE m_hInstance;
};
MyWindow::MyWindow(HINSTANCE hInstance) : m_hwnd(NULL), m_hInstance(hInstance) {}

MyWindow::~MyWindow() {
    if (m_hwnd) {
        DestroyWindow(m_hwnd);
    }
}

bool MyWindow::Create(
    LPCSTR lpWindowName,
    DWORD dwStyle,
    DWORD dwExStyle,
    int x,
    int y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HMENU hMenu
) {
    const char CLASS_NAME[] = "Sample Window Class";

    WNDCLASS wc = { };

    wc.lpfnWndProc = MyWindow::WindowProc;
    wc.hInstance = m_hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    m_hwnd = CreateWindowEx(
        dwExStyle,
        CLASS_NAME,
        lpWindowName,
        dwStyle,
        x, y,
        nWidth, nHeight,
        hWndParent,
        hMenu,
        m_hInstance,
        this
    );

    return (m_hwnd ? true : false);
}

LRESULT MyWindow::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    case WM_CREATE: {
        CreateWindow(
            "BUTTON",
            "Cierra",
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            10,
            10,
            100,
            30,
            m_hwnd,
            (HMENU)1,
            m_hInstance,
            NULL);
        return 0;
    }

    case WM_COMMAND: {
        if (LOWORD(wParam) == 1) {
            DestroyWindow(m_hwnd);
        }
        return 0;
    }

    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(m_hwnd, &ps);

        EndPaint(m_hwnd, &ps);
        return 0;
    }
    }
    return DefWindowProc(m_hwnd, uMsg, wParam, lParam);
}

LRESULT CALLBACK MyWindow::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    MyWindow* pThis = NULL;

    if (uMsg == WM_NCCREATE) {
        CREATESTRUCT* pCreate = (CREATESTRUCT*)lParam;
        pThis = (MyWindow*)pCreate->lpCreateParams;
        SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)pThis);

        pThis->m_hwnd = hwnd;
    } else {
        pThis = (MyWindow*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
    }

    if (pThis) {
        return pThis->HandleMessage(uMsg, wParam, lParam);
    } else {
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    MyWindow win(hInstance);

    if (!win.Create("Boton de salida", WS_OVERLAPPEDWINDOW)) {
        return 0;
    }

    ShowWindow(win.Window(), nCmdShow);

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}