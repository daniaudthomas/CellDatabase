#include "Protein.h"

//Constructor

Protein::Protein(string id, string name) {
    this->id = id;
    this->name = name;
}


// Getter and Setter

string Protein::getIdProtein() const {
    return this->id;
}

void Protein::setIdProtein(string id) {
    this->id = id;
}

void Protein::setNameProtein(string name) {
    this->name = name;
}

string Protein::getNameProtein() const {
    return this->name;
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

