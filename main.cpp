#include <string>
#include <iostream>

#include "Repository.h"
#include "menu.h"


using namespace nlohmann;
using namespace std;


int main(int argc, char** argv) {

    // Todo : Faire des try catch pour s'assurer de l'exécution des fonctions add et del
    // Todo : Afficher Message si array eukaryote / prokaryote vide
    // Todo : Mettre des sécurités en place

    Repository bdd;
    selectMenu(bdd);

    cout <<  getPath() << endl

    return 0;
}
