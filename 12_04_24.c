#include <studio.h>
    int main() {
        int producto, unidad, subtotal, precio, descuento, iva;
        scanf("%d",&unidad);
        printf("cantidad de unidades = %d",unidad);
        scanf("%d",&precio);
        printf("precio= %d",precio);
        subtotal = unidad * precio;
        if (subtotal<1000) {
            descuento = subtotal *0;
        }
        if (subtotal>1000) {
            descuento = subtotal *0,1;
            printf("El descuento es de: %d", descuneto);
        }
        if (subtotal>2000){
            descuento = subtotal *0.2;
            printf("el descuento es de: %d",descuento);
        }
            if (subtotal>3000){
                descuento = subtotal *0.3;
            }
            iva = subtotal* 0.16;
            total = subtotal - descuento * iva;
            printf(" El total es de: %d",total)
    }  
