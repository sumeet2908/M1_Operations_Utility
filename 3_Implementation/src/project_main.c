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
  
  #include "calculator.h"
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