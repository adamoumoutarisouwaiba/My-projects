#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
     n = get_int ("Le Chiffre: ");
    }
    while (n<0);

    //Affichage de lignes
    for (int i=0; i<n; i++)
    {
        for (int espace=n-i; espace>=1; espace--)
        {
            printf (" ");
        }
        for (int col=0; col<=i; col++)
        {
            printf("#");
        }
        printf (" ");
        for (int col1=0; col1<=i; col1++)
        {
            printf ("#");
        }
        //Passer a la ligne apres les #
        printf("\n");
    }

}# My-projects
# My-projects
