# include <stdio.h>
# include <math.h>
# include <strings.h>

int main(){


    // // find factorial of n numbers
    // int fact = 1, n, i;

    // printf("Enter a number to find factorial: ");
    // scanf("%d", &n);

    // for(i = 1; i <= n; i++){

    //     fact = fact * i;

    // }
    // printf("%d", fact);


    
    //print fibonacci series
    int n, num1 = 0, num2 = 1, i, num3 = num1 + num2;

    printf("Enter the length of series: ");
    scanf("%d", &n);

    printf("Fibonacci series is : %d, %d, ", num1, num2);


    for(i = 3; i <= n; ++i){

        printf("%d, ", num3);
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;

    }

}

