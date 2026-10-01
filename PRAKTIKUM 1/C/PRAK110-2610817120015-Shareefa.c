#include <stdio.h>
#include <math.h>

int main() {
    int c = 5;
    int a = 12;
    int b = (int)round(sqrt(a * a + c * c));
    int keliling = a + b + c;
    int luas = (a * c) / 2;

    printf("Diketahui :\nAlas = %d meter\nTinggi = %d meter\n", c, b);
    printf("Jawab :\nJawab :\nSisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\nKeliling = %d cm\nLuas = %d cm", a, b, c, keliling, luas);

    return 0;
}