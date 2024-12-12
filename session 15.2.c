#include <stdio.h>
#include <string.h>

void vietHoaChuCaiDau(char chuoi[]) {
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (i == 0 || chuoi[i - 1] == ' ') {
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] -= 32; 
            }
        }
    }
}
int main() {
    char chuoi[100];

    printf("Nhap vao mot chu: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';

    vietHoaChuCaiDau(chuoi);

    printf("chu sau khi duoc viet cac chu hoa dau: %s\n", chuoi);

    return 0;
}


 
