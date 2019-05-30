//
// Created by hasee on 2019/5/29.
//

#include "draw.h"

void DrawTree(ofstream& out, treeNode* curNode, treeNode* parNode, int parNum){
	int curNum = my_id;
	if (curNode != nullptr){
		out << "\tnode" << my_id++ << " [label=\"" << curNode->nodeName <<"\"];" <<endl;
		if (parNode != nullptr){
			out << "\tnode" << parNum << " -> node" << curNum << ";" <<endl;
		}
		if (curNode->childNum > 0){
			for (auto iter = curNode->child.begin();iter != curNode->child.end();++iter){
				DrawTree(out,*iter,curNode,curNum);
			}
		}
	}
}