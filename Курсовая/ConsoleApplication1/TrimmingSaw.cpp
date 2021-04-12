#include "TrimmingSaw.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

TrimmingSaw::TrimmingSaw()
{
	cuttingAngle = 0;
	DRF = "";
}
TrimmingSaw::TrimmingSaw(const TrimmingSaw& ts)
{
	ElectricSaw(fpen);
	cuttingAngle = ts.cuttingAngle;
	DRF = ts.DRF;

}
void TrimmingSaw::PrintAllInformation()
{
	ElectricSaw::PrintAllInformation();
	cout << "������� �������� ����: " << DRF << endl;
	cout << "���� �������: " << cuttingAngle << endl;

}
void TrimmingSaw::SetDRF(string str)
{
	DRF = str;
}
string TrimmingSaw::GetDRF() const
{
	return DRF;
}
void TrimmingSaw::SetCA(int cA)
{
	cuttingAngle = cA;
}
int TrimmingSaw::GetCA() const
{
	return cuttingAngle;
}


void TrimmingSaw::readFromFile(ifstream& file)
{
	CircularSaw::readFromFile(file);
	string tmp;
	getline(file, tmp);
	DRF = tmp;
	file >> cuttingAngle;
}

void TrimmingSaw::writeToFile(string path)
{
	CircularSaw::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "������� �������� ����: ";
	file << DRF << endl;
	//file << "���� �������: ";
	file << cuttingAngle << endl;
	file.close();
}
void TrimmingSaw::enterFromKeyboard()
{
	CircularSaw::enterFromKeyboard();
	cout << "������� �������� ����: ";
	cin >> DRF;
	cout << "���� �������: ";
	cin >> cuttingAngle;
}