/*
Name: Bryce Rohrer
Description: An implementation of a minimum spanning tree 
			using edited D.S Malik file

			note: removed input graph method in place of my own (project_5.cpp)
*/
#include <iostream>
#include "project_5.h"
#include <vector>
#include <climits>
using namespace std;

int main() {
// 	int t;
//   cin >> t;
//   while (t--) {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int> > weights(n);
//     for (int i = 0; i < n; ++i) {
//       weights[i].resize(n);
//       for (int j = 0; j < n; ++j) {
//         weights[i][j] = INT_MAX;
//       }
//     }

//     while (m--) {
//       int city1, city2, weight;
//       cin >> city1 >> city2 >> weight;

//       if (weights[city1][city2] > weight) {
//         weights[city1][city2] = weight;
//         weights[city2][city1] = weight;
//       }
//     }
	msTreeType bobcat;		// instance of class for MST and prim
	bobcat.MinComplete();	// begin
}

