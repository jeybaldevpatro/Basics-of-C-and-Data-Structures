/*#include <stdio.h>
#include <string.h>
struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main(){
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
}*/

/*#include <stdio.h>      //Q.Quick quiz
#include <string.h>
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main(){
    struct employee e1, e2, e3;

    printf("Enter the value of code\n");
    scanf("%d", &e1.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e1.salary);
    printf("Enter the value of name\n");
    scanf("%s", &e1.name);
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);


    printf("Enter the value of code\n");
    scanf("%d", &e2.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e2.salary);
    printf("Enter the value of name\n");
    scanf("%s", &e2.name);
    printf("%d %f %s\n", e2.code, e2.salary, e2.name);


    printf("Enter the value of code\n");
    scanf("%d", &e3.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e3.salary);
    printf("Enter the value of name\n");
    scanf("%s", &e3.name);
    printf("%d %f %s\n", e3.code, e3.salary, e3.name);
    return 0;
}*/
//OR
/*#include <stdio.h>   //my code which is wrong
#include <string.h>
struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};
int main(){
    struct employee e;
    for (int i = 1; i <= 3; i++){
        printf("enter name:");
        scanf("%s\n",e.name);
        printf("enter code:");
        scanf("%d\n",e.code);
        printf("enter salary:");
        scanf("%f\n",e.salary);
        printf("%d %f %s\n", e.code, e.salary, e.name);
    }
    return 0;
}

#include <stdio.h>     //correct code
#include <string.h>
struct employee {
    int code;
    float salary;
    char name[20];
};
int main() {
    struct employee e[3];
    for (int i = 0; i < 3; i++){
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter code: ");
        scanf("%d", &e[i].code);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++){
        printf("%d  %.2f  %s\n", e[i].code, e[i].salary, e[i].name);
    }
    return 0;
}*/

/*#include <stdio.h>         //Q.Quick quiz
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
void show(struct employee e[]){         //so for multiple employees we use = void show(struct employee e[]);
    printf("\nEmployee Details:\n");    //for single employee = void show(struct employee e);
    for (int i = 0; i < 3; i++){
        printf("%d  %.2f  %s\n", e[i].code, e[i].salary, e[i].name);
    }
}
int main(){
    struct employee e[3];
    for (int i = 0; i < 3; i++){
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter code: ");
        scanf("%d", &e[i].code);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }
    show(e);
    return 0;
}
//for single employee
#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e); // function prototype
void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    show(e1);
    return 0;
}*/