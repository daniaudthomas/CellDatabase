#include "Gene.h"

//Constructor

Gene::Gene(string geneName, string locus) {
    this->geneName = geneName;
    this->locus = locus;
}


// Getter and Setter

string Gene::getGeneName() const {
    return this->geneName;
}

string Gene::getLocus() const {
    return this->locus;
}

void Gene::setGeneName(string name) {
    this->geneName = name;
}

void Gene::setLocus(string locus) {
    this->locus = locus;
}


// Display

void Gene::affiche(ostream &out) const {
    out << "Gene : geneName = " << this->geneName << ", Locus = " << this->locus << "." << endl;
}


// Override operator

bool Gene::operator==(Gene gene) const {
    return (this->geneName == gene.geneName) && (this->locus == gene.geneName);
}

ostream & operator<<(ostream &out, const Gene &g){
    g.affiche(out);
    return out;
}


