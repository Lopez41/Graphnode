
/*******************
*coding assignment: Final Project 
*Name: Adrian Lopez
*Date: 07/25/23
*Status:in progress
*Language: C++
*File: main.h
*******************/
#include "main.h"

int main()
 {
    // Create a graph
    Graph graph;

    // Adding nodes to the graph
    GraphNode* node1 = graph.addNode(1, 100);
    GraphNode* node2 = graph.addNode(2, 200);
    GraphNode* node3 = graph.addNode(3, 300);
    GraphNode* node4 = graph.addNode(4, 400);
    GraphNode* node5 = graph.addNode(5, 500);

    // Adding edges to connect nodes
    graph.addEdge(node1, node2);
    graph.addEdge(node2, node3);
    graph.addEdge(node3, node4);
    graph.addEdge(node4, node5);
    


    return 0;
}