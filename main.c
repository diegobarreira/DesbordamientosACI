/* 
 * File:   main.c
 * Author: Tarzkan
 *
 * Created on 7 de abril de 2017, 11:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=2;
    int y=1;
    while(x>y)
    {
        printf("Mama verga");
    }
    /* Desbordamiento de valor máximo 
    unsigned char x = 256;
    unsigned char y = 1;
    printf("%d\n", x+y);
     ------------------------------ */
    /* Desbordamiento 
    short ss = 0x8000;
    int si = ss;
    printf("%d,%d\n", ss,si);
    printf("%08x,%08x\n", ss,si);
    ------------------------------ */
    /* Desbordamiento 
    unsigned int ui = 0xFFFF7F8F;
    unsigned short us = ui;
    unsigned char uc = us;
    int si = 0xFFFF7F8F;
    short ss = si;
    signed char sc = ss;
    printf("%d,%d,%d\n", ui, us, uc);
    printf("%08x,%08x,%08x\n", ui, us, uc);
    printf("\n");
    printf("%d,%d,%d\n", si, ss, sc);
    printf("%08x,%08x,%08x\n", si, ss, sc);
    printf("Mama verga");
     ------------------------------ */
    /* Desbordamiento 
    unsigned char uc1 = 0xFF;
    unsigned char uc2 = 0;
    printf("%x\n", sizeof (~uc1));
    if (~uc1 == uc2) {// ~ --> Negación
        printf("%x = %x\n", ~uc1, uc2);
    } else {
        printf("%x != %x\n", ~uc1, uc2);
    }
     ------------------------------ */
    /* Desbordamiento 
    unsigned char uc1 = 0x01;
    signed char uc2 = 0x01;
    signed char sc3 = uc2 << 7; // << Desplazar X veces el valor 1 a la izquierda en binario
    printf("%d,%d\n", uc1 << 7, sc3);
    if (uc1 == uc2) {// ~ --> Negación
        printf("%x = %x\n", uc1 << 7, sc3);
    } else {
        printf("%x != %x\n", uc1 << 7, sc3);
    }
    /*  ------------------------------ */
    /* TRABAJAR CON Punto Flotante */
    printf("\n 0.25 = %f", (float) 0.25);
    printf("\n 0.25 = %.50f", (float) 0.25);
    
    printf("Mama verga");
            /*  ------------------------------ */
    return (EXIT_SUCCESS);
}

