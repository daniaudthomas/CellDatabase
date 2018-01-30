#include "addCell.h"


Protein createProtein(){
    string idProt;
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
    string nameChr;
    string type;
    int typeCL;
    int nbGene = 0;

    cout << "Enter the name of this chromosome?" << endl;
    cin >> nameChr;

    cout << "Give me the type of this chromosome (0 = Circle; 1 = Line)?" << endl;
    cin >> typeCL;

    if(typeCL == 1) {
        type = "Line";
    } else {
        type = "Circle";
    }

    Chromosome chr = Chromosome(nameChr, type);

    cout << "How many gene contains this chromosome?" << endl;
    cin >> nbGene;

    while (nbGene > 0) {
        Gene gene = createGene();
        chr.addGene(gene);
        nbGene--;
    }

    return chr;
}

Eukaryote createEukaryote(){
    string idCell;
    double sizeCell = 0.0;
    string nameOrgan;
    int nbProt = 0;
    int nbChro = 0;

    cout << "Be careful each step is final. Thanks to respect the choices of these questions." << endl;

    cout << "Enter the cell's id." << endl;
    cin >> idCell;

    cout << "Enter the cell's size (micrometer)." << endl;
    cin >> sizeCell;

    cout << "Enter the organ's name where is located the cell." << endl;
    cin >> nameOrgan;

    // Todo : Refactoriser Fonction
    cout << "How many proteins contains the cell?" << endl;
    cin >> nbProt;

    Eukaryote euk(idCell, sizeCell, nameOrgan);

    while (nbProt > 0) {
        Protein prot = createProtein();
        euk.addProtein(prot);
        nbProt--;
    }

    cout << "How many chromosome contains the cell?" << endl;
    cin >> nbChro;

    while (nbChro > 0) {
        Chromosome kro = createChromosome();
        euk.addChromosome(kro);
        nbChro--;
    }

    return euk;
}

Prokaryote createProkaryote(){
    string idCell;
    double sizeCell;
    string nameChromosome;
    int nbProt = 0;

    cout << "Be careful each step is final. Thanks to respect the choices of these questions." << endl;

    cout << "Enter the cell's id." << endl;
    cin >> idCell;

    cout << "Enter the size of this cell (micrometer)." << endl;
    cin >> sizeCell;

    Chromosome kro = createChromosome();

    cout << "How many proteins contains this cell? " << endl;
    cin >> nbProt;

    Prokaryote pro(idCell, sizeCell, kro);

    while (nbProt > 0) {
        Protein prot = createProtein();
        pro.addProtein(prot);
        nbProt--;
    }

    return pro;
}



void entryCell(Database bdd){
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
            Eukaryote euk = createEukaryote();
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

