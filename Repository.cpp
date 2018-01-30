#include "Repository.h"


/* Getter and Setter */

vector<Eukaryote> Repository::getEukaryoteList() const {
    return this->eukaryoteList;
}

void Repository::setEukaryoteList(vector<Eukaryote> eukaryoteList) {
    this->eukaryoteList = eukaryoteList;
}

vector<Prokaryote> Repository::getProkaryotelist() const {
    return this->prokayoteList;
}

void Repository::setProkaryoteList(vector<Prokaryote> prokaryoteList) {
    this->prokaryoteList = prokaryoteList;
}


/* Fonction Add and Del */

void Repository::addEukaryote(Eukaryote e) {
    this->eukaryoteList.push_back(e);
}

void Repository::addProkaryote(Prokaryote p) {
    this->prokaryoteList.push_back(p);
}

void Repository::delEukaryoteById(int id) {
    if ( !this->eukaryoteList.empty() /*&& existCell*/) {
        vector<Eukaryote>::iterator it = eukaryoteList.begin();
        while (it != this->eukaryoteList.end()){
            if (it->getIdName() == id){
                this->eukaryoteList.erase(it);
                break;
            }
            it++;
        }
    }
}

void Repository::delProkaryoteById(int id) {
    if ( !this->prokaryoteList.empty() /*&& existCell*/) {
        vector<Prokaryote>::iterator it = prokaryoteList.begin();
        while (it != this->prokaryoteList.end()){
            if (it->getIdName() == id){
                this->prokaryoteList.erase(it);
                break;
            }
            it++;
        }
    }
}

void Repository::delCellById(int id) {
    delProkaryoteById(id);
    delEukaryoteById(id);
}

/* Fonction with filter */

void Repository::displayCellById(int id){
    displayProkaryoteById(id);
    displayEukaryoteById(id);
}

void Repository::displayEukaryoteById(int id){
    if ( !this->eukaryoteList.empty()) {
        vector<Eukaryote>::iterator itEukaryote = eukaryoteList.begin();
        while (itEukaryote != this->eukaryoteList.end()){
            if (itEukaryote->getIdName() == id) {
                cout << *itEukaryote << endl;
                break;
            }
            itEukaryote++;
        }
    }
}

void Repository::displayProkaryoteById(int id){
    if ( !this->eukaryoteList.empty()) {
        vector<Prokaryote>::iterator itProkaryote = prokaryoteList.begin();
        while (itProkaryote != this->prokaryoteList.end()){
            if (itProkaryote->getIdName() == id){
                cout << *itProkaryote << endl;
                break;
            }
            itProkaryote++;
        }
    }
}


void Repository::displayOnlyEukaryote() {
    if ( !this->eukaryoteList.empty() ) {
        list<Eukaryote>::iterator it = eukaryoteList.begin();
        while (it != this->eukaryoteList.end()){
            cout << *it << endl;
            it++;
        }
    }
}

void Repository::displayOnlyProkaryote() {
    if ( !this->arrayProkaryote.empty() /*&& existCell*/) {
        vector<Prokaryote>::iterator it = prokaryoteList.begin();
        while (it != this->prokaryoteList.end()){
            cout << *it << endl;
            it++;
        }
    }
}

void Repository::displayCellSizeBetween(double min, double max) {
    displayProkaryoteSizeBetween(min, max);
    displayEukaryoteSizeBetween(min, max);
}

void Repository::displayProkaryoteSizeBetween(double min, double max) {
    if ( !this->prokaryoteList.empty()) {
        vector<Prokaryote>::iterator itProkaryote = prokaryoteList.begin();

        while (itProkaryote != this->prokaryoteList.end()){
            if (itProkaryote->getSize() >= min && itProkaryote->getSize() <= max){
                cout << *itProkaryote << endl;
            }
            itProkaryote++;
        }
    }
}

void Repository::displayEukaryoteSizeBetween(double min, double max) {
    if (!this->eukaryoteList.empty()) {
        vector<Eukaryote>::iterator itEukaryote = eukaryoteList.begin();

        while (itEukaryote != this->eukaryoteList.end()){
            if (itEukaryote->getSize() >= min && itEukaryote->getSize() <= max) {
                cout << *itEukaryote << endl;
            }
            itEukaryote++;
        }
    }
}


void Repository::displayProkaryoteHavingChromosomeExprimedGene(int idGene) {
    if ( !this->prokaryoteList.empty()) {
        for ( auto const& pro : prokaryoteList){
            if (pro.getChromosome().getChromosomeName() == "") {
            } else{
                for ( auto const& gene : pro.getChromosome().getGeneList()){
                    if (gene.getGeneName() == idGene){
                        cout << pro << endl;
                    }
                }
            }
        }
    }
}


void Repository::displayEukaryoteHavingChromosomeExprimedGene(int idGene) {
    if ( !this->eukaryoteList.empty()) {
        for ( auto const& euk : eukaryoteList){
            if (!euk.getChromosomeList().empty()) {
                for ( auto const& Chromosome : eukaryote.getChromosomeList()){
                    if (!chromosome.getGeneList().empty() ){
                        for ( auto const& gene : chromosome.getGeneList()){
                            if (gene.getGeneName() == idGene){
                                cout << =eukaryote << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}



void Repository::displayCellHavingChromosomeExprimedGene(int idGene) {
    displayProkaryoteHavingChromosomeExprimedGene(idGene);
    displayEukaryoteHavingChromosomeExprimedGene(idGene);
}

bool cellsCp(Cell* cell, Cell* cellBis) {
    return cell->getSize() < cellBis->getSize();
}


void Repository::displayCellBySize() {
    vector<Cell*> cellList;

    if ( !this->prokaryoteList.empty()) {
        for (auto &prokaryote : prokaryoteList) {
            cellList.push_back(&prokaryote);
        }
    }

    if ( !this->eukaryoteList.empty()) {
        for (auto &euk : eukaryoteList) {
            cellList.push_back(&eukaryote);
        }
    }

    cellList.sort(cellsCp);
    if ( !cellList.empty()) {
        for (auto const &cell : cellList) {
            cout << *cell << endl;
        }
    }

    cellList.clear();
}

void Repository::affiche(ostream & out) const {
    out << " ---- Repository ----- " << endl;
    if (!this->eukaryoteList.empty()){
        for ( auto const& a : eukaryoteList)
            out << a;
    }
}


// Override

ostream & operator<<(ostream &out, const Repository &c){
    c.affiche(out);
    return out;
}