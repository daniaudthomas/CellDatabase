#pragma once

#include <string>
#include <iostream>
#include "../lib/json.hpp"
#include "addCell.h"

using namespace std;
using namespace nlohmann;

/**
 * Display the menu
 */
void displayMenu();

/**
 * Creation of the menu
 * @param bdd
 */
void selectMenu(Database bdd);

/**
 * Get path app's execution
 * @return
 */
string getPath();