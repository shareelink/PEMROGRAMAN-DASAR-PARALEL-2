#include <stdio.h>
#include <math.h>

int main() {
    int c = 5;
    int a = 12;
    int b = round(sqrt(a*a + c*c));
    int keliling = a + b + c;
    int luas = (a * c) / 2;

    printf("Diketahui :\n");
    printf("Alas = %d meter\n", c);
    printf("Tinggi = %d meter\n\n", a);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %d cm\n", c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
} 