#pragma once

#include <string>
#include <iostream>
#include "Protein.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Eukaryote.h"
#include "Prokaryote.h"
#include "Repository.h"
#include "menu.h"

using namespace std;

/**
 * createProtein
 * @return Protein
 */
Protein createProtein();

/**
 * createGene
 * @return Gene
 */
Gene createGene();

/**
 * createChromosome
 * @return Chromosome
 */
Chromosome createChromosome();

/**
 * createEukaryote
 * @return Eukaryote
 */
Eukaryote createEukaryote();

/**
 * createProkaryote
 * @return Prokaryote
 */
Prokaryote createProkaryote();

/**
 * Allow to enter manually the information of one cell
 * @param bdd
 */
void genereCell(Repository bdd);




