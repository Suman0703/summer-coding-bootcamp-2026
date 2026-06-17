#include <stdio.h>

struct students
{
    char name[30];
    int RollNo;
    char address[30];
    char section;
};

int main(){
    struct  students s1 = {"Suman", 609,"RBPU","B"};

    printf("%s %d %s % c", s1.name, s1.RollNo, s1.address, s1.section);

    printf("\n%d", sizeof(s1));

    return 0;    
}
