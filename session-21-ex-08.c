#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
} Student;

int main() {
    Student students[1000];
    int count = 0;
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file students.txt.\n");
        return 1;
    }


    while (fscanf(file, "%d %s %d", &students[count].id, students[count].name, &students[count].age) == 3) {
        count++;
        if (count >= 1000) { 
            break;
        }
    }

    fclose(file);
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }

    return 0;
}
