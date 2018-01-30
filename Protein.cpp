#include "Protein.h"

//Constructor

Protein::Protein(int id, string name) {
    this->id = id;
    this->name = name;
}


// Getter and Setter

string Protein::getIdProtein() const {
    return this->id;
}

void Protein::setIdProtein(int id) {
    this->id = id;
}

string Protein::getProteinName() const {
    return this->name;
}

void Protein::setProteinName(string name) {
    this->name = name;
}


// Display

void Protein::affiche(ostream & out) const {
    out << "Protein : Id = " << this->id << ", Name = " << this->name << "." << endl;
}


// Override operator

bool Protein::operator==(Protein prot) const {
    return (this->id == prot.id) && (this->name == prot.name);
}

ostream & operator<<(ostream &out, const Protein &p){
    p.affiche(out);
    return out;
}

