#include "ElectricSaw.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

ElectricSaw::ElectricSaw() 
{
	workTime=0;
	material="";
}
ElectricSaw::ElectricSaw(const ElectricSaw& ed)
{
	PowerTools(fpen);
	workTime = ed.workTime;
	material = ed.material;
}
void ElectricSaw::PrintAllInformation()
{
	PowerTools::PrintAllInformation();
	cout << "время работы инструмента: " << workTime << endl;
	cout << "с каким материалом работает инструмент: " << material << endl;

}
void ElectricSaw::SetMaterial(string str)
{
	material = str;
}
string ElectricSaw::GetMaterial() const
{
	return material;
}
void ElectricSaw::SetWT(int wT)
{
	workTime = wT;
}
int ElectricSaw::GetWT() const
{
	return workTime;
}



void ElectricSaw::readFromFile(ifstream& file)
{
	PowerTools::readFromFile(file);
	string tmp;
	getline(file, tmp);
	material = tmp;
	file >> workTime;
}

void ElectricSaw::writeToFile(string path)
{
	PowerTools::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "с каким материалом работает инструмент: ";
	file << material << endl;
	//file << "время работы инструмента: ";
	file << workTime << endl;
	file.close();
}
void ElectricSaw::enterFromKeyboard()
{
	PowerTools::enterFromKeyboard();
	cout << "с каким материалом работает инструмент: ";
	cin >> material;
	cout << "время работы инструмента: ";
	cin >> workTime;
}