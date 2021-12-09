#include <iostream>

using namespace std;

int main()
{
	bool x1, x2, x3;
	int k = 0;

	cout << "Input" << endl;
	cout << " 1. x2;\n 2. x2, x3;\n 3. x1, x3; " << endl;
	cin >> k;
	switch (k)
	{
		case 1: 
			//cout << "Input x1: "; cin >> x1;
			cout << "Input x2: "; cin >> x2;
			if (x2 == 1)
			{
			}
			else
			{ 
				cout << "Put another sign." << endl;
			}
			break;

		case 2:
			cout << "Input x2: "; cin >> x2;
			cout << "Input x3: "; cin >> x3;
			if (x2 == 0 && x3 == 1 || x2 == 0 && x3 == 0)
			{
				cout << "Class 2";
			}
			else
			{
				cout << "Put another sign." << endl;
			}
			break;

		case 3:
			cout << "Choose another one sign." << endl;
			break;

		default:
			std::cout << "Default case" << std::endl;
			break;
	}

	return 0;
}