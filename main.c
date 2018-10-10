#include <stdio.h>
#include <Stdlib.h>


int main() {
    int namkinhnghiem, namconghien;
    printf("nhap so nam kinh nghiem: ");
    scanf("%d", &namkinhnghiem);
    printf("nhap so nam cong hien");
    scanf("%d", &namconghien);
    if (namkinhnghiem < 2 & namconghien < 2) {
        printf("luong la 15000000");
    }
    if (namkinhnghiem < 2 & 2 < namconghien < 5) {
        printf("luong la 20000000\n");
    }
    if (namkinhnghiem < 2 & namconghien > 5) {
        printf("luong la 30000000\n");
    }
    if (2 < namkinhnghiem < 5 & namconghien < 2) {
        printf("luong la 30000000\n");
    }
    if (2 < namkinhnghiem < 5 & 2 < namconghien < 5) {
        printf("luong la 40000000\n");
    }
    if (2 < namkinhnghiem < 5 & namconghien > 5) {
        printf("luong la 60000000\n");
    }
    if (namkinhnghiem > 5 & namconghien < 2) {
        printf("luong la 45000000\n");
    }
    if (namkinhnghiem > 5 & 2 < namconghien < 5) {
        printf("luong la 60000000\n");
    }
    if (namkinhnghiem > 5 & namconghien > 5) {
        printf("luong la 90000000\n");
    }
    return 0;
}