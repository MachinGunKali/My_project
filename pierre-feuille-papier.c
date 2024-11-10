//
//  main.c
//  Pierrefeuillepapiercisaux
//
//  Created by Benaissa Abdel on 12/02/2024.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]) 
{
    int Arme;
    
    printf("Bonjour je m'appelle Bibop et je suis votre adversaire pour aujourdhui, je vous souhaite bonne chance \n");
    
    
    printf("Avant de commencer voici un rapide rappel au regle :\n la pierre bat les ciseaux (en les émoussant), les ciseaux battent la feuille (en la coupant), la feuille bat la pierre (en l'enveloppant). Ainsi chaque coup bat un autre coup, fait match nul contre le deuxième (son homologue) et est battu par le troisième (sachant que pierre = 1, feuille = 2, ciseaux = 3.\n)");
    printf("----------------------------------------\n\n");
    
    printf(" Commençons \n\n");
    
    printf("----------------------------------------\n\n");
    
    printf("Premiere - Manche !!!!\n pierre, feuille, ciseaux :");
    
    scanf("%d", &Arme);
    
    if (Arme == 1)
    {
        printf("Feuille\n");
    }
    if (Arme == 2)
    {
        printf("Cisaux\n");
        
    }
    if (Arme == 3)
    {
        
        printf("Pierre\n");
        
    }
    
    printf("Deuxieme - Manche !!!!\n pierre, feuille, ciseaux :");
    
    scanf("%d", &Arme);
    
    if (Arme == 1)
        {
        printf("Feuille\n");
        }
    if (Arme == 2)
    {
        printf("Cisaux\n");
        
    }
    if (Arme == 3)
    {
        
        printf("Pierre\n");
        
    }
    printf("Troisieme - Manche !!!!\n pierre, feuille, ciseaux :");
    
    scanf("%d", &Arme);
    
    if (Arme == 1)
        {
        printf("Feuille\n");
        }
    if (Arme == 2)
    {
        printf("Cisaux\n");
        
    }
    if (Arme == 3)
    {
        
        printf("Pierre\n");
        
    }
     
return 0;
}
