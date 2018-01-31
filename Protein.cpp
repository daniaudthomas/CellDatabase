#include "Protein.h"

//Constructor

Protein::Protein(int id, string name) {
    this->id = id;
    this->proteinName = proteinName;
}


// Getter and Setter

int Protein::getIdProtein() const {
    return this->id;
}

void Protein::setIdProtein(int id) {
    this->id = id;
}

string Protein::getProteinName() const {
    return this->proteinName;
}

void Protein::setProteinName(string name) {
    this->proteinName = proteinName;
}


// Display

void Protein::affiche(ostream & out) const {
    out << "Protein : Id = " << this->id << ", Name = " << this->proteinName << "." << endl;
}


// Override operator

bool Protein::operator==(Protein prot) const {
    return (this->id == prot.id) && (this->proteinName == prot.proteinName);
}

ostream & operator<<(ostream &out, const Protein &p){
    p.affiche(out);
    return out;
}

