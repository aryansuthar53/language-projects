# include <stdio.h>
# include <math.h>


int chkprime(int p){

    if(p < 2){

        return 0;

    }
    else {

        for(int i = 2 ; i <= p/2; i++){

            if(p % i == 0){

                return 0;

            }

        }
    }
    return 1;

}

int main(){

    // //program to add two numbers

    // int n, a, b;

    // printf("Enter your first number : \n", a);
    // scanf("%d", &a);
    // printf("Enter your second number : \n", b);
    // scanf("%d", &b);

    // n = a + b;

    // printf("Sum of Two numbers is %d", n);


    // //program to substract two numbers
    // int n, a, b;

    // printf("Enter your first number : \n", a);
    // scanf("%d", &a);
    // printf("Enter your second number : \n", b);
    // scanf("%d", &b);

    // n = a - b;

    // printf("The value is : %d", n);


    // //program to multiply two numbers
    // int n, a, b;

    // printf("Enter your first number : \n", a);
    // scanf("%d", &a);
    // printf("Enter your second number : \n", b);
    // scanf("%d", &b);

    // n = a * b;

    // printf("The value is : %d", n);

    

    // //program to divide two numbers
    // float n, a, b;

    // printf("Enter your first number : \n", a);
    // scanf("%f", &a);
    // printf("Enter your second number : \n", b);
    // scanf("%f", &b);

    // n = a / b;

    // printf("The value is : %f", n);



    //program to print prime number from 1 to n
    int n;

    printf("Enter your number : \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        if(chkprime(i)){

            printf("%d\n", i);
        }

    }



}