# include <stdio.h>
# include <math.h>

int main(){

    // //Program to print hello world and My Fullname 
    // printf("Hello world \n");
    // printf("Aryan Rajendra Suthar \n");
    

    // //program to print an integer entered by the user
    // int n;
    // printf("Enter a number:  ", n);
    // scanf("%d", &n);
    // printf("The Entered number is : %d \n", n);



    // //program to add two numbers
    // int a,b,sum;
    // printf("Enter number a : \n", a);
    // scanf("%d", &a);
    // printf("Enter number b : \n", b);
    // scanf("%d", &b);

    // sum = a + b;

    // printf("The sum of 2 Numbers is %d \n", sum);



    // //program to check whether a number is even or odd
    // int eo;

    // printf("Enter a number: ", eo);
    // scanf("%d", &eo);

    // if(eo % 2 == 0){

    //     printf("Number is Even \n");

    // }
    // else{

    //     printf("Number is Odd");

    // }



    // //program to check whether a number is prime or not
    // int n;
    
    // printf("enter a number : ", n);
    // scanf("%d", &n);

    // if(n == 1){

    //     printf("Neither prime nor composite");

    // }
    // else if(n == 2 || n == 3){

    //     printf(" prime ");

    // }
    // else if(n % 2 == 0 || n % 3 == 0){

    //     printf("Not a prime number");

    // }
    // else{

    //     printf("prime number");
    // }



    // //program to swap two numbers
    // int n, a, b;

    // printf("Enter first number a : \n", a);
    // scanf("%d", &a);
    // printf("Enter second number b : \n", b);
    // scanf("%d", &b);

    // n = a;
    // a = b;
    // b = n;

    // printf("The new value of a : %d \n", a);
    // printf("The new value of b : %d \n", b);



    //program to print Fahrenheit to celsius
    float F,C;

    printf("Enter the Celsius degree : \n", C);
    scanf("%f", &C);

    F = (9.0/5.0 * C) + 32;

    printf("Fahrenheit degree : %f ", F);


}