//FOR OUTPUT/PRINTING STRINGS
/*#include<stdio.h>    //Q. Quiz 1
int main(){
    char a[]="apple";   //can't write like this char a; then in next line a[]="apple"; this is wrong
    for (int i = 0; i < 5; i++){
        printf("a[%d]=%c\n",i,a[i]);
    }
    return 0;
}
//OR
#include <stdio.h>
int main(){
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++){
        printf("Character is %c \n", st[i]); 
    }
    return 0;
}
//OR
#include <stdio.h>
int main(){
    char st[] = "abc";
    printf("%s", st);
    return 0;
}
//OR
#include <stdio.h>
int main(){
    char st[] = "abc";
    puts(st);
    return 0;
}
//OR
#include <stdio.h>
int main(){
    char st[] = "abc";
    fputs(st,stdout);
    return 0;
}*/

//FOR INPUT/SCANING STRINGS

/*#include<stdio.h>
int main(){
    char plate[25];
    scanf("%s",plate);
    printf("Items are %s",plate);
    return 0;
}
//OR
#include<stdio.h>
int main(){
    char plate[25];
    fgets(plate,25,stdin);
    printf("Items are %s",plate);
    return 0;
}
//OR
#include<stdio.h>
int main(){
    char plate[25];
    gets(plate);
    printf("Items are %s",plate);
    return 0;
}*/

//DECLARING A STRING USING POINTERS

/*#include <stdio.h>  //cannot modify this string.
int main() {
    char *str = "Hello World";
    printf("%s", str);
    return 0;
}

#include <stdio.h>  //modifying a string using a pointer to a character array.
int main(){
    char arr[] = "Hello";
    char *ptr = arr;
    ptr[0] = 'h';   // modification allowed
    printf("%s", ptr);
    return 0;
}*/

//Declaring a string using pointer with dynamic memory











//STANDARD LIBRARY FUNCTIONS FOR STRINGS

/*#include <stdio.h>
#include <string.h>
int main(){
    char st[] = "Harry";
    char s1[56] = "Hello";
    char s2[56] = " bro";

    printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st);
    printf("%s %s\n", st, target);

    strcat(s1,s2);
    printf("%s %s\n", s1, s2);

    int a = strcmp("deep", "joke");  //It returns 0 if the strings are equal, a negative value if the first string's mismatching character's ASCII value is less than the 
    printf("%d\n", a);               //second string's corresponding mismatching character, and a positive value otherwise

    return 0;
}*/