#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 7;
    int biaya_per_meter = 85000;
    int keliling = a + b + c;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", biaya_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", keliling * biaya_per_meter);

    return 0;
}