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

int main()
{
    // variables
    int ch;
    do
    {
        // Calculator display
        printf (" Select an operation to perform the calculation in C Calculator: ");
        printf (" \n 1-Addition  \t \t 2-Subtraction \n 3-Multiplication \t 4-Division \n 5-Square \t \t 6-modulus \n 7-Exit \n \n ## Make your choice=");

        scanf ("%d", &ch); // choice the operation


    // switch
    switch (ch)
    {
        case 1:
            addition(); // call the addition()
            break; // break the function

        case 2:
            subtract(); // call the subtract()
            break; // break the function

        case 3:
            multiply(); // call the multiply()
            break; // break the function

        case 4:
            divide(); // call the divide()
            break; // break the function

        case 5:
            sq(); // call the sq()
            break; // break the function

        case 6:
            mod(); // It call the sqrt1()
            break; // break the function

        case 7:
            exit(0); //call the exit()
            break; // break the function

        default:
            printf(" Something is wrong!! ");
            break;
    }
    printf (" \n \n **************** \n ");
    } while (ch != 7);


    return 0;
}



// function definition
int addition()
{
    int i, sum = 0, num, f_num; // declare a local variable
    printf (" How many numbers you want to add: ");
    scanf ("%d", &num);
    printf (" Enter the numbers: \n ");
    for (i = 1; i <= num; i++)
    {
        scanf(" %d", &f_num);
        sum = sum + f_num;
    }
    printf (" Total Sum of the numbers = %d", sum);
    return 0;
}

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
