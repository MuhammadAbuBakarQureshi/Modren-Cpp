#include <iostream>
#include <print>

using namespace std;

int MatricesMultiplication(){


	int rows, cols; // Matrix rows and cols 

	cout << "Enter rows of matrix : ";

	cin >> rows; // Input rows 

	cout << "Enter cols of the matrix : ";

	cin >> cols; // Input cols

	// 1st Matrix declaration

	int** matrix_1 = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix_1[i] = new int[cols];
	}

	// 2nd Matrix declaration

	int** matrix_2 = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix_2[i] = new int[cols];
	}

	// Intializing 1st Matrix

	cout << "\n Values For 1st Matrix. \n" << endl;

	for (int i = 0; i < rows; i++) {

		cout << "Enter " << i + 1 << " row values, Add spaces between individual values : ";

		for (int j = 0; j < cols; j++) {

			cin >> matrix_1[i][j];
		}

	}

	// Intializing 2nd Matrix

	cout << "\n Values For 2nd Matrix. \n" << endl;

	for (int i = 0; i < rows; i++) {

		cout << "Enter " << i + 1 << " row values, Add spaces between individual values : ";

		for (int j = 0; j < cols; j++) {

			cin >> matrix_2[i][j];
		}

	}


	// Multiplication


	int** result = new int* [rows];
	for (int i = 0; i < rows; i++) {
		result[i] = new int[cols];
	}



	if (rows == 2) {


		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < rows; j++) {

				result[i][j] = (matrix_1[i][0] * matrix_2[0][j]) + (matrix_1[i][1] * matrix_2[1][j]);
			}
		}
	}
	else if (rows == 3) {

		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < rows; j++) {

				result[i][j] = (matrix_1[i][0] * matrix_2[0][j]) + (matrix_1[i][1] * matrix_2[1][j]) + (matrix_1[i][2] * matrix_2[2][j]);
			}
		}


		// Result after multiplication

		cout << "\n Result. \n" << endl;

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {

				cout << result[i][j] << "  ";
			}

			cout << endl;
		}


	}

	return 0;
}