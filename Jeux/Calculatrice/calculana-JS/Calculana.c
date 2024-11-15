//
//  main.c
//  index_C_Language
//
//  Created by Benaissa Abdel on 08/02/2024.
//

#include <stdio.h>
#include <stdlib.h>




//    Premiere Etape : fonction principale;
int main(int argc, char *argv[])
{
    
    int Language, resultat = 0, nombre1 = 0, nombre2 = 0, Symboledecalcule;  //variable composant le code
    
    printf("Choose your language / choisis ton language : \n 1 = Fr / 2 = Eng : ");
    scanf("%d", &Language);
    if (Language == 1) {
        printf("Bonjour, je suis calculana aucun chiffre ni Nombre ne peut me resister, essayer pour voir :\n ");
    }
    if (Language == 2) {
        printf("Hello, I'm calculana, no number or number can resist me, try to see :\n ");
    }
    scanf("%d",&nombre1);
    if (Language == 1) {
        printf("Donne moi un deuxieme nombre :\n ");
    }
    if (Language == 2) {
        printf("Give me second Number :\n ");
    }
    scanf("%d",&nombre2);
    if (Language == 1) {
        printf("Donner moi maintenant le symbole de calcule sachant que :\n 1 = addition, 2 = soustraction, 3 = division, 4 = multiplication :\n ");
    }
    if (Language == 2) {
        printf("Now give me the calculation symbol knowing that 1 = addition, 2 = subtraction, 3 = division, 4 = multiplication :\n ");
    }
    scanf("%d", &Symboledecalcule);
        
    if (Symboledecalcule == 1)          //ensemble de condition pemettant de choisir un symbole de calcule entre +, -, /, *;
        {
        resultat = nombre1 + nombre2;      // d'afficher le calcule personnaliser demander ;
        printf("%d + %d = %d\n", nombre1, nombre2, resultat);    //pour finir afficher le resultat;
            
        }
    if (Symboledecalcule == 2)
    {
        resultat = nombre1 - nombre2;              // d'afficher le calcule personnaliser demander ;
        printf("%d - %d = %d\n", nombre1, nombre2, resultat);    //pour finir afficher le resultat;
        
    }
    if (Symboledecalcule == 3)
    {
        resultat = nombre1 / nombre2;               // d'afficher le calcule personnaliser demander ;
        printf("%d / %d = %d\n", nombre1, nombre2, resultat);    //pour finir afficher le resultat;
        
    }
    if (Symboledecalcule == 4)
    {
        resultat = nombre1 * nombre2;       // d'afficher le calcule personnaliser demander ;
        printf("%d * %d = %d\n", nombre1, nombre2, resultat);    //pour finir afficher le resultat;
        
    }
    
   
    return 0;  //je demande au programe de me renvoyer 0 pour m'assurer que tout c'est passer comme prevu;
    
}
