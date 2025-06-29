/*Given an array arr[], the task is to print every alternate element of the array starting from the first element.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: 10 30 50
Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).*/
// Iterate C++ Program to print alternate elements
// of the array

#include <iostream>
#include <vector>
using namespace std;

vector<int> getAlternates(vector<int> &arr) {
    vector<int> res;
  
    // Iterate over all alternate elements 
    for(int i = 0; i < arr.size(); i += 2) {
    	res.push_back(arr[i]);
    }
    return res;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    vector<int> res = getAlternates(arr); 
    for(int x: res)
        cout << x << " ";
}







