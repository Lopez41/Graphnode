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

GraphNode* Graph::addNode(int id, int data)
 {
    GraphNode* newNode = new GraphNode(id, data);
    nodes.push_back(newNode);
    return newNode;
}

void Graph::addEdge(GraphNode* node1, GraphNode* node2) 
{
    node1->addNeighbor(node2);
    node2->addNeighbor(node1);
}

bool Graph::areConnected(const GraphNode* node1, const GraphNode* node2) const
 {
    const std::vector<GraphNode*>& neighbors = node1->getNeighbors();
    bool connected = false;

    for (const GraphNode* neighbor : neighbors) {
        if (neighbor == node2) 
        {
            connected =true;
        }
    }
    return connected;
}
