#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");  

   
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }

    
    char first_char = fgetc(file);

   
    if (first_char != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", first_char);
    } else {
        printf("File rong, khong co ky tu.\n");
    }

   
    fclose(file);

    return 0;
}
