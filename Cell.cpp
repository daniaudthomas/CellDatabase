#include "Cell.h"

//Constructor

Cell::Cell(int id, double size) {
    this->id = id;
    this->size = size;
}


// Getter and Setter

string Cell::getIdName() const {
    return this->id;
}

double Cell::getSize() const {
    return this->size;
}

string Cell::getType() const {
    return this->type;
}

list<Protein> Cell::getProteinList() const {
    return this->getProteinList;
}

void Cell::setIdName(string idName) {
    this->id = idName;
}

void Cell::setSize(double size) {
    this->size = size;
}

void Cell::setProteinList(vector<Protein> proteinList) {
    this->proteinList = proteinList;
}


// Display

void Cell::affiche(ostream & out) const {
    out << " - " << "Id = " << this->id << "." << endl;
    out << " - " << "Size = " << this->size << "." << endl;
    if (!this->proteinList.empty()) {
        out << " - " << "List of Protein : " << endl;
        for (auto const &a : proteinList)
            out << "\t - " << a;
    }
}


// Copy Constructor

Cell::Cell(const Cell &cell) {
    this->id = cell.id;
    this->size = cell.size;
    this->proteinList = cell.proteilList;
}


// Function

void Cell::addProtein(Protein protein) {
    this->proteinList.push_back(protein);
}


// Override operator

ostream & operator<<(ostream &out, const Cell &c){
    c.affiche(out);
    return out;
}
