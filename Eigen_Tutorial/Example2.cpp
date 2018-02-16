#include <iostream>
#include <Eigen/Dense>
#include <conio.h>

using namespace Eigen;
using namespace std;

using Eigen::MatrixXd;

/*
int main()
{
	// Random(3,3) initializes a 3x3 matrix with values between -1 and 1
	MatrixXd m = MatrixXd::Random(3, 3);
	// MatrixXd::Constant(3,3,1.2) initializes a 3x3 matrix  with all coefficients equal to 1.2
	m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
	// by this stage you get a 3x3 matrix where all the values are somewhere between 10 and 110
	cout << "m =" << endl << m << endl;
	// VectorXd represents a column vector of arbitrary size 
	VectorXd v(3); // vector of 3 coefficients that are uninitialized
	v << 1, 2, 3; // Advanced initialization v= [1,2,3]
	MatrixXd mult = m * v; // multiplies matrix m and v and stores it in mult
	cout << "m * v =" << endl << mult << endl;

	_getch();
}
*/