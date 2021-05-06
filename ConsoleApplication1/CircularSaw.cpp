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
	cout << "под какую руку инструмент: " << anatomy << endl;
	cout << "ƒиаметр диска: " << discDiameter << endl;

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
	//file << "под какую руку инструмент инструмента: ";
	file << anatomy << endl;
	//file << "ƒиаметр диска: ";
	file << discDiameter << endl;
	file.close();
}
void CircularSaw::enterFromKeyboard()
{
	ElectricSaw::enterFromKeyboard();
	cout << "под какую руку инструмент инструмента: ";
	cin >> anatomy;
	cout << "ƒиаметр диска: ";
	cin >> discDiameter;
}