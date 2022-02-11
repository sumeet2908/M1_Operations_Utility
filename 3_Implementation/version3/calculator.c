 /**
 * @file project_main.c
 * @author SUMEET ()
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */



// use subtract() to subtract two numbers
int subtract()
{
    int n1, n2, result;
    printf (" The first number is: ");
    scanf ("  %d", &n1);
    printf (" The second number is: ");
    scanf ("  %d", &n2);
    result= n1 - n2;
    printf (" The subtraction of %d - %d is: %d", n1, n2, result);
}

// use multiply() to multiply two numbers
int multiply()
{
    int n1, n2, result;
    printf (" The first number is: ");
    scanf ("  %d", &n1);
    printf (" The second number is: ");
    scanf ("  %d", &n2);
    result= n1 * n2;
    printf (" The multiply of %d * %d is: %d", n1, n2, result);
}

// use divide() to divide two numbers
int divide()
{
    int n1, n2, result;
    printf (" The first number is: ");
    scanf ("  %d", &n1);
    printf (" The second number is: ");
    scanf ("  %d", &n2);

    if (n2 == 0)
    {
        printf (" \n Divisor cannot be zero.please enter another value ");
        scanf ("%d", &n2);
    }
    result= n1 / n2;
    printf (" \n The division of %d / %d is: %d", n1, n2, result);
}

// use sq() to get the square of the given number
int sq()
{
    int n1, result;
    printf (" Enter a number to get the Square: ");
    scanf ("  %d", &n1);

    result = n1 * n1;
    printf (" \n The Square of %d is: %d", n1, result);
}

// use sqrt1() to get the square root of the given number
int mod()
{
    float result;
    int n1,n2;
    printf (" Enter a number to get the Square Root: ");
    scanf ("  %d", &n1);
    printf (" The second number is: ");
    scanf ("  %d", &n2);

    result = n1%n2;
    printf (" \n The Square Root of %d is: %f", n1, result);
}
