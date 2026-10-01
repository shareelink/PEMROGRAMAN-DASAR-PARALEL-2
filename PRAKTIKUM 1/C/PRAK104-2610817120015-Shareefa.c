#include <stdio.h>

int main() {
    int a = 400000;
    int b = 350000;
    float harga_diskon_a = (1 - 0.13) * a;
    float harga_diskon_b = (1 - 0.21) * b;

    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", harga_diskon_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", harga_diskon_b);

    return 0;
}