//***************************************************************
// Author: D.S. Malik
// Edited by: Bryce Rohrer
//
// class msTreeType
// This class specifies the operations to find a minimum
// spanning tree in a graph.
//****************************************************************
#ifndef BRYCE_R
#define BRYCE_R

#include <iostream>
#include <fstream>
#include <list>
#include <vector>
using namespace std;


class msTreeType {
public:
	
	void LongestRoad();
	void MSTOutput();
	void minimumSpanning(int sVertex);
	void Prim();
	void MinComplete();

	// ~msTreeType(); // destructor

// commented out from book, don't need

// //Function to create the graph and the weight matrix.
// //Postcondition: The graph using adjacency lists and
// // its weight matrix is created.
// void minimumSpanning(int sVertex);
// //Function to create a minimum spanning tree with
// //root as sVertex.
// // Postcondition: A minimum spanning tree is created.
// // The weight of the edges is also saved in the array
// // edgeWeights.
// void printTreeAndWeight();
// //Function to output the edges of the minimum spanning tree
// //and the weight of the minimum spanning tree.
// //Postcondition: The edges of a minimum spanning tree
// // and their weights are printed.
// msTreeType(int size = 0);
// //Constructor
// //Postcondition: mst_Size = 0; maxSize = size;
// // graph is an array of pointers to linked lists.
// // weights is a two-dimensional array to store the weights
// // of the edges.
// // edges is an array to store the edges of a minimum
// // spanning tree.
// // edgeWeights is an array to store the weights of the
// // edges of a minimum spanning tree.
// ~msTreeType();
// //Destructor
// //The storage occupied by the vertices and the arrays
// //weights, edges, and edgeWeights is deallocated.
private:
	int mst_Size, source;
	list<int> *map;
	int *edges;
	double *edgeWeights;
	double **weights;
};
#endif
