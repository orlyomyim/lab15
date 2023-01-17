#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double a[][N]){
	for(int i = 0; i<N; i++){
	cout << "Row " << i+1 << ": ";
	for(int j = 0; j<N; j++){
	cin >> a[i][j];
	}
	}
}

void findLocalMax(const double a[][N], bool b[][N]){
	for(int i = 1; i < N; i++){
		for(int j = 1; j < N; j++){
			if(a[i][j] >= a[i-1][j]&&a[i][j] >= a[i][j-1]&&a[i][j] >= a[i][j+1]&&a[i][j] >= a[i+1][j]) b[i][j] = 1;
			else b[i][j] = 0;
		}
	}
	for(int k = 0; k < N; k++) b[0][k] = 0;
	for(int z = 0; z < N; z++) b[N-1][z] = 0;
	for(int x = 0; x < N; x++) b[x][0] = 0;
	for(int y = 0; y < N; y++) b[y][N-1] = 0;
}

void showMatrix(const bool a[][N]){
	for(int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}