#include <stdio.h>
#include <string.h>

void xoaKyTu(char *chuoi, char kyTuXoa) {
    int i, j = 0;
    int n = strlen(chuoi);
    char chuoiTam[n + 1];

    for (i = 0; i < n; i++) {
        if (chuoi[i] != kyTuXoa) {
            chuoiTam[j++] = chuoi[i];
        }
    }
    chuoiTam[j] = '\0';
    strcpy(chuoi, chuoiTam);
}

int main() {
    char chuoi[100] = "Xin Chao The Gioi! Lap Trinh C";
    char kyTuXoa;

    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &kyTuXoa);

    xoaKyTu(chuoi, kyTuXoa);

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTuXoa, chuoi);

    return 0;
}

