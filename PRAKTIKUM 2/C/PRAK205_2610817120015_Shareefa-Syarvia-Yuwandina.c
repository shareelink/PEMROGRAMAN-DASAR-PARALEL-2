#include <stdio.h>
#include <math.h> 

int main() {
    int tinggi, sismir, alas, Keliling, Luas;
    printf("A = ");
    scanf("%d", &tinggi);
    printf("B = ");
    scanf("%d", &sismir);
    alas = (int)round(sqrt(sismir * sismir - tinggi * tinggi));
    Keliling = alas + tinggi + sismir;
    Luas = (int)round(0.5 * alas * tinggi);
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm^2\n", Luas);

    return 0;
}