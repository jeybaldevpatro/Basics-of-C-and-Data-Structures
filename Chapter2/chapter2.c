                            /**********  INSTRUCTIONS AND OPERATORS **********/

                                        /**********Theory**********/
/*#include<stdio.h>
int main(){
    int i=10;
    int j=i;
    printf("The value of i is %d and value of j is %d",i,j);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int a=9;
    int b=2;
    float c=a/b;                       // both a and b are int
    printf("the value of c is %f",c);  // Since both operands are integers, integer division occurs (9/2 = 4).
    return 0;                          // The result is then stored as 4.0 in float.
}*/

// To get the exact value, use float with int or float with float. To get decimal output, at least one operand must be float.See below.

/*#include<stdio.h>
int main(){
    float a=9;
    float b=2;
    float c=a/b;   // one float and other int
    printf("the value of c is %f",c);
    return 0;
}*/

//Type casting
/*#include<stdio.h>
int main(){
    int n=45;
    float m=32.23;
    n=(int)m;  //convert the data type to int
    printf("%d",n);
    return 0;
}*/

                                /***CHAPTER 2 - PRACTICE SET***/

/*--------- PROGRAM 2: What data type will 3.0/8-2 return ---------*/

/*#include<stdio.h>
int main(){
    float a=3.0/8-2;                   //First, it was divided and then subtracted (OPERATOR PRECEDENCE), so the value is -1.625
    printf("The value of a is %f",a);  //The expression type is double; storing it in float a converts -1.625 from double to float.
    return 0;                          //If you want float, write 3.0f (or cast), e.g. 3.0f/8 - 2, Because in C, a decimal literal like 3.0 is double by default, not float.
}*/

/*--------- PROGRAM 3:  A number is divisible by 97 or not ---------*/

/*#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%97==0){
        printf("%d is divisible by 97\n", a);
    }else{
        printf("%d is not divisible by 97\n", a);
    }
    return 0;
}*/