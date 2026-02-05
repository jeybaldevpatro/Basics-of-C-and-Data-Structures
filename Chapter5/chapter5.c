/*#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c  = sum(a,b); // Function call
    printf("%d\n", c);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1,b1); // Function call
    printf("%d\n", c1);

    int a2 = 2;
    int b2 = 27;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    int c3 = sum(a2, b2); // Function call
    printf("%d\n", c3);
    return 0;
}*/

/*Quick Quiz
#include <stdio.h>
void goodmorning();
void goodevening();
void goodnight();

void goodmorning(){
    printf("good morning\n");
}
void goodevening(){
    printf("good evening\n");
}
void goodnight(){
    printf("good night\n");
}
int main(){
    goodmorning();
    goodevening();
    goodnight();
    return 0;
}*/

/*Quick Quiz
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter the value of side a :");
    scanf("%d", &a);
    printf("area is %f",pow(a,2));  //We need to use float for pow because it returns double. No need to change int a to float.
    return 0;
}*/

/*#include <stdio.h>

int factorial(int);
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
    // Factorial(n-1)= 1 x 2 X 3 X .... X n-1

int factorial(int n){
                //return 1,2...any no.; then it will show that no. in terminal bcoz it will not see furthur code. so output will be "The factorial of 6 is 4"
                //but why in int main, (return statement) if i write anything other than 0 then the program still executes?
    if(n == 1 || n == 0){ // Base condition. if we do not use this then program crashes with a stack overflow.Infinite recursion
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);  //a)6*5*4*3*2 or b)6*5*4*3*2*1? //instead of return if i write n= it is still showing same output?
}                               //ans b)  //Even though the function did not return a value, the CPU still holds the result of the last calculation in the return register (e.g., RAX/EAX).
                                //the final multiplication result is stored in memory but not officially returned, so sometimes the compiler puts it into the same return register.
int main(){                     //So your output matches accidentally.
    int a = 6;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}*/
// OR
/*#include <stdio.h>
int Factorial(int n);

int main(){
    int F, n;
    scanf("%d", &n);
    F = Factorial(n);
    printf("%d", F);
    return 0;
}

int Factorial(int n){
    int fact = 1, i;
    for (i = 1; i <=n; i++){
        fact *= i;
    }
    return fact;
}*/

/*Q.Write a function to calculate the sum of first ‘n’ natural numbers.(with and without recursion)
Q.Write a function to calculate the factorial of given numbers/'n' no.s.(with and without recursion)
Q.Write a function to calculate the fibonacci of given numbers/'n' no.s.(with and without recursion)
Q.Write a function to calculate the multiplication table of given numbers/'n' no.s.(with and without recursion)*/