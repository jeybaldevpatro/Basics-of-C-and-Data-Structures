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
    float c=a/b;   // both a and b are int
    printf("the value of c is %f",c);  //if u print this value will be 4.000000 not 4.500000 bcoz int and int gives int not float
    return 0;
}*/

// To get exact value use float and int or float and float.See below.

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

/*#include<stdio.h>  //Q.2.
int main(){
    float a=3.0/8-2;
    printf("The value of a is %f",a);
    return 0;
}*/

/*#include<stdio.h>  //Q.3.
int main(){
    int a=26772;
    if (a%97==0){
        printf("%d is divisible by 97\n", a);
    }else{
        printf("%d is not divisible by 97\n", a);
    }
    return 0;
}*/