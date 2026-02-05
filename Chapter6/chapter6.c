/*#include <stdio.h>
int main(){
    int i = 72;
    printf("The address of i is %p\n", &i);
    return 0;
}
// OR. Both are same but the bottom code gives different answer.Why? ask chatgpt
#include <stdio.h>
int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)
    printf("The address of i is %p\n", j);
    return 0;
}*/

/*#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)
    int k = 67;
    printf("The address of i is %p\n", &i);//& = obtain the address of a given variable.
    printf("The address of j is %p\n", j);//(j is basically i)
    printf("The address of k is %p\n", &k);

    printf("The value at address i is %d\n", *(&i));//* = to obtain the value of the address.
    printf("The value at address j is %d\n", *j);//(j is basically i)
    printf("The value at address k is %d\n", *(&k));

    return 0;
}*/

// Types of pointers
/*#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer)

    float k = 5.232;
    float* k1 = &k;// k1 is a pointer pointing to k (k1 is a float pointer)
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k); //why address of k decreased by 7?

    printf("The value at address j is %d\n", *(&i)); //did it print ascii code?Yes
    printf("The value at address k is %.3f\n", *(&k));

    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i = 8;
    int *j;
    j = &i; // i think we should write int* j = &i? both are same no problem.
    // ***&&&a = a     cancel each other.
    printf("address i= %u\n", &i);
    printf("address i= %u\n", j);
    printf("address j= %u\n", &j);  //lower address is 4 bytes less compared to i bcoz is it int type?A pointer itself takes 4 bytes in a 32-bit system, 8 bytes in a 64-bit system.
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);
    return 0;
}*/

/*#include <stdio.h>    imp=Try to understand this problem even better
int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));
    return 0;
}*/


/*call by value
#include <stdio.h>
int sum(int, int);

int sum(int a, int b){
    a = 6; // Sum function cannot change x using a because copy of x is provided to sum in a
    return a + b;
}

int main(){
    int x=1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(x, y));
    printf("The value of x is %d", x);
    return 0;
}*/

/*call by reference
#include <stdio.h>
int sum(int *, int *);

// Sum should change the value of x
int sum(int* a, int* b){
    *a = 6;
    return (*a + *b);
}

int main(){
    int x=1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}*/

/*how to swap values in variables. V.V.Imp
#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){  //(int* a, int* b)These are pointer variables — they store addresses of integers.
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}*/