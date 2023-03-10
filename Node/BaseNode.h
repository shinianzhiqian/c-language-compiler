#ifndef _BASENODE_H_
#define _BASENODE_H_
#include <stdio.h>
#include <stdlib.h>

#include <list>
#include <string>

#include "NodeType.h"
class BaseNode {
 private:
  int depth;
  NodeType type;
  BaseNode *pNode;
  BaseNode *bNode;
  BaseNode *cNode;

 protected:
  std::string content;

  static void tree(BaseNode *, int, bool, bool *, char *);

 public:
  // constructors:
  BaseNode();

  BaseNode(NodeType);

  BaseNode(const std::string, NodeType);

  BaseNode(const std::string);

  // setters:
  bool setParentNode(BaseNode *parent) {
    this->pNode = parent;
    return true;
  }
  bool addChildNode(BaseNode *);

  bool addFirstBrotherNode(BaseNode *);
  bool addLastBrotherNode(BaseNode *);

  // getters:
  BaseNode *getFinalBrotherNode();

  NodeType getNodeType() { return this->type; }

  std::string getContent() { return this->content; }
  std::string getStringContent() {
    std::string s(this->content);
    return s;
  }

  std::list<BaseNode *> getAllChildrenNode();
  BaseNode *getChildNode() { return this->cNode; }

  BaseNode *getParentNode() { return this->pNode; }

  BaseNode *getBrotherNode() { return this->bNode; }

  // printers:
  void printTree(BaseNode *);

  void printInfo();

  // deconstructor:
  ~BaseNode();
};
#endif