/*******************
*coding assignment: Final Project 
*Name: Adrian Lopez
*Date: 07/25/23
*Status:in progress
*Language: C++
*File: graphNode.cpp
*******************/
#include "graphNode.h"

GraphNode::GraphNode(int id, int data) 
{
    this->id = id;
    this->data = data;
}

int GraphNode::getId() const 
{
    return id;
}

int GraphNode::getData() const 
{
    return data;
}

void GraphNode::setData(int data) 
{
    this->data = data;
}

void GraphNode::addNeighbor(GraphNode* neighbor) 
{
    neighbors.push_back(neighbor);
}

const std::vector<GraphNode*>& GraphNode::getNeighbors() const 
{
    return neighbors;
}