#include "CircularSaw.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

CircularSaw::CircularSaw()
{
	discDiameter = 0;
	anatomy = "";
}
CircularSaw::CircularSaw(const CircularSaw& ed)
{
	ElectricSaw(fpen);
	discDiameter = ed.discDiameter;
	anatomy = ed.anatomy;

}
void CircularSaw::PrintAllInformation()
{
	ElectricSaw::PrintAllInformation();
	cout << "��� ����� ���� ����������: " << anatomy << endl;
	cout << "������� �����: " << discDiameter << endl;

}
void CircularSaw::SetAnatomy(string str)
{
	anatomy = str;
}
string CircularSaw::GetAnatomy() const
{
	return anatomy;
}
void CircularSaw::SetDD(int dD)
{
	discDiameter = dD;
}
int CircularSaw::GetDD() const
{
	return discDiameter;
}

void CircularSaw::readFromFile(ifstream& file)
{
	ElectricSaw::readFromFile(file);
	string tmp;
	getline(file, tmp);
	anatomy = tmp;
	file >> discDiameter;
}

void CircularSaw::writeToFile(string path)
{
	ElectricSaw::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "��� ����� ���� ���������� �����������: ";
	file << anatomy << endl;
	//file << "������� �����: ";
	file << discDiameter << endl;
	file.close();
}
void CircularSaw::enterFromKeyboard()
{
	ElectricSaw::enterFromKeyboard();
	cout << "��� ����� ���� ���������� �����������: ";
	cin >> anatomy;
	cout << "������� �����: ";
	cin >> discDiameter;
}