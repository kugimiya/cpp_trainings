#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Price
{
	string product_name;
	string vendor_name;
	int value; //so, the price
};

int main(void)
{
	int max_records = 8;
	vector<Price> records;

	for (int i = 0; i < max_records; i++)
	{
		Price __EX;

		cout << "Enter data for " << i << "/" << max_records-1 << ": ";
		cout << "\nProduct name: ";
		cin  >> __EX.product_name;
		cout << "Vendor name: ";
		cin  >> __EX.vendor_name;
		cout << "Value: ";
		cin  >> __EX.value;

		records.push_back(__EX);
		cout << "\n";
	}

	bool remove_kebab = true;
	while (remove_kebab)
	{
		string query_name = "";
		cout << "Enter vendor name: ";
		cin  >> query_name;

		if (query_name.length())
		{
			for (int i = 0; i < max_records; i++)
			{
				if (query_name == records[i].vendor_name)
				{
					cout << "\nProduct: " << records[i].product_name;
					cout << "\nPrice: " << records[i].value << "\n";
				}
			}
		}
		else
		{
			cout << "Nothing specified, type REMOVE_KEBAB for exit\n";
		}

		if (query_name == "REMOVE_KEBAB")
		{
			remove_kebab = false;
		}
	}

	return 0;
}
