#include <iostream>
#include "graph.h"
using namespace std;

int main() {
    Graph g(true);  // Create a directed graph

    // Add vertices
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addVertex();

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    // Display graph properties
    std::cout << "Graph is empty: " << g.isEmpty() << std::endl;
    std::cout << "Graph is directed: " << g.isDirected() << std::endl;
    std::cout << "Number of vertices: " << g.numVertices() << std::endl;
    std::cout << "Number of edges: " << g.numEdges() << std::endl;

    // Display degree information
    std::cout << "Indegree of vertex 1: " << g.indegree(1) << std::endl;
    std::cout << "Outdegree of vertex 1: " << g.outdegree(1) << std::endl;
    std::cout << "Degree of vertex 1: " << g.degree(1) << std::endl;

    // Display neighbors of a vertex
    std::vector<int> neighbors = g.neighbours(1);
    std::cout << "Neighbors of vertex 1: ";
    for (int v : neighbors) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Check if vertices are neighbors
    std::cout << "Vertex 1 is neighbor of vertex 0: " << g.neighbour(1, 0) << std::endl;

    // Remove edge
    g.removeEdge(1, 2);
    std::cout << "Number of edges after removing edge (1,2): " << g.numEdges() << std::endl;

    // Remove vertex
    g.removeVertex(2);
    std::cout << "Number of vertices after removing vertex 2: " << g.numVertices() << std::endl;

    return 0;
}
