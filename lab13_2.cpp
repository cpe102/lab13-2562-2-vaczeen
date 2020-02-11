#include<iostream
#include<string>
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
void inputMatrix(double A[][N]){

	for(int i=0;i<N;i++){
	cout<<"Row "<<i+1<<":";
	for(int j=0;j<N;j++){
		cin>>A[i][j];
	}
	
	}

}
void findLocalMax(const double A[][N], bool B[][N]){
	B[0][0]=0;
	B[0][1]=0;
	B[0][2]=0;
	B[0][3]=0;
	B[0][4]=0;
	B[1][0]=0;
	B[2][0]=0;
	B[3][0]=0;
	B[4][0]=0;
	B[4][1]=0;
	B[4][2]=0;
	B[4][3]=0;
	B[4][4]=0;
	B[2][4]=0;
	B[3][4]=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
		if(A[i][j]>=A[i][j+1]&&A[i][j]>=A[i+1][j]&&A[i][j]>=A[i+2][j+1]&&A[i][j]>=A[i+1][j+2]){
		return B[i][j]1;
	}else{
		return B[i][j]0;
	}	
		}
	}
	
	
}
// Wri