/*
	Name: Bryce Rohrer
	File: project_5.cpp
	Description: This is the impementation file of the project_5 minimum spanning tree. This file is used in place of the impelmentation in the given main, in refrence to 
	taking in input and then performing the MST with the inputted graph. 
*/


#include <iostream>
#include <list>
#include <vector>
#include "project_5.h"
#include <limits>		// for using infinity, replacing mehod of INT_MAX or others
using namespace std;

void msTreeType::minimumSpanning(int sVertex) {			// this comes from the textbook, pg 712 adapted for this project
	int sv, ev;
	double minWeight;
	source = sVertex;
	bool *mstv = new bool[mst_Size];
	for (int i = 0; i < mst_Size; ++i) {
		mstv[i] = false;
		edges[i] = source;
		edgeWeights[i] = weights[source][i];
	}
	mstv[source] = true;
	edgeWeights[source] = 0;
	for (int i = 0; i < mst_Size - 1; ++i) {
		minWeight = std::numeric_limits<int>::max();
		for (int j = 0; j < mst_Size; ++j) {
			if (mstv[j]) {
				for (int k = 0; k < mst_Size; ++k) {
					if (!mstv[k] && weights[j][k] < minWeight && weights[k][j] < minWeight) {
						ev = k;
						sv = j;
						minWeight = weights[j][k];
					}
				}
			}
		}
		mstv[ev] = true;
		edges[ev] = sv;
		edgeWeights[ev] = minWeight;
	}
	LongestRoad();
	MSTOutput();
	//output
}
void msTreeType::MinComplete() {
	int c,v,a,weight;
	cin >> c;

	for (int i = 0; i < c; i++) {
		cin >> mst_Size;
		int roads;
		cin >> roads;

		map = new list<int>[mst_Size];
		weights = new double*[mst_Size];

		for (int j = 0; j < mst_Size; ++j)
			weights[j] = new double[mst_Size];

		for (int j = 0; j < mst_Size; ++j) {
			for (int k = 0; k < mst_Size; ++k) {
				weights[j][k] = std::numeric_limits<int>::max();	// large num
			}
		}

		edges = new int[mst_Size];
		edgeWeights = new double[mst_Size];

		for (int index = 0; index < roads; ++index) {
			cin >> v;
			cin >> a;
			map[v].push_back(a);
			cin >> weight;
			if (weights[v][a] < weight) {
				//weights[v][a] = weights[v][a];
				// do nothing
			}
			if (weights[a][v] < weight) {
				//weights[a][v] = weights[a][v];
				// do nothing
			}
			else {
				weights[v][a] = weight;
				weights[a][v] = weight;
			}
		}
		minimumSpanning(0);
	}
}
void msTreeType::LongestRoad(){
	int weight_max = 0;
	for (int i = 0; i<mst_Size; ++i) {
		if (edgeWeights[i] > weight_max) { weight_max = edgeWeights[i]; }
	}
	std::cout << weight_max << endl;
}
void msTreeType::MSTOutput(){
	for (int j = 0; j < mst_Size; ++j) {
		if (edges[j] != j) {
			std::cout << "(" << j << "," << edges[j] << "," << edgeWeights[j] << ") ";
		}
	}
	cout << std::endl;
}



