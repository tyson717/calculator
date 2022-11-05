//
// Created by Tahsin Elmas on 11/3/22.
//
#include <stdio.h>

int main() {
    double firstNumber;
    double secondNumber;
    char aritmeticOperator;
    printf("Enter first number ,arithmetic operators and second number(A (+ or - or / or *) B)break a space between entries :\n");
    printf("Enter the operation:  ");
    scanf("%lf %c %lf", &firstNumber, &aritmeticOperator, &secondNumber);
    /*printf("Enter arithmetic operators: ");
    scanf("%c" ,&aritmeticOperator);
    printf("SecondNumber: ");
    scanf("%f",&secondNumber);*/
    double result;
   if (aritmeticOperator == '+') {
        result = firstNumber + secondNumber;
    } else if (aritmeticOperator == '-') {
        result = firstNumber - secondNumber;
    } else if (aritmeticOperator == '*') {
        result = firstNumber * secondNumber;
    } else {
        result = firstNumber / secondNumber;
    }


    /*
    switch (aritmeticOperator) {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '/':
            result = firstNumber / secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
    }*/
    printf("Result = %.3lf", result);


    return 0;
}
/*2.1 Simple Calculator
In this task, you will develop a program
 that acts as a simple calculator.
 Your program should calculate the result of the given arithmetic
 operation on two given numbers. The input to your program
 consists of two real numbers separated by the symbol of an
 arithmetic operation (+, -, * or /). Your program should
 print out the result of the operation on the two numbers,
 with 3 decimal digits (rounded if necessary).
Input format will be:
AoB
where A and B are the two numbers and o is the character describing
 the arithmetic operation. The fields will
be separated by space and followed by a newline. Output format will be:
R
where R is the result. Your program should terminate after printing this.
We suggest using the double data type for representing the number.
 We naturally expect some numerical inaccuracies with your computation,
 therefore we will consider your program’s answer correct if its error is within 1% of our answer.
5.25 * 4.42= 23.205 4.45 / 2.18 =2.041

  */