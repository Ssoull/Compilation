#ifndef ABSTRACT_TREE_H_
#define ABSTRACT_TREE_H_

struct abstract_tree{
  int etiquette;
  struct abstract_tree* left;
  struct abstract_tree* right;
}

struct abstract_tree* abstractSyntaxTree(struct abstract_tree*, struct abstract_tree*, struct abstract_tree*);

#endif
