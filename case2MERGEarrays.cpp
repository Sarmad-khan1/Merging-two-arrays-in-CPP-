#include <iostream>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2);
int main()
{
	system("cls");
	int size1 = 1000;
	int arr1[size1];

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the elements of array 1: ";
		cin >> arr1[i];
	}
	int size2;
	cout << "Enter size of array 2: ";
	cin >> size2;
	int arr2[size2];
	for (int i = 0; i < size2; i++)
	{
		cout << "Enter the elements of array 2: ";
		cin >> arr2[i];
	}

	merge(arr1, 4, arr2, size2);

	return 0;
}
void merge(int arr1[], int size1, int arr2[], int size2)
{
	int mergedSize = size1 + size2;
	int mergedarray[mergedSize];
	
	// int temp = arr1[1];
	// int last = arr1[2];
	
	for (int i = 0; i < size1; i++)
	{
		mergedarray[i] = arr1[i];
	}	
	// arr1[size2 + 1] = temp;
	// arr1[size2 + 2] = last;
	for (int i = 0; i < size2; i++)
	{
		mergedarray[size1 + i] = arr2[i];
	}
	cout<<"Merged Array: ";
	for ( int i = 0; i < mergedSize; i++ )
	{
		cout<<mergedarray[i]<<", ";
	}
} 