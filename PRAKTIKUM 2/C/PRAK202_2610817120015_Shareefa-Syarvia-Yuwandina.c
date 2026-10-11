#include <stdio.h>

int main() {
    float first, second, boom;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &first);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &second);
    boom = first + second;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n", first, second, boom);

    return 0;
}