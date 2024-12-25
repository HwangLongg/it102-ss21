#include <stdio.h>

int main() {
    char str[100];
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Dòng đầu tiên trong file là: %s", str);
    } else {
        printf("File rong hoặc loi khi doc file.\n");
    }

    fclose(file);

    return 0;
}
