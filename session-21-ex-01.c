#include <stdio.h>

int main() {
    char str[100];

  
    printf("nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    
    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("khong the ghi file .\n");
        return 1;
    }

   
    fputs(str, file);

   
    fclose(file);

    printf("da ghi chuoi vao file \n");

    return 0;
}
