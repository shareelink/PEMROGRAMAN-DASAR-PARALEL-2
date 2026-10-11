#include <stdio.h>

int main() {
    char yourname[50], yournim[20], kelaz[20], ttl[50], tinggal[100], hobi[50], wa[20];

    printf("Nama                 : ");
    fgets(yourname, sizeof(yourname), stdin);
    printf("NIM                  : ");
    fgets(yournim, sizeof(yournim), stdin);
    printf("Kelas Paralel        : ");
    fgets(kelaz, sizeof(kelaz), stdin);
    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat               : ");
    fgets(tinggal, sizeof(tinggal), stdin);
    printf("Hobby                : ");
    fgets(hobi, sizeof(hobi), stdin);
    printf("No. HP               : ");
    fgets(wa, sizeof(wa), stdin);

    printf("\n");
    printf("Nama                 : %s", yourname);
    printf("NIM                  : %s", yournim);
    printf("Kelas Paralel        : %s", kelaz);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat               : %s", tinggal);
    printf("Hobi                 : %s", hobi);
    printf("No. HP               : %s", wa);

    return 0;
}