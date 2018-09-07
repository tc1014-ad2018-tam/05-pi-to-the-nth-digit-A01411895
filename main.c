//Luis Ignacio Acosta Zamora A01411895
/*
 *Write a program that gives the user the number Pi to the nth digit:
    The user must provide the number of decimal places to show.
    That is, if the user decides to show Pi with 5 decimal places, the program should show 3.14159 as its output.
    There is a format character, like %lf or %i that will help you show a fixed number of decimal places using printf.
    Research that character.
 */
#include <stdio.h>
//This library lets us us the pow command
#include <math.h>


int main() {

    int decimal;
    double pi = 0;

    //Ask for the number of decimals
    printf("How man decimal places of Pi do you want to see?");
    scanf("%i", &decimal);


    //Calculate the decimal places of Pi.
    for(int count=0; count <= decimal;count++){
        pi+= pow(16,-count)*(4.0/ (8.0*count+1) - 2.0/(8.0*count+4.0) - 1.0/(8.0*count+5.0) - 1.0/(8.0*count+6.0));
    }

    printf("Here is the Pi with %i", decimal);
    printf(" decimal places shown: ");
    //The .* command specifies exactly how many decimal it will show.
    printf("%.*lf\n",decimal, pi);
    return 0;
}