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

