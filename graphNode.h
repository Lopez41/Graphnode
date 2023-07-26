/*******************
*coding assignment: Final Project 
*Name: Adrian Lopez
*Date: 07/25/23
*Status:in progress
*Language: C++
*File: graphNode.h
*******************/
#ifndef GRAPH_NODE_H
#define GRAPH_NODE_H

#include <vector>

class GraphNode 
{

public:
    GraphNode(int,int); // Constructor
    int getId() const;
    int getData() const;
    void setData(int);
    void addNeighbor(GraphNode*);
    const std::vector<GraphNode*>& getNeighbors() const;
private:
    
};

#endif // GRAPH_NODE_H