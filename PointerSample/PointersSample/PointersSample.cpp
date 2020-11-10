// PointersSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void myMethod(int* parameterThatChange, int* parameterThatChange2, int parameterThatNotChange) {
    *parameterThatChange = 15;
    *parameterThatChange2 = 40;
    parameterThatNotChange = 9999;
}

int main()
{
    int premenna = 10;
    int* pointerPremennej = &premenna;

    printf("derefencia 'pointerPremennej' %d\n", *pointerPremennej);
    printf("pointer/adresa 'premenna'  %d\n", pointerPremennej);
    printf("pointer/adresa 'premenna' %d\n", &premenna);
    printf("pointer/adresa 'pointerPremennej' %d\n", &pointerPremennej);


    printf("\n########################\n");

    printf("Zmena hodnoty napriamo\n");

    premenna = 20;
    printf("derefencia 'pointerPremennej' %d\n", *pointerPremennej);
    printf("pointer/adresa 'premenna'  %d\n", pointerPremennej);
    printf("pointer/adresa 'premenna' %d\n", &premenna);
    printf("pointer/adresa 'pointerPremennej' %d\n", &pointerPremennej);

    printf("\n########################\n");

    printf("Zmena hodnoty pomocou derefencie\n");

    *pointerPremennej = 15;
    printf("derefencia 'pointerPremennej' %d\n", *pointerPremennej);
    printf("pointer/adresa 'premenna'  %d\n", pointerPremennej);
    printf("pointer/adresa 'premenna' %d\n", &premenna);
    printf("pointer/adresa 'pointerPremennej' %d\n", &pointerPremennej);


    int argThatChange = 42;
    int argThatChange2 = 10;
    int argThatNotChange = 66;
    int* pointerToArgThatChange = &argThatChange2;

    myMethod(&argThatChange, pointerToArgThatChange, argThatNotChange);
    printf("argThatChange %d\n", argThatChange);
    printf("argThatChange2 %d\n", argThatChange2);
    printf("argThatNotChange %d\n", argThatNotChange);

}