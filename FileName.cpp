#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//string frst{"first string"}, scnd, buff;
	//char ch;

	//cout << "\n������� ������ ������: ";

	//getline(cin, scnd);

	//if (frst == scnd)
	//{
	//	frst += scnd;
	//}
	//else
	//{
	//	frst = scnd;
	//}

	//cout << "\n������ ������� ������: " << frst.front();

	//cout << "\n������ ������� ������: " << frst.back() << "\n\n";

	//for (int i = 0; i < frst.size(); i++)
	//{
	//	cout << frst[i];
	//}
	//
	//for (int i = 0; i < frst.size(); i++)
	//{
	//	cout << frst.at(i);
	//}

	//scnd.clear();

	//cout << "\n������� ������ ������ ������: ";

	//getline(cin, scnd);

	//cout << "\N������� ��������� ������� ����� ����� �� ������ ������: ";

	//getline(cin, buff);

	//if (scnd.find(buff) != string::npos)
	//{
	//	cout << scnd.find(buff);
	//}
	//else
	//{
	//	cout << "\n��������� �� �������.";
	//}

	//cout << "\n������� ������ ��� ������� � ����� � �� 4 �������: ";

	//cin >> ch;

	//scnd.append(1, ch);

	//scnd.insert(4, 1, ch);

	//scnd.erase(5, 3);

	//cout << "\n������ ����� ���������� ���� ��������: " << scnd;

	//scnd.replace(2, 4, "meow");

	//cout << "\n����� ������ � ������� puts: ";

	//puts(scnd.c_str());









	vector<int> buff1{ 1,2,3 };

	buff1.insert(buff1.begin(), 2, 0);

	cout << "\n������ �������: " << buff1.size();

	cout << "\n\n����� ������� ������ � ���������� ���������� ��������: ";

	for (int i = 0; i < buff1.size(); i++)
	{
		cout << buff1[i];
	}

	/*cout << "\n\n����� ������� � ������� ������: ";

	cout << buff1;*/

	buff1.clear();

	int elem;

	for (int i = 0; i < 2; i++)
	{
		cout << "\n������� ������� " << i+1 << ": ";
		cin >> elem;
		buff1.insert(buff1.end(), elem);
	}

	buff1.erase( buff1.begin()+1, buff1.end()-1 );

	buff1.insert(buff1.begin(), {4,5,6});

	buff1[2] = 666;

	while (!buff1.empty())
	{
		buff1.pop_back();
	}

	vector<int> buff2{ 1,2,3,4,5 };
	buff1 = { 6,7,8,9,10 };

	if (buff1 != buff2)
	{
		buff1.swap(buff2);
	}

	reverse(buff1.begin(), buff1.end());

	return 0;
}