#include <cstdlib>
#include <iostream>

using namespace std;


// ---------- MATRIX FUNCTION --------- //


void Matrix(int Matrix[3][3], int vector[3]) {
	int a;
	cout << "\n1. To make Matrix\t2. To make vector\n";
	cin >> a;
	if (a == 1) {
		cout << "Write the 1st row : ";
		int i = 0;
		while (i <= 2) {
			cin >> Matrix[0][i];
			i++;
		}
		cout << "Write the 2nd row : ";
		int j = 0;
		while (j <= 2) {
			cin >> Matrix[1][j];
			j++;
		}
		cout << "Write the 3rd row : ";
		int k = 0;
		while (k <= 2) {
			cin >> Matrix[2][k];
			k++;
		}

		cout << "Matrix is \n";
		for (int i = 0; i <= 2; i++)
			cout << Matrix[0][i] << ' ';
		cout << endl;
		for (int i = 0; i <= 2; i++)
			cout << Matrix[1][i] << ' ';
		cout << endl;
		for (int i = 0; i <= 2; i++)
			cout << Matrix[2][i] << ' ';
		cout << endl;
	}
	else if (a == 2) {
		cout << "Write the 3 numbers of 3x1 vector: ";
		for (int i = 0; i <= 2; i++)
			cin >> vector[i];
		cout << "3x1 Vector is\n";
		for (int i = 0; i <= 2; i++)
			cout << vector[i] << endl;
	}
}

// ---------- MAIN FUNCTION ----------- //


int main() {
	int M_one[3][3], M_two[3][3], vector[3];
	Matrix(M_one, vector);
	Matrix(M_two, vector);
	Matrix(M_two, vector);
	int A =0;
	while (A != -1) {
		cout << "\n\n1. To add 3x3 Matrices\n2. To Multiply a 3x3 matrix with a 3x1 vector\n3. Transpose of 3x3 Matrix\n4. To exit the program";
		cin >> A;
		if (A == 1) {
			system("pause");
			cout << "\nThe two Matrices after addition result in \n";
			for (int i = 0; i <= 2; i++)
				cout << M_one[0][i] + M_two[0][i] << ' ';
			cout << endl;
			for (int i = 0; i <= 2; i++)
				cout << M_one[1][i] + M_two[1][i] << ' ';
			cout << endl;
			for (int i = 0; i <= 2; i++)
				cout << M_one[2][i] + M_two[2][i] << ' ';
		}
		else if (A == 2) {
			int U;
			system("cls");
			cout << "Choose the Matrix ( 1 or 2 ): ";
			cin >> U;
			switch (U) {
			case 1: {
				system("pause");
				cout << "\nResult is\n";
				for (int i = 0; i <= 2; i++)
					cout << M_one[i][0] * vector[0] + M_one[i][1] * vector[1] + M_one[i][2] * vector[2] << endl;
				break;
			}
			case 2: {
				system("pause");
				cout << "\nResult is\n";
				for (int i = 0; i <= 2; i++)
					cout << M_two[i][0] * vector[0] + M_two[i][1] * vector[1] + M_two[i][2] * vector[2] << endl;
				break;
			}
			}
		}
		else if (A == 3) {
			int B;
			cout << "Transpose Of Which Matrix ( 1 or 2 ): ";
			cin >> B;
			if (B == 1) {
				cout << "The Transpose of Matrix 1 is: " << endl;
				for (int i = 0; i <= 2; i++)
					cout << M_one[i][0] << ' ';
				cout << endl;
				for (int i = 0; i <= 2; i++)
					cout << M_one[i][1] << ' ';
				cout << endl;
				for (int i = 0; i <= 2; i++)
					cout << M_one[i][2] << ' ';
				cout << endl;
			}
			if (B == 2) {

				cout << "The Transpose of Matrix 2 is: " << endl;
				for (int i = 0; i <= 2; i++)
					cout << M_two[i][0] << ' ';
				cout << endl;
				for (int i = 0; i <= 2; i++)
					cout << M_two[i][1] << ' ';
				cout << endl;
				for (int i = 0; i <= 2; i++)
					cout << M_two[i][2] << ' ';
				cout << endl;
			}
		}
		else if (A == 4) {
			A = -1;
			break;
		}
	}
}

// ------------ PROGRAM ENDS ----------- // 




