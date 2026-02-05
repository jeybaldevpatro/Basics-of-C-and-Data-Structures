/*#include<stdio.h>  //Q.2   my method
int main(){
    char x,y;
    char str[5];
    x=scanf("%s",str);
    for (int i = 0; i < 5; i++){
        y=scanf("%c",&str[i]);
    }
    if(x==y){
        return 1;}
    else{
        return 0;}
    return 0;
}

#include <stdio.h>  //actual method by chatgpt. couldnt understand anything
int main(){
    char s1[20], s2[20];
    int i = 0, equal = 1;

    // Input using %s
    printf("Enter string using %%s: ");
    scanf("%s", s1);

    getchar(); // clear newline

    // Input using %c
    printf("Enter string using %%c: ");
    while ((s2[i] = getchar()) != '\n') {
        i++;
    }
    s2[i] = '\0';

    // Compare strings
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}*/

/*#include <stdio.h>   //codewithharrys code which is wrong
int main(){
    char str[6];
    scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); 
        fflush(stdin);
    }
    str[5] = '\0';
    
    printf("%s", str);
    return 0;
}*/

/*#include<stdio.h>  //Q.3 my code, i misinterpreted the question.
#include<string.h>
int main(){
    char str[]="JEY";
    printf("%d",strlen(str));
    return 0;
}*/

/*#include<stdio.h>     //my code
int main(){
    int count=0,n;
    char strlen[n];
    scanf("%s",strlen);
    for (int i = 0; i < n-1; i++){
        count+=1;
    }
    strlen[n-1]='\0';
    printf("the length of string is %d",count);
    return 0;
}*/

/*#include <stdio.h>    //correct if we do not use functions but in question it is given to use.
int main() {
    int count = 0;
    char str[100];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        count+=1;            //or count++;
    }
    printf("The length of string is %d", count);
    return 0;
}*/

/*#include<stdio.h>       //correct answer
int lengthstr(char a[]){
    int count=0;
    for (int i=0; a[i]!='\0' ;i++){
        count+=1;        //or count++;
    }
    return count;
}
int main(){
    char a[100];
    scanf("%s", a);
    printf("the total length of string is %d", lengthstr(a));
    return 0;
}*/

/*#include<stdio.h>       //Q.5 my answer correct
void copystr(char a[]){
    int i;
    char x[100];
    for (i=0; a[i]!='\0' ;i++){
        x[i]=a[i];
    }
    x[i]='\0';
    printf("The copied string is %s", x);
}
int main(){
    char a[100];
    scanf("%s", a);
    copystr(a);
    return 0;
}*/

/*#include<stdio.h>   //Q.8 my answer, but not that correct
int main(){
    int count=0,n;
    scanf("%d\n",&n);
    char a[n],b;
    scanf("%s",a);
    scanf(" %c",&b);  // space is important?
    for (int i = 0; i < n; i++){
        if (a[i]==b)
        {
            count++;
        }
    }
    printf("the total no. of occurences are %d",count);
    return 0;
}

#include <stdio.h>   //correct program
int main(){
    char a[100], b;
    int count = 0;

    scanf("%s", a);
    scanf(" %c", &b);

    for (int i = 0; a[i] != '\0'; i++){
        if (a[i] == b){
            count++;
        }
    }
    printf("Occurrence of '%c' is %d", b, count);
    return 0;
}*/

/*#include <stdio.h>       //Q.9 my answer(correct) but need to use other case if it turns false(healthy programer habit)
int main(){
    char a[100], b;
    scanf("%s", a);
    scanf(" %c", &b);

    for (int i = 0; a[i] != '\0'; i++){
        if (a[i] == b){
            printf("given character '%c' is present", b);
            return 0;
        }
    }
    printf("character is not present");
    return 0;
}
//OR
#include <stdio.h>   //without return  but used  break.
int main(){
    char a[100], b;
    int found = 0;

    scanf("%s", a);
    scanf(" %c", &b);

    for (int i = 0; a[i] != '\0'; i++){    // cant add else in this loop because it will repeat the print statement for every false condition.
        if (a[i] == b) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Given character '%c' is present", b);
    else
        printf("Given character '%c' is not present", b);

    return 0;
}*/