#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	const char* f_name = "sample.txt";

	ifstream raw;
	raw.open(f_name, ios::in);
	string line;

	if (raw.is_open())
	{
		getline(raw, line);
		raw.close();
	};

	cout << line << "\n";

	int l_len = line.length();
	int cur_pr = 0;
	vector<string> prs;
	vector<string> prso;

	string pr;
	for (int i = 0; i < l_len; i++)
	{
		// drop space letters in begin of predlojenie
		if (!((line[i] == ' ') && (pr.length() < 1)))
		{
			pr = pr + line[i];
		}

		if (i && line[i] == '.')
		{
			if (pr[1] == ' ')
			{
				prs.push_back(pr);
			} else {
				prso.push_back(pr);
			}

			pr = "";
		}
	}

	// run over vector and output true predlojenies
	// output cuul, by poping from vector
	// i seems like child
	for (int i = 0; i < prs.size(); i++)
	{
		cout << prs[i] << " ";
	}

	for (int i = 0; i < prso.size(); i++)
        {
                cout << prso[i] << " ";
        }

	cout << "\n";

	return 0;
}
