#include <stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;  
    char text[100]; 
    sourceFile = fopen("bt01.txt", "r");
    destinationFile = fopen("bt06.txt", "w");
    while (fgets(text, 100, sourceFile)) {
        fputs(text, destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt.\n");

    return 0;
}
