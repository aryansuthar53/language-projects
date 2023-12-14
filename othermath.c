# include <stdio.h>
# include <math.h>
# include <conio.h>
# include <string.h>

int main(){

    // // check whether the number is positive, negative or zero
    // int x;

    // printf("Enter the number : \n");
    // scanf("%d", &x);

    // if(x > 0){

    //     printf("POSITIVE");
    
    // }
    // else if (x < 0){

    //     printf("NEGATIVE");

    // }
    // else{

    //     printf("ZERO");

    // }

//*******************************************************************************************************

    // // check whether number is even or odd
    // int n;

    // printf("Enter number to check even or odd: ");
    // scanf("%d", &n);
    
    // if(n % 2 == 0){

    //     printf("EVEN");

    // }
    // else{
    //     printf("ODD");
    // }


//*******************************************************************************************************


    // // find sqrt of a number
    // double n, a;

    // printf("Enter a number to find sqrt:  \n");
    // scanf("%lf", &n);

    // a = sqrt(n);

    // printf("The square root is : %lf \n", a);


//*******************************************************************************************************


    // // find max, min, avg
    // int i, sum=0, avg=0;

    // int arr[10];
    
    // printf("Enter numbers : ");

    // for(i = 0; i < 10; i++){
        
    //     scanf("%d", &arr[i]);
    //     sum = sum + arr[i];
       
    // }
    // printf("\n*************\n");
    // for(i = 0; i < 10; i++){
        
    //     printf("%d", arr[i]);  
    //     printf("\t");

    // }
    // printf("\n*************\n");
    // printf("Sum of all numbers is : %d", sum); 
    // printf("\n");
    
    // int len = sizeof(arr) / sizeof (arr[0]);

    // avg = sum / len;
    // printf("Average is : %d\n", avg);

    // int min = arr[0];
    // int max = arr[0];
    // int n = len;

    // for(i = 1; i < n; i++){

    //     if(min > arr[i]){

    //         min = arr[i]; 

    //     }
    //     if(max < arr[i]){

    //         max = arr[i];

    //     }

    // }
    // printf("Min value is : %d \n", min);
    // printf("Max value is : %d \n", max);


//*******************************************************************************************************

    // //program to check whether the character is a vowel or consonant
    // char ch;

    // printf("Enter the character : ");
    // scanf("%c", &ch);

    // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){

    //     printf("Vowel\n");

    // }
    // else {

    //     printf("Consonant\n");

    // }


//*******************************************************************************************************

    // //program to check the largest number among three
    // int a, b, c, l = 0;

    // printf("Enter number 1: \n");
    // scanf("%d", &a);
    // printf("Enter number 2: \n");
    // scanf("%d", &b);
    // printf("Enter number 3: \n");
    // scanf("%d", &c);

    
    // if(a >= b && a >= c){

    //     printf("%d is the largest of all.", a);

    // }
    // else if (b >= c && b >= a){

    //     printf("%d is the largest of all.", b);

    // }
    // else{

    //     printf("%d is the largest of all.", c);

    // }



//*******************************************************************************************************

    // //program to print sum of N natural numbers
    // int i, sum=0;

    // int arr[10];
    
    // printf("Enter numbers : ");
    

    // for(i = 0; i < 10; i++){
        
    //     scanf("%d", &arr[i]);
    //     sum = sum + arr[i];
       
    // }
    // printf("\n*************\n");
    // for(i = 0; i < 10; i++){
        
    //     printf("%d", arr[i]);  
    //     printf("\t");

    // }
    // printf("\n*************\n");
    // printf("Sum of all numbers is : %d", sum); 
    // printf("\n"); 




//*******************************************************************************************************

    // //program to find factors of a number
    // int n, i;

    // printf("Enter a number : ");
    // scanf("%d", &n);
    // printf("The factors of the number : %d\n", n);

    // for(i = 1; i <= n; ++i ){

    //     if(n % i == 0){

    //         printf("%d\t", i);

    //     }

    // }



//*******************************************************************************************************

    // //program to find lCM of 2 numbers
    // int l, n1, n2;
    
    // printf("Enter the integers for lcm : ");
    // scanf("%d %d", &n1, &n2);

    // l = (n1 > n2) ? n1 : n2;

    // while (1)
    // {
    //     if((l % n1 == 0) && (l % n2 == 0)){

    //         printf("The LCM of %d and %d is : %d", n1, n2, l);
    //         break;

    //     }
    //     ++l;
    // }
    
    

//*******************************************************************************************************

    //program to find initials of a given name

    char n[100];
    int i;

    printf("Enter a name : \n");
    gets(n);

    printf("The initials of the name is: \n");
    for(i = 0; i < strlen(n); i++){

        if(i == 0 && n[i] != ' '){
            
            printf("%c\t", n[i]);

        }
        else if(n[i] ==' ' && n[i+1] != ' '){

            printf("%c\t", n[i+1]);
        }

    }

        
    return 0;
}