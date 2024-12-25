#include <stdio.h>

int main() {
    char str[100];

   
    printf("Nhap mot chuoi de ghi vao file: ");
    fgets(str, sizeof(str), stdin); 
    FILE *file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

  
    fputs(str, file);
    fclose(file);

    printf("Da ghi chuoi vao bt01.txt.\n");

    return 0;
}
