#pragma once

#include <iostream>
#include <string>

#include <windows.h>
#include <fstream>
#include "PowerTools.h"
using namespace std;
class HeatingPT : public PowerTools
{
protected:
	double temperature;
public:
	HeatingPT();
	HeatingPT(const HeatingPT& HT);
	void PrintAllInformation() override;
	void SetTemperature(double temperature);
	double GetTemperature() const;
	void readFromFile(ifstream& file) override;
	void writeToFile(string path) override;
	void enterFromKeyboard() override;
};