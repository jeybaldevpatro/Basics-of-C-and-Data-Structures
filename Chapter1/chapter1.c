/*#include<stdio.h>     //format
int main(){
    
    return 0;
}*/

/*#include<stdio.h>
int main(){
    printf("\njey baldev\'s computer\n");
    printf("\nsdaufhdfjh");     //if i add \n after jh then the output will be same  
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int a=8;        //u can also write like this int a; //if we use float instead of int then in output it will give GARBAGE VALUE(random).
                    //                           a=8;
    printf("The output of the program is %d", a);
    return 0; 
}*/

/*#include<stdio.h>
int main(){     //%d expects an int, but when you pass a char to printf, it is automatically promoted to int (this is called INTEGER PROMOTION IN C).
    char a = 12;   
    printf("The output of the program is %d", a);
    return 0; 
}*/


/*#include<stdio.h>
int main(){
    int a;
    scanf("%d", & a);
    printf("the value of a is %d",a);
    return 0; 
}*/

/*#include<stdio.h>     //Q.1.a)
int main(){
    int l=8;
    int b=3;
    int area;
    area=l*b;
    printf("Area of rectangle is %d",area);
    return 0;
}

/*#include<stdio.h>     //Q.1.b)
int main(){
    int a;
    int b;
    int area;
    printf("enter the value of a and b:");
    scanf("%d,%d", &a, &b);
    area=a*b;
    printf("area is %d",area);
    return 0;
}*/

/*#include<stdio.h>     //Q.2     Solve this question by scanf and math.h
int main(){
    float pie=3.14,area,volume;
    int r=2,h=5;
    area=pie*r*r;
    volume=pie*r*r*h;
    printf("area of circle is %f\n",area);
    printf("volume of cylinder is %f",volume);     //62.800003 this is my volume. Why i am getting 3 in the last? ask chatgpt.
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
    float pie=3.14,area,volume;
    int r,h;
    scanf("%d,%d",&r,&h);
    area=pie*pow(r,2);
    volume=pie*pow(r,2)*h;
    printf("area of circle is %f\n",area);          // If we do not use the %.2f then it will show 6 digits after decimal.
    printf("volume of cylinder is %f",volume);      // Since we did not used that function here it will show 12.560000,62.800003.
    return 0;
}*/

/*#include<stdio.h>       //Q.3
int main(){
    float f,c;
    printf("celsius:");
    scanf("%f",&c);
    f=((9.0/5.0)*c)+32;     // can't write 9/5 because Both 9 and 5 are integers, so C does integer division — the result becomes 1, not 1.8.
    printf("Fahrenheit is %f",f);      // use paranthesis bcoz c does not use BODMAS.This statement is for above line.
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;  //took 5012,6,8
    float si;
    scanf("%f %f %f",&p,&r,&t);   //learnt a new thing what if there is ',','#',spaces,no spaces etc in between "%f%f%f" then how program will work.Try it is fun :).
    printf("simple interst is %f\n",(p*r*t)/100);
    printf("compound interst is %f",p*pow(1+(r/100),t)-p);  //actual answer 2973.28 acc. to chatgpt but we are getting 2976.366550 bcoz due to how floating-point numbers are stored in memory.
    return 0;
}*/