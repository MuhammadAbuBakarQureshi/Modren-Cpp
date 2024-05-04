#include <iostream>
#include <print>

using namespace std;

int MatricesAdditionSubtraction(){

	int rows, cols;

	cout << "Enter the rows of matrix : ";

	cin >> rows;

	cout << "Enter the cols of matrix : ";

	cin >> cols;

	int** matrix_1= new int*[rows];
	for (int i = 0; i < rows; i++) {
		matrix_1[i] = new int[cols];
	}

	cout << "\n Values for 1st matrix. \n" << endl;

	for (int i = 0; i < rows; i++) {

			cout << "Enter " << i + 1 << " row values, Add space between individual value : ";
		
		for (int j = 0; j < cols; j++) {

			cin >> matrix_1[i][j];
		}
	}

	int** matrix_2 = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix_2[i] = new int[cols];
	}


	cout << "\n Values for 2nd matrix. \n" << endl;

	for (int i = 0; i < rows; i++) {

		cout << "Enter " << i + 1 << " row values, Add space between individual value : ";

		for (int j = 0; j < cols; j++) {

			cin >> matrix_2[i][j];
		}
	}


	int** result = new int* [rows];
	for (int i = 0; i < rows; i++) {
		result[i] = new int[cols];
	}

	start:

	int oper;

	cout << "1. Addition. \n2. Subtraction. \n" << endl;

	cout << "Which caclculation you want to perform : ";

	cin >> oper;

	switch (oper){

	case 1:

	
		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++) {

				result[i][j] = matrix_1[i][j] + matrix_2[i][j];
			}
		}

		break;

	case 2:


		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++) {

				result[i][j] = matrix_1[i][j] - matrix_2[i][j];
			}
		}

		break;

	default:

		cout << "You have enter the wrong operator" << endl;
		break;
	}

	if (oper == 1 || oper == 2) {

		cout << "\n Result. \n" << endl;

		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++) {

				cout << result[i][j] << "  ";
			}

			cout << endl;
		}
	}
	else{

		int check;
	
		cout << "If you want to try again then enter  \"1\" or if you want to exit then enter \"0\" : ";

		cin >> check;
	
		if (check == 1) {

			goto start;
		}
	}


	
	return 0;
}