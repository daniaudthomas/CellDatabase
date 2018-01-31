#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "addCell.h"

using namespace std;
//using namespace nlohmann;

/**
 * Display the menu
 */
void displayMenu();

/**
 * Creation of the menu
 * @param bdd
 */
void selectMenu(Repository bdd);

/**
 * Get path app's execution
 * @return
 */
string getPath();