#include <stdio.h>

int main() {
    int a = 9;
    int b = 6;
    int c = 10;
    int d = 7;
    float hitung = ((float)(a + b) * c) / d;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", c);
    printf("Variabel y bernilai %d\n", d);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hitung);

    return 0;
}