#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N);

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

template <typename T>
void swap (T a[], int N){
	T tempo;
    for(int i = N; i > 0; i--){
		if (a[i]>a[i-1]){
			tempo = a[i-1];
			a[i-1] = a[i];
			a[i] = tempo;
		}else{break;}
	}
}

template <typename T>
void show (T b[], int N){
	for (int i = 0; i < N; i++){
		cout << b[i] << " ";
	}
	cout << "\n";
}

template <typename T>
void insertionSort(T d[],int N){
		for(int i = 1; i < N; i++){
			swap(d,i);
			cout << "Pass " << i << ":";
			show(d,N);
		}
}
