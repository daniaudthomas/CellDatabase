#pragma once

#include <string>
#include <vector>
#include "typeChromosome.h"

using std::vector;



class Chromosome
{
public:
    Chromosome(const char *m_morphologyType, std::vector<std::string>geneList);




protected:
     const char *m_morphologyType;
     std::m_vector<std::string>geneList
    

};