#include <stdio.h>

int main() {
    float jari, t_b, phi, muter, luas, vol;

    printf("Jari-jari = ");
    scanf("%f", &jari);
    printf("Tinggi Bejana = ");
    scanf("%f", &t_b);
    phi = 22.0/7.0;
    muter = 2 * phi * jari;
    luas = 2 * phi * jari * (jari + t_b);
    vol = phi * jari * jari * t_b;
    printf("Volume = %.2f\n", vol);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", muter);

    return 0;
}