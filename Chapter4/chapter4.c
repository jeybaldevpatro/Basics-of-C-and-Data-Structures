/*Quiz question.
#include<stdio.h>
int main(){
    int i=0;
    while (i+10<21){
        printf("Natural number is:%d\n",i+10);
        i++;
    }
    return 0;
}
//Another method
#include <stdio.h>
int main(){
    int i = 0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    return 0;
}*/

/*Quiz question.
#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter no.:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<n+1);
    return 0;
}*/

/*quiz question
#include<stdio.h>
int main(){
    int i,n;   //either mention int i here or in loop.
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) // no need to mention int before i since we already mentioned it. if u did then there is no problem
        printf("%d\n",i);  
    return 0;
}*/

/*Quiz question.reverse order of natural no.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=n; i ; i--){
        printf("%d\n",i);
    }
    return 0;
}*/
/*another method
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (n; n ; n--){
        printf("%d\n",n);
    }
    return 0;
}*/
/*Reverse order of whole no.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=n; i+1 ; i--){
        printf("%d\n",i);
    }
    return 0;
}*/