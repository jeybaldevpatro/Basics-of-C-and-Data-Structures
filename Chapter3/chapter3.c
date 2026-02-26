                            /**********  INSTRUCTIONS AND OPERATORS **********/

                                        /********** Theory **********/

/*#include<stdio.h>
int main(){
    int a=1, b=0;                                // If a=2, b=12, both the outputs showed 1 because both are non-zero, so both are considered true(1).
    printf("The value of a and b is %d\n",a&&b); // a/b = 00001,8,9,2,17,54,09 etc. Will still show 1 because in C, any non-zero value is treated as true (1) in logical operations.Zero is treated as false (0). 
    printf("The value of a or b is %d",a||b);    
    return 0;
}*/

/*If i take a/b= 08,09,018,019,00008 etc. Will show error bcoz In C, numbers starting with 0 are treated as octal (base 8) literals.
Octal digits can only be 0 to 7, so 08,09,018,019,00008 etc is not a valid octal number — it will cause a compiler error.*/

/*#include<stdio.h>
int main(){
    int a=1,b=1;
    if (a&&b){
        printf("both are true");
    }
    return 0;
}

//BOTH above and below program are SAME.

#include<stdio.h>
int main(){
    int a=1,b=1;
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}*/

//Conditional or Ternary operators.Can use instead of if-else.

/*#include <stdio.h>
int main(){
    // condition ? expression-if-true : expression-if-false     //This is the format.
    int a = 345;
    int b = 345452;
    a>b?printf("a is greater"):printf("b is greater");
    return 0;
}*/

//Q. Convert this to conditional operator
/*#include<stdio.h>
int main(){
    int a=10;
    if(a==10){
        a=5;
    }
    else{
        a=0;
    }
    return 0;
}

//Ans
#include<stdio.h>
int main(){
    int a=10;
    a=(a==10)?5:0;
    return 0;
}*/

//Switch case control instruction.

/*#include <stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("You entered 1\n"); //By not using break function it will print the furthur print statements in other words If break is not used, execution continues to the next case (fall-through).
            break;                     //Try this program by removing all break.
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matched"); //Take any number except 1,2,3,4 then this sentence is printed.
    }
    return 0;
}*/

/*--------- Quick Quiz: Write a program to find grade of a student given his marks based on below: 
                        90 – 100 => A 
                        80 – 90 => B 
                        70 – 80 => C 
                        60 – 70 => D 
                        50 – 60 => E 
                        <50     => F  ---------*/

/*#include<stdio.h>
int main(){
    int marks;
    printf("Marks of a student:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf("Grade is A");
    }
    else if(marks<=90 && marks>=80){
        printf("Grade is B");
    }
    else if(marks<=80 && marks>70){
        printf("Grade is C");
    }
    else if(marks<=70 && marks>=60){
        printf("Grade is D");
    }
    else if(marks<=60 && marks>=50){
        printf("Grade is E");
    }
    else{
        printf("Grade is F");
    }
        return 0;
}*/

//Better way to write above program.

/*#include <stdio.h>
int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks.\n");
    }
    else if (marks >= 90) {
        printf("Grade: A\n");
    }
    else if (marks >= 80) {
        printf("Grade: B\n");
    }
    else if (marks >= 70) {
        printf("Grade: C\n");
    }
    else if (marks >= 60) {
        printf("Grade: D\n");
    }
    else if (marks >= 50) {
        printf("Grade: E\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}*/