//
// Created by hasee on 2019/5/29.
//

#ifndef COMPILER2_DRAW_H
#define COMPILER2_DRAW_H

#include <fstream>
#include <string>
#include "tree.h"
using namespace std;

int my_id = 0;

void DrawTree(ofstream&, treeNode*, treeNode*, int);

#endif //COMPILER2_DRAW_H
