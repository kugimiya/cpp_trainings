#include <iostream>
using namespace std;

int main(void)
{
	const int listLenght  = 10;
	int list[listLenght]  = { 1, 2, 3, 4, 5, 4, -2, 6, -6, 2 };

	int pMatch     = 0,
		pUnderZero = 1,
		pSumm      = 0,
		pNewList[listLenght];

	cout << "Source array: ";

	for (int index = 0; index < listLenght; index++) {
		cout << list[index] << " ";

		// reverse
		pNewList[(listLenght - 1) - index] = list[index];

		// under zero
		if (list[index] < 0) {
			pUnderZero *= list[index];
		}

		if ((!pMatch) && (list[index] > 0) && (index < listLenght - 2) && (list[index] < list[index + 1])) {

			if ( !(list[index] > list[index + 1]) ) {
				pSumm += list[index];
			}

		}
	}
	cout << endl << "Reversed source array: ";

	for (int index = 0; index < listLenght; index++) {
		cout << pNewList[index] << " ";
	}

	cout << endl;	
	cout << "Under zero: " << pUnderZero << endl;
	cout << "Summ of: " << pSumm << endl;

	return 0;
}

