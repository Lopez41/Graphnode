/*******************
*coding assignment: Final Project 
*Name: Adrian Lopez
*Date: 07/25/23
*Status:in progress
*Language: C++
*File: graph.cpp
*******************/
#include "graph.h"

Graph::Graph() {}

Graph::~Graph() 
{
    for (GraphNode* node : nodes) 
    {
        delete node;
    }
}

