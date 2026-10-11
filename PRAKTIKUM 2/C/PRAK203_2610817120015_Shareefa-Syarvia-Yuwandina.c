#include <stdio.h>

int main() {
    float ayam, bebek, iwak, jerapah, xenon, yolo, hasil;

    printf("A = ");
    scanf("%f", &ayam);
    printf("B = ");
    scanf("%f", &bebek);
    printf("I = ");
    scanf("%f", &iwak);
    printf("J = ");
    scanf("%f", &jerapah);
    printf("X = ");
    scanf("%f", &xenon);
    printf("Y = ");
    scanf("%f", &yolo);
    hasil = (ayam - bebek) * iwak / jerapah - (xenon + yolo);
    printf("Hasil: %.3f\n", hasil);

    return 0;
}