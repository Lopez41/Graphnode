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
    void addEdge(GraphNode*, GraphNode*);//adds undirected edge between two nodes
    bool areConnected(const GraphNode*, const GraphNode*) const;//check if two nodes in the graph are connected
    const std::vector<GraphNode*>& getNodes() const; //Returns a constant reference to the vector of nodes in the graph.

private:
    std::vector<GraphNode*> nodes;
};

#endif // GRAPH_H