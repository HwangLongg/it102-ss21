#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[100];
    int age;
};

int main() {
    FILE *fptr;   
    int n;      
    struct Student student;  
    fptr = fopen("students.txt", "w");
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();  
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &student.id);
        getchar();  
        printf("Ten: ");
        fgets(student.name, sizeof(student.name), stdin);  
        student.name[strcspn(student.name, "\n")] = '\0'; 
        printf("Tuoi: ");
        scanf("%d", &student.age);
        getchar();  
        fprintf(fptr, "%d,%s,%d\n", student.id, student.name, student.age);
    }
    fclose(fptr);
    printf("\nDa luu thong tin sinh vien vao file students.txt.\n");

    return 0;
}
