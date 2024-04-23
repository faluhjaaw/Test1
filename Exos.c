#include <stdio.h>
#include <math.h>
/*
float moyenne(float tableau[], int taille)
{
    float somme;
    for(int i=0; i<taille; i++)
        somme += tableau[i];
    return somme/taille;
}
*/
float sina( int angle)
{
    return sin(angle);
}

 int main(void)
 {
    for (int i=0; i <=90; i+=15)
        printf("sin(%d) = %f\n", i, sina(i));
    // float tab[4] = {10, 11, 10, 9};
    // printf("Moyenne ==> %f", moyenne(tab, 4));
    return 0;
 }
