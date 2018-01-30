#include "Prokaryote.h"

//Constructor

Prokaryote::Prokaryote(string id, double size, Chromosome chromosome): Cell(id, size), chromosomePro(chromosome){
    this->type = "Prokaryote";//Doute
};


// Getter and Setter

Chromosome Prokaryote::getChromosome() const {
    return this->chromosomePro;
}

void Prokaryote::setChromosome(Chromosome chromosome) {
    this->chromosomePro = chromosome;
}

string Prokaryote::getBacteriumName() const {
    return this->bateriumName;
}

void Prokaryote::setBacteriumName(string bacteriumName) {
    this->bacteriumName = bacteriumName;
}

// Display

void Prokaryote::affiche(ostream & out) const {
    out << "**********************************************************************\n" << endl;
    out << "Prokaryote Cell" << endl;
    Cell::affiche(out);
    if (this->chromosomePro.getChromosomeName() != "") {
        out << this->chromosomePro << endl;
    }
    out << "\n**********************************************************************" << endl;

}


// Override operator

bool Prokaryote::operator==(Prokaryote pro) const {
    return (this->id == pro.id) && (this->size == pro.size) && (this->chromosomePro == pro.chromosomePro);
}

ostream & operator<<(ostream &out, const Prokaryote &p){
    p.affiche(out);
    return out;
}
