# include <stdio.h>
# include <conio.h>
#include <math.h>

int main(){

    // // Generate multiplication table
    // int n, i, t;

    // printf("Enter the number for table: ");
    // scanf("%d", &n);

    // for(i = 1; i <= 10; i++){

    //     t = n * i;
    //     printf("%d\n", t);

    // }
    
    
    
    
    // create simple calculator
    int n;


    do
    {

    
    printf("\n");    
    printf("----- CALCULATOR -----\n");
    printf("\n");
    printf("1: Addition\n");
    printf("2: Substraction\n");
    printf("3: multiplication\n");
    printf("4: division\n");
    printf("5: square\n");
    printf("6: square root\n");
    printf("7: percentage\n");
    printf("8: exit\n");
    printf("\n");
    printf("Enter the choice of operation 1-7 : \n");
    scanf("%d", &n);
    
    
    
        switch (n)
        {

        int add, add1, add2;
        case 1:
            
            printf("Enter two numbers : ");
            scanf("%d %d", &add1, &add2);
            add = add1 + add2;
            printf("The addition of %d and %d is %d \n", add1, add2, add);
            break;

        int subs, subs1, subs2;
        case 2:
            
            printf("Enter two numbers : ");
            scanf("%d %d", &subs1, &subs2);
            subs = subs1 - subs2;
            printf("The Substraction of %d and %d is %d \n", subs1, subs2, subs);
            break;

        int mult, mult1, mult2;
        case 3:
            
            printf("Enter two numbers : ");
            scanf("%d %d", &mult1, &mult2);
            mult = mult1 * mult2;
            printf("The Multiplication of %d and %d is %d \n", mult1, mult2, mult);
            break;

        float div, div1, div2;
        case 4:
            
            printf("Enter two numbers : ");
            scanf("%f %f", &div1, &div2);
            div = div1 / div2;
            printf("The Division of %f and %f is %f \n", div1, div2, div);
            break;
        
        double sqroot, number;
        case 6:
            
            printf("Enter a number : ");
            scanf("%lf", &number);
            sqroot = sqrt(number);
            printf("The Square root of %lf is %lf \n", number, sqroot);
            break;

        int sqr, num;
        case 5:
            
            printf("Enter a number : ");
            scanf("%d", &num);
            sqr = num * num;
            printf("The Square value of %d is %d \n", num, sqr);
            break;

        float percent, value, result;
        case 7:
            
            printf("Enter a number and percent value : ");
            scanf("%f %f", &value, &percent);
            result = value * (percent/100);
            printf("The %f percent of %f is %f \n", percent, value, result);
            break;
        case 8:
            printf("Thank you :)");
            break;
        }

    } while (n != 8);

}



             
        