#include <stdio.h>

int main() {
    /*
    variable = a reusable container for a value.
    behaves as if it were the value it contains.
    */

    //integer variable (%d)
    int age = 16;
    int year = 2009;
    int day = 22;
    int quantity = 2;
    printf("you are %d years old!\n", age);
    printf("the year is %d \n", year);
    printf("day of birth is %d \n", day);
    printf("you have ordered %d piece of steak\n", quantity);

    //decimal float (%f)
    float cost = 49.9;
    float tax = 2.51;
    float tip = 5.5;
    printf("\nthe steak cost is $%.1f\n",cost);
    printf("with the tax of $%.2f\n", tax);
    printf("you gave a tip of $%.1f", tip);

    //decimal double (%lf)
    double x = 9.0000000000123456;
    printf("\nthe x value is %.16lf", x);

    //char 
    char grade = 'A';
    char middle_name = 'O';
    char symbol = '$';
    printf("\nyou got %c in exams!\n", grade);
    printf("your middle name is %c", middle_name);
    printf("\nyour symbol is %c\n", symbol);

    //array char
    char name[] = "\njen";
    char month[] = "march";
    char car[] = "porche";
    char food[] = "tinola";
    char car_model[] = "porche 911 gt";
    printf("your name is %s\n", name);
    printf("you were born in %s\n", month);
    printf("your favorite food is %s\n", food);
    printf("your favorite car brand is %s\n", car);
    printf("the car model you want is %s", car_model);

    return 0;
}