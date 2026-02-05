 /*#include<stdio.h>      //Q.1
int main(){
    int i,arr[10]; //here define i before the array else it will show error.
    int *ptr=&arr[0];
    for (i = 0; i < 10; i++){
        printf("the value of array of %d index is ",i);
        scanf("%d",&arr[i]);
    }
    if (ptr+2==&arr[2]){
        printf("(ptr + 2) correctly points to the third element: %d\n", *(ptr + 2));
    }
    return 0;
}*/

/*#include<stdio.h>  //Q.3.  my program gives correct output by luck.
int main(){
    int i,x,arr[10];
    for (i = 0; i < 11; i++){
        for (int j =0; j<=i+1; j++){
            x=5*j;
        }
        arr[i]=x;
        printf("arr[%d]=%d\n",i,x);
    }
    return 0;
}*/

/*correct method.
#include<stdio.h>
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        arr[i] = 5 * (i + 1);
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}*/

// OR
/*#include <stdio.h>
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        arr[i] = 5* (i+1);
    }
    for (int i = 0; i < 10; i++){
        printf("The value of 5 X %d = %d \n", i+1, arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>    //Q.4.
int main(){
    int arr[10],n;
    scanf("%d",&n);
    for (int i = 0; i < 10; i++){
        arr[i] = n * (i + 1);
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

// OR
#include <stdio.h>
int main(){
    int arr[10],n;
    scanf("%d",&n);
    for (int i = 0; i < 10; i++){
        arr[i] = n* (i+1);
    }
    for (int i = 0; i < 10; i++){
        printf("The value of %d X %d = %d \n",n,i+1, arr[i]);
    }
    return 0;
}*/

/*#include <stdio.h>    //Q.5.V.V.V.V.V.V.V.IMP

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
    // for  i from 0 to n/2
    // arr[i] arr[n-i-1]
    
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}*/

/*#include<stdio.h>       //Q.6.
int count(int *j,int n);
int count(int *j,int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(j[i]>0){
            count++; //I wrote count+=1 which is wrong bcoz if there are no +ve no.s then still it will show 1.
        }
    }
    return count;
}
int main(){
    int arr[]={2,-1,-5,6,8,1};
    printf("%d ",count(arr,6));
    return 0;
}
//OR. similar but with no prototype.
#include<stdio.h>
int count(int j[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(j[i]>0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={2,-1,-5,6,8,1};
    printf("%d ",count(arr,6));
    return 0;
}*/

/*#include<stdio.h>  //Q.7    my 1st 2d array code :(
int multitable(int *a,int n){
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            return a[i][j]=2*j;
        }
        
    }
    
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            return a[i][j]=7*j;
        }
        
    }
    
    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            return a[i][j]=9*j;
        }
        
    }
    
}
int main(){
    int arr[3][10];
    printf("%d",multitable(arr,3));
    return 0;
}*/

/*#include<stdio.h>    // my improved method
int multitable(int a[3][10]){
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ",a[i][j]=2*j);
        }
        printf("\n");
    }
    
    for (int i = 1; i < 2; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ",a[i][j]=7*j);
        }
        printf("\n");
    }
    
    for (int i = 2; i < 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ",a[i][j]=9*j);
        }
        printf("\n");
    }
    
}
int main(){
    int arr[3][10];
    multitable(arr);
    return 0;
}*/

/*#include <stdio.h>     //chatgpts code

void multitable(int a[3][10]) {

    // Table of 2
    for (int j = 0; j < 10; j++)
        a[0][j] = 2 * (j + 1);

    // Table of 7
    for (int j = 0; j < 10; j++)
        a[1][j] = 7 * (j + 1);

    // Table of 9
    for (int j = 0; j < 10; j++)
        a[2][j] = 9 * (j + 1);
}

int main() {
    int arr[3][10];
    multitable(arr);

    // Print the tables
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*#include <stdio.h>    //chatgpt modified the above code which is better code.

void multitable(int a[3][10]) {

    int numbers[3] = {2, 7, 9};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = numbers[i] * (j + 1);
        }
    }
}

int main() {
    int arr[3][10];

    multitable(arr);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*void fillTable(int a[3][10], int row, int col, int number){      //using recursion not recommended.
    if (row == 3) return;
    if (col == 10){
        fillTable(a, row + 1, 0, number + 5); 
        return;
    }

    a[row][col] = number * (col + 1);
    fillTable(a, row, col + 1, number);
}

int main(){
    int arr[3][10];
    fillTable(arr, 0, 0, 2);   // Start with 2
}*/

/*#include <stdio.h>    //codewithharry's program without using function

int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*#include <stdio.h>    //Q.8.

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int mul[] = {n1, n2, n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

//Q.9. Do 3d array. skipped this question(codewithharry)
//Q. practice even more questions using array.

