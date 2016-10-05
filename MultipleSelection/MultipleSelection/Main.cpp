#include <iostream>
using namespace std;

/*
Ask the user to enter a letter grade
show the user the matching GPA

Prefrom task using:
-One way selection
-Two way (have to use nesting)
-Multiple selection (if....else if)
-Switch
*/

int main()
{
	//declare variables
	char cGrade;

	//prompt for input
	cout << "Enter letter grade: ";
	cin >> cGrade;

	//force the value stored in cGrade to uppercase
	cGrade = toupper(cGrade);

	//-----ONE WAY SELECTION-----
	/*if (cGrade == 'A')
		cout << "The GPA is 4.0" << endl;
	if (cGrade == 'B')
		cout << "The GPA is 3.0" << endl; 
	if (cGrade == 'C')
		cout << "The GPA is 2.0" << endl; 
	if (cGrade == 'D')
		cout << "The GPA is 1.0" << endl; 
	if (cGrade == 'F')
		cout << "The GPA is 0.0" << endl;

	if (cGrade != 'A', && != 'B' && != 'C' && != 'D' && != 'F')
		cout << "INVALID LETTER GRADE" << endl;*/

	//-----TWO WAY SELECTION-----
	/*if (cGrade == 'A')
		cout << "The GPA is 4.0" << endl;
	else
		if (cGrade == 'B')
			cout << "The GPA is 3.0" << endl;
		else
			if (cGrade == 'C')
				cout << "The GPA is 2.0" << endl;
			else
				if (cGrade == 'D')
					cout << "The GPA is 1.0" << endl;
				else
					if (cGrade == 'F')
						cout << "The GPA is 0.0" << endl;
					else
						cout << "INVALID LETTER GRADE" << endl;*/

	//-----Multiple Selection-----
	/*if (cGrade == 'A')
		cout << "The GPA is 4.0" << endl;
	else if (cGrade == 'B')
		cout << "The GPA is 3.0" << endl; 
	else if (cGrade == 'C')
		cout << "The GPA is 2.0" << endl; 
	else if (cGrade == 'D')
		cout << "The GPA is 1.0" << endl; 
	else if (cGrade == 'F')
		cout << "The GPA is 0.0" << endl;
	else
		cout << "INVLAID LETTER GRADE" << endl;*/

	//-----MULTIPLE SELECTION (SWITCH)-----
	switch (cGrade)
	{
	case 'A' :
		cout << "The GPA is 4.0" << endl;
		break; //kicks control out of the switch
	case 'B':
		cout << "The GPA is 3.0" << endl;
		break;
	case 'C':
		cout << "The GPA is 2.0" << endl;
		break;
	case 'D':
		cout << "The GPA is 1.0" << endl;
		break;
	case 'F':
		cout << "The GPA is 0.0" << endl;
		break;
	default:
		cout << "INVALID LETTER GRADE" << endl;
	}



	return 0;
}