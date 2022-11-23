#include <iostream>
using namespace std;

void printMatrix(int matrix[][2]){
  cout << "[" << "\n";
  for(int i=0; i<2; i++){
    cout << "[";
    for (int j=0; j<2; j++){
      cout << matrix[i][j];

      if(j+1 <2){
        cout << ", ";
      }
    }
    cout << "]" << "\n";
  }
  cout << "]" << "\n\n";
}

int main() {
  int A[2][2] = {{0,1}, {4,5}};
  int B[2][2] = {{0,1}, {4,5}};
  cout << "A program to add, subtract and multiply two 2X2 matrices\n\n";
  
  cout << "Matrix A\n";
  for(int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      cout << "A["<<i<<"][" << j << "]=";
      cin >> A[i][j];
    }
  }

  
  cout << "\n\n" << "Matrix B\n";
  for(int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      cout << "B["<<i<<"][" << j << "]=";
      cin >> B[i][j];
    }
  }


  cout << "\n\n" << "===Computing===" << "\n";
  cout << "Matrix A: ";
  printMatrix(A);

  cout << "Matrix B: ";
  printMatrix(A);
  
  int result[2][2] = {{0,0}, {0,0}};

  result[0][0] = A[0][0] + B[0][0];
  result[0][1] = A[0][1] + B[0][1];
  result[1][0] = A[1][0] + B[1][0];
  result[1][1] = A[1][1] + B[1][1];

  cout << "Results: ";
  cout << "\n\n"<< "Add" << "\n";
  printMatrix(result);

  result[0][0] = A[0][0] - B[0][0];
  result[0][1] = A[0][1] - B[0][1];
  result[1][0] = A[1][0] - B[1][0];
  result[1][1] = A[1][1] - B[1][1];

  cout << "Subtract" << "\n";
  printMatrix(result);

  result[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
  result[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
  
  result[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
  result[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

  cout << "Multiply" << "\n";
  printMatrix(result);
  
}