#include <string>
#include <iostream>
#include <fstream>
#include <zconf.h>
#include <unistd.h>

#include "addCell.h"
#include "Repository.h"

#define GetCurrentDir getcwd


using namespace std;





void displayMenu(){
    cout << " ------------------------------------------------------------------------ " << endl;
    cout << "0.  Exit" << endl;
    cout << "1.  Add a cell" << endl;
    cout << "2.  Delete a cell by id" << endl;
    cout << "3.  Display cell by id" << endl;
    cout << "4.  Display all Prokaryote" << endl;
    cout << "5.  Display all Eukaryote" << endl;
    cout << "6.  Display all Cell between a defined size" << endl;
    cout << "7.  Display all Cell having a chromosome with a defined gene" << endl;
    cout << "8.  Display all Cell sort by size" << endl;
    // cout << "9.  Importation Database" << endl;
    // cout << "10. Exportation Database" << endl;
    cout << " ------------------------------------------------------------------------ " << endl;
}

void selectMenu(Repository bdd) {

    cout << "\n\n ######################## \n" << endl;
    cout << "   Welcome to CellsDatabase \n" << endl;
    cout << " ######################## \n\n" << endl;

    displayMenu();

    string path = getPath();

    bool selection = true;
    int choice = 0;
    while (selection) {
        cin >> choice;

        switch (choice) {
            case 1 : {
                genereCell(bdd);
                break;
            }

            case 2 : {
                int idCell;
                cout << "Enter the cell's id that you want to delete" << endl;
                cin >> idCell;
                cout << "\n" << endl;

                bdd.delCellById(idCell);
                cout << "Success Delete" << endl;
                displayMenu();
                break;
            }

            case 3 : {
                int id;
                cout << "Enter the cell's id that you want to see" << endl;
                cin >> id;
                cout << "\n" << endl;

                bdd.displayCellById(id);
                displayMenu();
                break;
            }

            case 4 :
                cout << "\n" << endl;
                bdd.displayOnlyProkaryote();
                displayMenu();
                break;

            case 5 :
                cout << "\n" << endl;
                bdd.displayOnlyEukaryote();
                displayMenu();
                break;

            case 6 : {
                double min;
                double max;
                cout << "Enter size minimum (micrometer)" << endl;
                cin >> min;

                cout << "Enter size maximum (micrometer)" << endl;
                cin >> max;
                cout << "\n" << endl;

                bdd.displayCellSizeBetween(min, max);

                displayMenu();
                break;
            }

            case 7 : {
                cout << "\n" << endl;
                int idGene;
                cout << "Enter the gene's id" << endl;
                cin >> idGene;
                cout << "\n" << endl;
                bdd.displayCellHavingChromosomeExprimedGene(idGene);
                displayMenu();
                break;
            }

            case 8 : {
                cout << "\n" << endl;
                bdd.displayCellBySize();
                displayMenu();
                break;
            }

            // case 9 : {
            //     ifstream data(path + "/data.json");
            //     json jsonData;
            //     data >> jsonData;
            //     bdd.setArrayEukaryote(jsonData["arrayEukaryote"]);
            //     bdd.setArrayProkaryote(jsonData["arrayProkaryote"]);
            //     cout << "Success Importation \n" << endl;
            //     displayMenu();
            //     break;
            // }

            // case 10: {
            //     json jsonData = bdd;
            //     ofstream o(path + "/data.json");
            //     o << setw(4) << jsonData;
            //     cout << "Success Exportation \n" << endl;
            //     break;
            // }

            case 0: {
                cout << "\nMay the force be with you \n\n" << endl;
                exit(0);
            }

            default :
                cout << "Error of entry" << endl;
                displayMenu();
                cout << "Select the desired function" << endl;
                break;
        }
    }
}

string getPath(){
    char buff[FILENAME_MAX];
    GetCurrentDir( buff, FILENAME_MAX );
    string stringPath(buff);
    return stringPath;
}

