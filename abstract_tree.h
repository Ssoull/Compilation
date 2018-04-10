#ifndef AbstractTree_H_
#define AbstractTree_H_

typedef enum {INT, BOOL, CHAR, PTR, ARR, FUNC, PROD, PLUS, MINUS, DIV, TIMES, RANGE, ENUMERATE} Tag; // A COMPLETER
typedef enum {STATIC, STACK, HEAP} TypeMemory;

typedef struct AbstractTree {
  Tag tag;
  struct AbstractTree* left;
  struct AbstractTree* right;
  int placeInMemory;
  int val;
  TypeMemory typeMemory;
} AbstractTree;

AbstractTree* createAbstractTree(Tag tag, AbstractTree* left, AbstractTree* right, int placeInMemory, TypeMemory typeMemory);
void displayAbstractTree(AbstractTree* abstractTree);

#endif
