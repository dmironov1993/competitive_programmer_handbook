// Given an array of n numbers, our task is to calculate the maximum subarray
// sum, i.e., the largest possible sum of a sequence of consecutive values in the
// array2

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int best = 0, sum = 0;
	vector<int> array;
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		int number;
		cin >> number;
		array.push_back(number);
	}
	for (int k = 0; k < array.size(); k++) {
		sum = max(array[k], sum+array[k]);
		best = max(best, sum);
			}
	cout << best << "\n";
	}
