#include <stdio.h>

int main() {
    int putaran = 5;
    int j = 14;
    float r = j / (2 * 3.14 * putaran);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", j);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}