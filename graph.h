/*******************
*coding assignment: Final Project 
*Name: Adrian Lopez
*Date: 07/25/23
*Status:in progress
*Language: C++
*File: graph.h
*******************/
#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "graphNode.h"

class Graph
{

public:
    Graph(); // Constructor
    ~Graph(); // Destructor
    GraphNode* addNode(int, int);// add new Node
   
};

#endif // GRAPH_H