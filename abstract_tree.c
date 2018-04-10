#include<stdlib.h>
#include<stdio.h>
#include"abstract_tree.h"

AbstractTree* createAbstractTree(Tag tag, AbstractTree* left, AbstractTree* right, int placeInMemory, TypeMemory typeMemory) {
  AbstractTree *tmpAbstractTree = malloc(sizeof(AbstractTree));
  tmpAbstractTree->tag = tag;
  tmpAbstractTree->left = left;
  tmpAbstractTree->right = right;
  tmpAbstractTree->val = 4;
  tmpAbstractTree->placeInMemory = placeInMemory;
  tmpAbstractTree->typeMemory = typeMemory;

  return tmpAbstractTree;
}


void displayAbstractTree(AbstractTree* abstractTree){

  // TAG(lhs, rhs)
  printf("%s(", abstractTree->tag);
  if (abstractTree->left) {
    displayType(abstractTree->left);
  }

  printf(",");

  if (abstractTree->right) {
    displayType(abstractTree->right);
  }

  printf(")");
}


int main(int argc, char const *argv[]) {

  return 0;
}
