#include "Chromosome.h"

//Constructor

Chromosome::Chromosome(string chromosomeName, string type) {
    this->chromosomeName = chromosomeName;
    this->type = type;
}


// Getter and Setter

string Chromosome::getChromosomeName() const {
    return this->chromosomeName;
}

string Chromosome::getType() const {
    return  this->type;
}

vector<Gene> Chromosome::getGeneList() const {
    return this->geneList;
}

void Chromosome::setType(string type) {
    this->type = type;
}

void Chromosome::setChromosomeName(string ChromosomeName) {
    this->chromosomeName = chromosomeName;
}

void Chromosome::setGeneList(vector<Gene> geneList) {
    this->geneList = geneList;
}


// Function

void Chromosome::addGene(Gene g) {
    this->geneList.push_back(g);
}


// Display

void Chromosome::affiche(ostream & out) const {
    out << " - Chromosome : Name = " << this->chromosomeName << " , Type = " << this->type << "." << endl;
    if (!this->geneList.empty()){
        out << "\t\t - List of Gene : " << endl;
        for ( auto const& a : geneList)
            out << "\t\t\t - " << a;
    }
}


// Copy Constructor

Chromosome::Chromosome(const Chromosome& chromosome){
    this->chromosomeName = chromosome.chromosomeName;
    this->type = chromosome.type;
    this->geneList = chromosome.geneList;
};


// Override operator

bool Chromosome::operator==(Chromosome chromosome) const {
    return (this->chromosomeName == chromosome.chromosomeName) && (this->type == chromosome.type) && (this->geneList == chromosome.geneList);
}

ostream & operator<<(ostream &out, const Chromosome &c){
    c.affiche(out);
    return out;
}


