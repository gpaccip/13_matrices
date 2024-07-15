//Matrices1.cpp
#include<iostream>

using namespace std;

	int sumatoria(int n, int  matriz[100][100]);

int main(){
	int n, matriz[100][100];
	
	cout<<"Digite la cantidad de lineas para la matriz cuadrada: ";cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];	
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<"La suma de todos los elemenos de la diagonal superior es: "<<sumatoria(n,matriz);
	
	
	return 0;
}
	int sumatoria(int n, int  matriz[100][100]){
		int sumatoria=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			sumatoria+=matriz[i][j];
		}
	}
	return sumatoria;
}
			
			