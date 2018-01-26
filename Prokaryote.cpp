#include "Prokaryote.h"

//Constructor

Prokaryote::Prokaryote(string id, double size, Chromosome chromosome): Cell(id, size), chromosomePro(chromosome){
    this->type = "Prokaryote";//Doute
};


// Getter and Setter

Chromosome Prokaryote::getChromosome() const {
    return this->chromosomePro;
}

void Prokaryote::setChromosome(Chromosome kro) {
    this->chro = kro;
}

string Prokaryote::getBacteriumName() const {
    return this->bateriumName;
}

void Prokaryote::setBacteriumName(Chromosome chromosomePro) {
    this->chro = kro;//à voir
}
