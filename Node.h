#pragma once
#include "Inventor.h"
struct Node {
  Node(Inventor);
  Inventor data;
  Node *next;
};
