/*
Name: Bryce Rohrer
Date: 3/14/2021
Description: An implementation of a minimum spanning tree.
*/

#include <vector>
#include <iostream>
#include <climits>
using namespace std;


int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int> > weights(n);
    for (int i = 0; i < n; ++i) {
      weights[i].resize(n);
      for (int j = 0; j < n; ++j) {
        weights[i][j] = INT_MAX;
      }
    }

    while (m--) {
      int city1, city2, weight;
      cin >> city1 >> city2 >> weight;

      if (weights[city1][city2] > weight) {
        weights[city1][city2] = weight;
        weights[city2][city1] = weight;
      }
    }

    // Queue queue(n);

    // Create a container to maintain the dist[] values; This can be
    // done through an array or a min-heap.
    

    // prim2(queue, weights);   // implement Prim2 algorithm.

    
    // print out the longest road, as well as the edges in the constructed MST.

  }


}
