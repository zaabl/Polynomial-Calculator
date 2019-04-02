#include "MyForm.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <stdio.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PolynomialCalculatorIV::MyForm form;
	Application::Run(%form);
}