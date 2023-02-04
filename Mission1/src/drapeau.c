/**
 * @author Ayoub
 * @date 2023
 * @version 1.0
*/

#include <stdio.h>
#include <stdlib.h>

#include "../lib/drapeau.h"

/**
 * @brief Fonction initFlag : initialise tous les noms des pays
 * @return void
*/
void initFlag(){
    Algerie.name = malloc(sizeof(char));
    Algerie.name = "Algérie";

    Turquie.name = malloc(sizeof(char));
    Turquie.name = "Turquie";

    Maroc.name = malloc(sizeof(char));
    Maroc.name = "Maroc";

    Espagne.name = malloc(sizeof(char));
    Espagne.name = "Espagne";

    Mauritanie.name = malloc(sizeof(char));
    Mauritanie.name = "Mauritanie";

    Senegal.name = malloc(sizeof(char));
    Senegal.name = "Senegal";

}
/**
 * @brief Fonction verif : verifie si la reponse de l'utilisateur est bonne
 * @param[in] reponse char *
 * @param[in] drapeau flags
 * @return int
*/
int verif(char * reponse,flags drapeau){

    if(reponse == drapeau.name){
        points++;
        return 0;
    }else{
        return 0;
    }
}




int main(){

    return 0;
}