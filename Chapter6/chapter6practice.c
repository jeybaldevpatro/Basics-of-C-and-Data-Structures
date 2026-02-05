/*#include<stdio.h>   //Q.1 My answer
int main(){
    int i,*j;
    printf("value of variable:");
    scanf("%d",&i);
    j=&i;
    printf("address of i is %p\n",j);   //getting same address of diff. no.s Why?Memory address depends on where the variable is stored, not on the value inside it.Changing value does NOT change address.
    printf("address of i is %p\n",&i);
    printf("value of i is %d\n",*(&i));
    printf("value of i is %d\n",*j);
}

#include <stdio.h>     // actual answer
int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %p\n", &i);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", *ptr);
    return 0;
}*/

/*#include<stdio.h>  //Q.2. My answer

void address(int i);

void address(int i){
    int *j;
    j=&i;
    printf("address of i is %p\n",j);
}

int main(){
    int i=8,*j;
    j=&i;
    printf("address of i is %p\n",j);
    address(i);
    return 0;
}*/
//Q. why i am getting different address?
//Even though the variable name is the same (i), they are not the same variable.
// Why?
// i in main() is a different variable, stored on the main() stack frame.
// i inside address() is a copy of the value, stored in the address() stack frame.
// ➡️ Each function has its own stack
// ➡️ So each i gets its own memory location
// That is why you get different addresses

/*#include<stdio.h>  //actual answer

void address(int *i);

void address(int *i){
    printf("address of i is %p\n",i);
}

int main(){
    int i=8,*j;
    j=&i;
    printf("address of i is %p\n",j);
    address(j);
    return 0;
}
//OR
#include <stdio.h>
int returning_5(int* ptr){
    printf("The value of ptr is %d\n", ptr);
    return 5;
}
int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    returning_5(ptr);
    return 0;
}*/

//Q.3.