/*#include<stdio.h> //Q.1
int main(){
    int n,i,z;
    printf("enter n:");
    scanf("%d",&n);
    for (i=1;i<=10;i++){
        z=n*i;   //n*i=z this is wrong.
        printf("%dX%d=%d\n",n,i,z);
    }
    return 0;
}
//another method.
#include<stdio.h>
int main(){
    int n,i=1,z;
    printf("enter n:");
    scanf("%d",&n);
    while (i<11){
        z=n*i;
        printf("%dX%d=%d\n",n,i,z);
        i++;
    }
    return 0;
}*/

/*#include<stdio.h> //Q.2
int main(){
    int n=10,i,z;
    for (i=10;i;i--)
        printf("%dX%d=%d\n",n,i,n*i);
    return 0;
}
//another method.
#include<stdio.h>
int main(){
    int n=10,i=10,z;
    while (i){
        printf("%dX%d=%d\n",n,i,n*i);
        i--;
    }
    return 0;
}
//another method.
#include<stdio.h>
int main(){
    int n=10,i=10,z;
    do{
        printf("%dX%d=%d\n",n,i,n*i);
        i--;
    }while(i);
    return 0;
}*/

/*#include<stdio.h> //Q.5
int main(){
    int i=1,count=0;
    while (i<11){
        count+=i;
        i++;
    }
    printf("the total sum is:%d",count);
    return 0;
}
//better version or u can say for show off/flex.
#include<stdio.h>
int main(){
    int i = 1, count = 0;
    while (i < 11){
        count += i;
        if (i < 10) //used this 'if' loop because I didn't want to print "The sum is: 55"
        printf("The sum is: %d\n", count);
        i++;  //do not wanted to because we are already writing in the end i.e "The total sum is: 55"
    }
    printf("The total sum is: %d\n", count);
    return 0;
}*/

/*#include<stdio.h> //Q.6
int main(){
    int count=0;
    for (int i=1;i<11;i++)
        count+=i;
    printf("the total sum is:%d",count);
    return 0;
}
#include<stdio.h>
int main(){
    int i=1,count=0;
    do{
        count+=i;
        i++;
    }while(i<11);
    printf("the total sum is:%d",count);
    return 0;
}*/

/*#include<stdio.h>  //Q.7
int main(){
    int n=8,i=1,count=0,y;
    for (i;i<11;i++){
        y=n*i;
        count+=y;
    }
    printf("the sum of the numbers occurring in the multiplication table of 8 is:%d\n",count);
    return 0;
}
//another method.
#include <stdio.h>
int main(){
    int sum=0;
    for (int i = 1; i <= 10; i++){
        sum += (8*i);
    }
    printf("The sum of the table of 8 is %d", sum);
    return 0;
}
//another method.
#include<stdio.h>
int main(){
    int i=1,count=0,n=8;
    while (i<11){
        count+=n*i;
        i++;
    }
    printf("the total sum is:%d\n",count);
    return 0;
}*/

/*#include<stdio.h>  //Q.8
int main(){
    int n,x=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (n;n;n--){
        x*=n;
    }
    printf("The factorial is:%d",x);
    return 0;
}
//another method.
#include <stdio.h>
int main(){
    int product=1;
    int n = 5;
    for (int i = 1; i <= n; i++){
        product *=i;
    }
    printf("The factorial is %d", product);
    return 0;
}*/

/*#include<stdio.h>  //Q.9
int main(){
    int n,x=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n){
        x*=n;
        n--;
    }
    printf("the total sum is:%d\n",x);
    return 0;
}
//another method.
#include <stdio.h>
int main(){
    int i = 1;
    int product=1;
    int n = 5;
    while(i<=n){
        product *=i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}*/

/*#include<stdio.h>  //Q.10. V.V Imp
int main()
{
    int n;
    int not_prime = 0;
    printf("Enter a number:");  //took n=999983(which is prime)and it calculated within a sec.
    scanf("%d",&n); //it is so mind blowing bcoz it took and checked all numbers from 2 to 999983 within a sec.

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {

        for (int i = 2; i < n; i++) //didn't wrote i<=n bcoz n%n==0 is always true.so it will say any no. is not a prime.
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}*/
// while (i < n)
// {
//     if (n % i == 0 && n != 2)
//     {
//         not_prime = 1;
//         break;
//     }
//     i++;
// }

/*#include <stdio.h>  //Q.11. V.V Imp
int main()
{
    int n;
    int not_prime = 0;
    printf("Enter a number:");
    scanf("%d",&n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}
//another method.
#include <stdio.h>
int main()
{
    int n = 4;
    int not_prime = 0;
    printf("Enter a number:");
    scanf("%d",&n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        do
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}*/