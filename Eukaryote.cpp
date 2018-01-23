#include "Eukaryote.h"

//Constructor

Eukaryote::Eukaryote(string id, double size, string organeName): Cell(id, size), organeName(organeName){
    this->type = "Eukaryote";
}


// Getter and Setter

string Eukaryote::getOrganeName() const {
    return this->organeName;
}

vector<Chromosome> Eukaryote::getChromosomeList() const {
    return this->chromosomeList;
}

void Eukaryote::setOrganeName(string OrganeName) {
    this->organeName = organeName;
}

void Eukaryote::setChromosomeList(vector<Chromosome> chromosomeList) {
    this->chromosomeList = chromosomeList;
}

// Function

void Eukaryote::addChromosome(Chromosome chromosome) {
    this->chromosomeList.push_back(chromosome);
}

// Display

// Copy Constructor

// Override operator

// Export 
