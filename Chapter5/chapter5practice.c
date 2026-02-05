/*#include<stdio.h>     //Q.1.
float avg_no(int x,int y, int z);

float avg_no(int x,int y, int z){
    float a;
    a=(x+y+z)/3.0;   //high chance of silly mistake = (x+y+z)/3
    return a;
}

int main(){
    int x,y,z;
    printf("enter the 3 numbers:");
    scanf("%d %d %d",&x,&y,&z);
    printf("%f",avg_no(x,y,z));
    return 0;
}*/

/*#include<stdio.h>  //Q.2

float temp(int C);

float temp(int C){
    float F;
    F=((9.0/5.0)*C)+ 32;  //F=[(9.0/5.0)*C]+ 32 Can't use square brackets.
    return F;
}

int main(){
    int C;
    printf("enter c :");
    scanf("%d",&C);
    printf("value of F is %f",temp(C));
}*/

/*#include<stdio.h>   //Q.3 my method
float force(int m,float g);
float force(int m,float g){
    float F;
    return F=m*g;
}
int main(){
    int m;
    printf("enter mass");
    scanf("%d",&m);
    printf("force is %.2f",force(m,9.8));
    return 0;
}
//Effective method
#include<stdio.h>   //Q.3 my method
float force(int m);
float force(int m){
    return m*9.8;
}
int main(){
    int m;
    printf("enter mass");
    scanf("%d",&m);
    printf("force is %.2f",force(m));
    return 0;
}*/

/*#include <stdio.h>  //Q.4. V.V.IMP

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 7;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}*/

//Q.5.V.V.IMP

#include<stdio.h>   //Q.6.

int naturalno(int);

int naturalno(int n){
    if(n==1){
        return 1;
    }
    // sum_natural(n) = 1 + 2 + 3 + 4 + 5 + ... n-1 + n;
    // sum_natural(n) = sum(n-1) + n;
    return naturalno(n-1)+n;   //can not write + naturalno(n)
}

int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    printf("the summation is %d",naturalno(n));
    return 0;
}
//alternate method
#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum_natural(n-1) + n;
}
int main(){
    printf("The sum of first 5 natural numbers is %d", sum_natural(5));
    return 0;
}

/*#include<stdio.h>  //Q.7.//gives correct output but logically wrong.why?ask chatgpt
char star();
char star(){
    for(int n=0;n<3;n++){
        for(int i=1;i<=2*n+1;i++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    printf("%c",star());
    return 0;
}*/

/*#include<stdio.h>  //this is the correct version.If u want to use only char in function defination only.

char star(){
    for(int n=0; n<3; n++){
        for(int i=1; i<=2*n+1; i++){
            printf("*");
        }
        printf("\n");
    }
    return 'X';  // return some character. DONOT use "".why?ask chatgpt
}

int main(){
    printf("%c", star());
    return 0;
}*/

/*#include<stdio.h> //ACTUAL CORRECT METHOD

void star(){  // use void because no return value
    for(int n=0; n<3; n++){
        for(int i=1; i<=2*n+1; i++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    star();   // just call the function
    return 0;
}*/

