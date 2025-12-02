#include <stdio.h>

struct Student {
    int id;
    char name[100];
    int marks[3];
};

int main() {

    struct Student a;

    printf("ID : ");
    scanf("%d", &a.id);

    printf("Name : ");
    scanf("%s",&a.name);

    for(int i = 0; i < 3; i++){
        printf("Subject %d Marks : ", i + 1);
        scanf("%d", &a.marks[i]);  
    }

    printf("\n");
    printf("Student Details");
    printf("\n");
    printf("ID : %d\n", a.id);
    printf("Name : %s\n", a.name);
    printf("Marks :\n");

    for(int i = 0; i < 3; i++){
        printf("Subject %d Marks : %d\n", i + 1, a.marks[i]);
    }
    
    return 0;
}
