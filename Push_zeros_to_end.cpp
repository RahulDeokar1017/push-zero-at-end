#include <iostream>
using namespace std;


void pushZeroesEnd(int *arr,int n)
{
  	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			swap(arr[i], arr[j]); 
			j++;
		}
	}
}

int main()
{

	
	
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	

	return 0;
}