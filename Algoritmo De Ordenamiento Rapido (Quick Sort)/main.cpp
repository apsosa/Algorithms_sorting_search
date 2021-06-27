#include <iostream>
#include <vector>
using namespace std;


// CPP code for recursive function of Quicksort 
#include <bits/stdc++.h> 

using namespace std; 

// Function to swap numbers 
void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

/* This function takes last element as pivot, 
places the pivot element at its correct 
position in sorted array, and places 
all smaller (smaller than pivot) to left 
of pivot and all greater elements to 
right of pivot */
int partition(int arr[], int l, int h) 
{ 
	int x = arr[h]; 
	int i = (l - 1); 

	for (int j = l; j <= h - 1; j++) { 
		if (arr[j] <= x) { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[h]); 
	return (i + 1); 
} 

/* A[] --> Array to be sorted, 
l --> Starting index, 
h --> Ending index */
void quickSort(int A[], int l, int h) 
{ 
	if (l < h) { 
		/* Partitioning index */
		int p = partition(A, l, h); 
		quickSort(A, l, p - 1); 
		quickSort(A, p + 1, h); 
	} 
} 


void mostrarVector(vector<int> v){
    cout << "[";
    for(int i=0; i< v.size() -1;i++){
        cout << v[i] << ",";
    }
    if(v.size() > 0){
        cout << v[v.size()-1];
    }
    cout <<"]"<< endl;
}

int main() 
{ 
  
    int n = 5; 
    std::cout << "Vector sin Ordenar" << std::endl;
    int arr[n] = {6,5,4,3,2,1}; 
 	for (int i = 0; i < n; i++) { 
       cout << arr[i] << " "; 
    }
    cout << "\n" <<""; 
 
    quickSort(arr, 0, n - 1); 
  	std::cout << "Vector ordenado utilizando QuickSort" << std::endl;
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << "\n" <<"";
  
    return 0; 
} 
