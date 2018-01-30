#include "addCell.h"


Protein createProtein(){
    int idProt;
    string nameProt;

    cout << "Enter the id of this protein?" << endl;
    cin >> idProt;

    cout << "Enter the name of this protein?" << endl;
    cin >> nameProt;

    Protein prot = Protein(idProt, nameProt);

    return prot;
}

Gene createGene(){
    string nameGene;
    string locus;

    cout << "Enter the name of this gene?" << endl;
    cin >> nameGene;

    cout << "Enter the locus of this gene?" << endl;
    cin >> locus;

    Gene myGene(nameGene, locus);

    return myGene;
}

Chromosome createChromosome(){
    string chroName;
    string type;
    int typeChro;
    int nombreGene = 0;

    cout << "Enter the name of this chromosome?" << endl;
    cin >> chroName;

    cout << "Give me the type of this chromosome (0 = Circle; 1 = Line)?" << endl;
    cin >> typeChro;

    if(typeChro == 1) {
        type = "Line";
    } else {
        type = "Circle";
    }

    Chromosome chro = Chromosome(chroName, type);

    cout << "How many gene contains this chromosome?" << endl;
    cin >> nombreGene;

    while (nombreGene > 0) {
        Gene gene = createGene();
        chro.addGene(gene);
        nombreGene--;
    }

    return chro;
}

Eukaryote createEukaryote(){
    int idCell;
    double sizeCell = 0.0;
    string organeName;
    int nombreProt = 0;
    int nombreChro = 0;

    cout << "Be careful each step is final. Thanks to respect the choices of these questions." << endl;

    cout << "Enter the cell's id." << endl;
    cin >> idCell;

    cout << "Enter the cell's size (micrometer)." << endl;
    cin >> sizeCell;

    cout << "Enter the organ's name where is located the cell." << endl;
    cin >> organeName;

    // Todo : Refactoriser Fonction
    cout << "How many proteins contains the cell?" << endl;
    cin >> nombreProt;

    Eukaryote eukaryote(idCell, sizeCell, organeName);

    while (nombreProt > 0) {
        Protein prot = createProtein();
        eukaryote.addProtein(prot);
        nombreProt--;
    }

    cout << "How many chromosome contains the cell?" << endl;
    cin >> nombreChro;

    while (nbChro > 0) {
        Chromosome chromosome = createChromosome();
        eukaryote.addChromosome(kro);
        nombreChro--;
    }

    return eukaryote;
}

Prokaryote createProkaryote(){
    int idCell;
    double sizeCell;
    string chromosomeName;
    int nombrebProt = 0;

    cout << "Be careful each step is final. Thanks to respect the choices of these questions." << endl;

    cout << "Enter the cell's id." << endl;
    cin >> idCell;

    cout << "Enter the size of this cell (micrometer)." << endl;
    cin >> sizeCell;

    Chromosome chromosome = createChromosome();

    cout << "How many proteins contains this cell? " << endl;
    cin >> nombrebProt;

    Prokaryote prokaryote(idCell, sizeCell, chromosome);

    while (nombreProt > 0) {
        Protein prot = createProtein();
        pro.addProtein(prot);
        nombrebProt--;
    }

    return prokaryote;
}



void genereCell(Database bdd){
    char answer;
    do{
        cout << "Do you want to insert an eukaryote (E) or a prokaryote (P) cell or return to menu (R)? [E/P/R]" << endl;
        cin >> answer;

        // Security
        if (cin.fail()) {  // not a valid character
            cin.clear();   // clear buffer
            cin.ignore(1024, '\n');  // repair the stream
        }

        if (answer == 'e' || answer == 'E') {
            Eukaryote eukaryote = createEukaryote();
            bdd.addEukaryote(euk);
        } else {
            if (answer == 'p' || answer == 'P') {
                Prokaryote pro = createProkaryote();
                bdd.addProkaryote(pro);
            } else {
                selectMenu(bdd);
            }
        }

    } while (cin.fail() || answer != 'e' || answer != 'E' || answer != 'p' || answer != 'P' || answer != 'r' || answer != 'R');

}

