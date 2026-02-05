/*int a = 10;  //Q.1.
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11");
a = 11
This does not compare.....it assigns the value 11 to a.
The assignment expression itself returns the assigned value, i.e. 11.
In C, any non-zero value is treated as true, and zero is treated as false.
So if (a = 11) becomes if (11), which is true.So output is I am 11.*/

/*#include<stdio.h>  //Q.2.my method. IMP question
int main(){
    int x,a,b,c;
    printf("Total marks and individual subject marks of a student:");
    scanf("%d %d %d %d",&x,&a,&b,&c);
    if(x<40 || a<33 || b<33 || c<33 ){
        printf("Failed");
    }
    else{
        printf("passed");
    }
        return 0;
}*/
//Below is the correct method.
/*#include <stdio.h>
int main() {
    float sub1, sub2, sub3, total;
    printf("Enter marks of 3 subjects (out of 100): ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    // Calculating total percentage.If u have doubt then check chatgpt.
    total = (sub1 + sub2 + sub3) / 3;
    if (total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33) {
        printf("Congratulations! You have passed.\n");
        printf("Your total percentage is %.2f%%", total);
    } else {
        printf("Sorry, you have failed.\n");
        printf("Your total percentage is %.2f%%", total);
    }
    return 0;
}
//Another method
#include <stdio.h>
int main() {
    float sub1, sub2, sub3;
    float totalMarks = 300.0, marksObtained, percentage;
    printf("Enter marks of 3 subjects (out of 100): ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    // Calculate total obtained marks
    marksObtained = sub1 + sub2 + sub3;
    // Calculate total percentage
    percentage = (marksObtained / totalMarks) * 100;
    if(sub1<33 || sub2<33 || sub3<33 || percentage<40) {
        printf("Sorry, you have failed.\n");
        printf("Your total percentage is %.2f%%", percentage);
    } else {
        printf("Congratulations! You have passed.\n");
        printf("Your total percentage is %.2f%%", percentage);
    }
    return 0;
}*/

/*#include<stdio.h>      //Q.3. IMP question. my method
int main(){
    float incomeamount;
    printf("enter ur income in lakhs:");
    scanf("%f",&incomeamount);
    if (incomeamount>=2.5 && incomeamount<=5){
        printf("Tax is 5%%");    //Double % (%%) in printf prints a single %. = V.V.IMP
    }
    else if (incomeamount>5 && incomeamount<=10){
        printf("Tax is 20%%");
    }
    else if (incomeamount>10){
        printf("Tax is 30%%");
    }
    else{
        printf("No tax");
    }
    return 0;
}*/

/*#include <stdio.h>    //CORRECT method
int main() {
    float income, tax = 0;
    // Taking input from user
    printf("Enter your income in lakhs: ");
    scanf("%f", &income);
    // Calculate tax according to income slabs
    if (income <= 2.5) {
        tax = 0;
    }
    else if (income > 2.5 && income <= 5.0) { // Tax for 2.5L–5L
        tax = 0.05 * (income - 2.5);
    }
    else if (income > 5.0 && income <= 10.0) {
        tax = 0.05 * (5.0 - 2.5);          // Tax for 2.5L–5L
        tax += 0.20 * (income - 5.0);      // Tax for remaining income (5L–10L)
    }
    else if (income > 10.0) {
        tax = 0.05 * (5.0 - 2.5);          // Tax for 2.5L–5L
        tax += 0.20 * (10.0 - 5.0);        // Tax for 5L–10L
        tax += 0.30 * (income - 10.0);     // Tax for income above 10L
    }
    printf("Total income tax to be paid = Rs. %.2f lakh\n",tax);
    return 0;
}*/

/*#include <stdio.h> //Q.4.
int main(){
    int year; 
    printf("Enter year: \n");
    scanf("%d", &year);

    if((year %4==0 && year%100!=0) || (year %400==0)){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}*/

/*#include <stdio.h>  //Q.5. V.Imp
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("The character is lowercase.\n");
    } else {
        printf("The character is not lowercase.\n");
    }
    return 0;
}
//Another method
#include <stdio.h>
int main(){
    char ch;
    printf("The character is %c", ch);
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);
    // value for lower case 97, 122
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character is not lowecase");
    }
    return 0;
}*/

/*Q.WAP in C that prints the ASCII values of all characters (A–Z, a–z, 0–9).
#include <stdio.h>
int main() {
    char ch;
    printf("Uppercase Letters (A-Z):\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }
    printf("\nLowercase Letters (a-z):\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }
    printf("\nDigits (0-9):\n");
    for (ch = '0'; ch <= '9'; ch++) {
        printf("%c = %d\n", ch, ch);
    }
    return 0;
}*/

/*#include<stdio.h>   //Q.6
int main(){
    int a,b,c,d;
    printf("Enter 4 numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is greatest");
    }
    else if(b>a && b>c && b>d){
        printf("b is greatest");
    }
    else if(c>b && c>a && c>d){
        printf("c is greatest");
    }
    else{
        printf("d is greatest");
    }
    return 0;
}
//Another method
#include <stdio.h>
int main() {
    float a, b, c, d, greatest;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    // Assume 'a' is the greatest initially
    greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    if (d > greatest) {
        greatest = d;
    }
    printf("The greatest number is: %.2f\n", greatest);
    return 0;
}*/

/*Q.Write a program to find greatest of four numbers entered by the user and if 2 greatest numbers are equal mention it also.
#include <stdio.h>
int main() {
    float a, b, c, d, greatest;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    // Find greatest using && conditions
    if (a >= b && a >= c && a >= d)
        greatest = a;
    else if (b >= a && b >= c && b >= d)
        greatest = b;
    else if (c >= a && c >= b && c >= d)
        greatest = c;
    else
        greatest = d;
    // Print greatest value
    printf("The greatest number is: %.2f\n", greatest);
    // Print which numbers are equal to the greatest
    printf("Number(s) equal to the greatest: ");
    int count = 0;

    if (a == greatest) {
        printf("a(%.2f) ", a);
        count++;
    }
    if (b == greatest) {
        printf("b(%.2f) ", b);
        count++;
    }
    if (c == greatest) {
        printf("c(%.2f) ", c);
        count++;
    }
    if (d == greatest) {
        printf("d(%.2f) ", d);
        count++;
    }
    // Show how many are greatest
    if (count > 1)
        printf("\nNote: %d numbers are equal and greatest.\n", count);
    else
        printf("\nOnly one number is greatest.\n");
    return 0;
}*/