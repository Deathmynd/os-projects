#pragma once
#include "cstring"
#include "LocalRepository.h"
#include "NetClient.h"
#include "sha256.h"

#include <stdio.h>
#pragma comment(lib, "user32.lib")

using namespace std;

//�������� �� �����
struct HardwareParameters
{
	string cpu;
	string ram;
	string rom;
};

class Protect
{
public:
	Protect();
	~Protect();

	int checkProtection();
	bool setLicenseKey(string key);
private:

	string getHardwareParameters();
	int registerProduct();
	int checkLicense();
	string getHash();

	LocalRepository rep;

	string licenseKey;

};