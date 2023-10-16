
#include<iostream>
#include<vector>
#include<cmath>
#include<queue>
using namespace std;

int kth_largest(vector<int> values, int k) {
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < values.size(); i++) {
    pss.push(values.at(i));
    if (pss.size() > k) {
      pss.pop();
    }
  }
  return pss.top();
}