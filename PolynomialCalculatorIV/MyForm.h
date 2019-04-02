#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <stdio.h>
#include <msclr/marshal_cppstd.h>

namespace PolynomialCalculatorIV {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		char Variable;
		char SelectedOperator = '+';

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  firstEquationTxt;
	private: System::Windows::Forms::TextBox^  secondEquationTxt;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  resultLbl;






	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  operatorLbl;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  calculateBtn;
	private: System::Windows::Forms::Button^  multiplicationBtn;
	private: System::Windows::Forms::Button^  subtractionBtn;
	private: System::Windows::Forms::Button^  additionBtn;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  exitBtn;
	private: System::Windows::Forms::Button^  clearBtn;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->firstEquationTxt = (gcnew System::Windows::Forms::TextBox());
			this->secondEquationTxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->resultLbl = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->operatorLbl = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->calculateBtn = (gcnew System::Windows::Forms::Button());
			this->multiplicationBtn = (gcnew System::Windows::Forms::Button());
			this->subtractionBtn = (gcnew System::Windows::Forms::Button());
			this->additionBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// firstEquationTxt
			// 
			this->firstEquationTxt->Location = System::Drawing::Point(34, 35);
			this->firstEquationTxt->Name = L"firstEquationTxt";
			this->firstEquationTxt->Size = System::Drawing::Size(206, 22);
			this->firstEquationTxt->TabIndex = 0;
			// 
			// secondEquationTxt
			// 
			this->secondEquationTxt->Location = System::Drawing::Point(34, 150);
			this->secondEquationTxt->Name = L"secondEquationTxt";
			this->secondEquationTxt->Size = System::Drawing::Size(206, 22);
			this->secondEquationTxt->TabIndex = 1;
			this->secondEquationTxt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"First Equation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Second Equation";
			// 
			// resultLbl
			// 
			this->resultLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->resultLbl->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultLbl->Location = System::Drawing::Point(34, 217);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->ReadOnly = true;
			this->resultLbl->Size = System::Drawing::Size(206, 23);
			this->resultLbl->TabIndex = 8;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->operatorLbl);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->firstEquationTxt);
			this->panel1->Controls->Add(this->resultLbl);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->secondEquationTxt);
			this->panel1->Location = System::Drawing::Point(242, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(252, 279);
			this->panel1->TabIndex = 10;
			// 
			// operatorLbl
			// 
			this->operatorLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->operatorLbl->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->operatorLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operatorLbl->Location = System::Drawing::Point(123, 87);
			this->operatorLbl->Name = L"operatorLbl";
			this->operatorLbl->ReadOnly = true;
			this->operatorLbl->Size = System::Drawing::Size(21, 35);
			this->operatorLbl->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Result";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->calculateBtn);
			this->panel2->Controls->Add(this->multiplicationBtn);
			this->panel2->Controls->Add(this->subtractionBtn);
			this->panel2->Controls->Add(this->additionBtn);
			this->panel2->Location = System::Drawing::Point(14, 53);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 279);
			this->panel2->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(31, 221);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 16);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Calculate";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 16);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Multiplication";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 87);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Subtraction";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(35, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Addition";
			// 
			// calculateBtn
			// 
			this->calculateBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->calculateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculateBtn->Location = System::Drawing::Point(102, 217);
			this->calculateBtn->Name = L"calculateBtn";
			this->calculateBtn->Size = System::Drawing::Size(69, 23);
			this->calculateBtn->TabIndex = 3;
			this->calculateBtn->Text = L"=";
			this->calculateBtn->UseVisualStyleBackColor = true;
			this->calculateBtn->Click += gcnew System::EventHandler(this, &MyForm::calculateBtn_Click);
			// 
			// multiplicationBtn
			// 
			this->multiplicationBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->multiplicationBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplicationBtn->Location = System::Drawing::Point(102, 131);
			this->multiplicationBtn->Name = L"multiplicationBtn";
			this->multiplicationBtn->Size = System::Drawing::Size(69, 23);
			this->multiplicationBtn->TabIndex = 2;
			this->multiplicationBtn->Text = L"x";
			this->multiplicationBtn->UseVisualStyleBackColor = true;
			this->multiplicationBtn->Click += gcnew System::EventHandler(this, &MyForm::multiplicationBtn_Click);
			// 
			// subtractionBtn
			// 
			this->subtractionBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->subtractionBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtractionBtn->Location = System::Drawing::Point(102, 83);
			this->subtractionBtn->Name = L"subtractionBtn";
			this->subtractionBtn->Size = System::Drawing::Size(69, 23);
			this->subtractionBtn->TabIndex = 1;
			this->subtractionBtn->Text = L"-";
			this->subtractionBtn->UseVisualStyleBackColor = true;
			this->subtractionBtn->Click += gcnew System::EventHandler(this, &MyForm::subtractionBtn_Click);
			// 
			// additionBtn
			// 
			this->additionBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->additionBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->additionBtn->Location = System::Drawing::Point(102, 35);
			this->additionBtn->Name = L"additionBtn";
			this->additionBtn->Size = System::Drawing::Size(69, 23);
			this->additionBtn->TabIndex = 0;
			this->additionBtn->Text = L"+";
			this->additionBtn->UseVisualStyleBackColor = true;
			this->additionBtn->Click += gcnew System::EventHandler(this, &MyForm::additionBtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(258, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Operations";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(27, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Operators";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 23);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Polynomial Calculator";
			// 
			// exitBtn
			// 
			this->exitBtn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitBtn->Location = System::Drawing::Point(384, 355);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(75, 23);
			this->exitBtn->TabIndex = 14;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->clearBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBtn->Location = System::Drawing::Point(261, 355);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(75, 23);
			this->clearBtn->TabIndex = 15;
			this->clearBtn->Text = L"Clear";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MyForm::clearBtn_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->calculateBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->CancelButton = this->clearBtn;
			this->ClientSize = System::Drawing::Size(504, 394);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Polynomial Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//=========================================================StartOfDS=========================================================
//===========================================================================================================================

private: System::Void calculateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	fstream fileRead("History.txt", ios::in);
	fstream fileWrite("History.txt", ios_base::app | ios_base::out);
	map<string, string> history;
	string key, val;
	fileRead.seekg(0);
	while (fileRead.good())
	{
		getline(fileRead, key);
		if (!key.empty())
			getline(fileRead, val);
		else val = "";
		history[key] = val;
	}
	map<string, string>::iterator it = history.begin();
	map <string, string> newHistory;

	bool WantInput = 1;
	
		int i = 0;
		map <long long, long long> mp1, mp2;
		System::String^ Input1T = firstEquationTxt->Text;
		System::String^ Input2T = secondEquationTxt->Text;
		std::string Input1 = msclr::interop::marshal_as<std::string>(Input1T);
		std::string Input2 = msclr::interop::marshal_as<std::string>(Input2T);
		char Operation;
		mp1 = ToMap(Input1 + '+');
		mp2 = ToMap(Input2 + '+');

			Operation = SelectedOperator;

			// if there is a value for the key of history map where the key = input1 + op + input2
			if (!(history[Input1 + Operation + Input2].empty()))
			{
				string output = history[Input1 + Operation + Input2];
				System::String^ outputT = msclr::interop::marshal_as<System::String^>(output);
				resultLbl->Text = outputT;
			}
			// checking if operation is + or * so that for example 3x+2x = 2x+3x would have same solution despite order of input
			else if (!(history[Input2 + Operation + Input1].empty()) && (Operation == '+' || Operation == '*'))
			{
				string output =  history[Input2 + Operation + Input1];
				System::String^ outputT = msclr::interop::marshal_as<System::String^>(output);
				resultLbl->Text = outputT;
			}
			else{
			

			string output;

				if (Operation == '+') {
					output = Display(Add(mp1, mp2));
					newHistory[Input1 + Operation + Input2] = Display(Add(mp1, mp2));
				}
				else if (Operation == '-') {
					output = Display(Subtract(mp1, mp2));
					newHistory[Input1 + Operation + Input2] = Display(Subtract(mp1, mp2));
				}
				else if (Operation == '*') {
					output = Display(Multiply(mp1, mp2));
					newHistory[Input1 + Operation + Input2] = Display(Multiply(mp1, mp2));
				}

				System::String^ outputT = msclr::interop::marshal_as<System::String^>(output);
				resultLbl->Text = outputT;

				
			}

	if (!fileWrite.is_open())
	{
		cout << "Error Opening The File!" << endl;
	}
	else
	{
		map<string, string>::iterator it = newHistory.begin();
		for (it; it != newHistory.end(); it++)
		{
			if (it->first != "" || it->second != "")
			{
				fileWrite << it->first << endl;
				fileWrite << it->second << endl;
			}
		}
	}
}
		 map <long long, long long> ToMap(string Input)
		 {
			 // key : power , value : coefficent
			 map <long long, long long> mp;
			 // Number:Coefficient , Power:power ,LastSign: +ve(1) or -ve(-1)
			 long long Number = 0, Power = 0, LastSign = 1;
			 //Pow: Reading a power , VariableFound: Reading a variable
			 bool Pow = 0, VariableFound = 0;
			 for (int i = 0; i < Input.size(); i++)
			 {
				 if ((Input[i] >= 'a' && Input[i] <= 'z') || (Input[i] >= 'A' && Input[i] <= 'Z'))
				 {
					 Variable = Input[i];
					 VariableFound = 1;
				 }
				 else if (Input[i] == '^')
					 Pow = 1;
				 else if (Input[i] == '+' || Input[i] == '-')
				 {
					 Pow = 0;
					 // in case of x (equals to x^1)
					 if (Power == 0 && VariableFound)
						 Power = 1;
					 // in case of x (equals to 1x)
					 if (VariableFound && Number == 0)
						 Number = 1;
					 mp[Power] += Number * LastSign;
					 // determining if the next expression will be +ve or -ve
					 if (Input[i] == '-')
						 LastSign = -1;
					 else
						 LastSign = 1;
					 VariableFound = 0;
					 Power = 0;
					 Number = 0;
				 }
				 // getting the power number and storing it in Power
				 // getting the coefficient number and storing it in Number
				 // '0' = 48 in ascii ( '3' - '0' = 3 )
				 // example 321x -> Number = 0*10 + '3' - '0' = 3 -> Number = 3*10 + '2' - '0' = 32 -> Number = 32*10 + '1' - '0' = 321  
				 else if (Input[i] >= '0' && Input[i] <= '9')
				 {
					 Pow == 1 ? Power = (Power * 10) + (Input[i] - '0') : Number = (Number * 10) + (Input[i] - '0');
				 }
			 }
			 return mp;
		 }

		 //addition
		 map<long long, long long> Add(map<long long, long long>mp1, map<long long, long long>mp2)
		 {
			 map<long long, long long> Ans;
			 for (map<long long, long long>::iterator it = mp1.begin(); it != mp1.end(); it++)
				 Ans[it->first] += it->second;
			 for (map<long long, long long>::iterator it = mp2.begin(); it != mp2.end(); it++)
				 Ans[it->first] += it->second;
			 return Ans;
		 }
		 //subtraction
		 map<long long, long long> Subtract(map<long long, long long>mp1, map<long long, long long>mp2)
		 {
			 map<long long, long long> Ans;
			 for (map<long long, long long>::iterator it = mp1.begin(); it != mp1.end(); it++)
				 Ans[it->first] += it->second;
			 for (map<long long, long long>::iterator it = mp2.begin(); it != mp2.end(); it++)
				 Ans[it->first] -= it->second;
			 return Ans;
		 }
		 //multiplication
		 map<long long, long long> Multiply(map<long long, long long>mp1, map<long long, long long>mp2)
		 {
			 map<long long, long long> Ans;
			 for (map<long long, long long>::iterator it1 = mp1.begin(); it1 != mp1.end(); it1++)
				 for (map<long long, long long>::iterator it2 = mp2.begin(); it2 != mp2.end(); it2++)
					 Ans[it1->first + it2->first] += it1->second * it2->second;
			 return Ans;
		 }
		 //Display
		 string Display(map<long long, long long>Ans)
		 {
			 string fullEQ;
			 bool FirstTime = 1, Zero = 1;
			 for (map<long long, long long>::reverse_iterator it = Ans.rbegin(); it != Ans.rend(); it++)
			 {
				 if (it->second == 0)
					 continue;
				 Zero = 0;
				 // to put '-' if first coefficent is -ve and not put '+' if first coefficent is +ve
				 if (FirstTime)
				 {
					 if (it->second < 0) {
						 fullEQ += '-';
					 }
					 FirstTime = 0;
				 }
				 else
				 {
					 if (it->second < 0) {
						 fullEQ += " - ";
					 }
					 else {
						 fullEQ += " + ";
					 }
				 }
				 if (it->first == 0)
				 {
					 fullEQ += to_string(abs(it->second));
				 }
				 else
				 {
					 // 1x -> x
					 if (it->second != 1 && it->second != -1) {
						 fullEQ += to_string(abs(it->second));
					 }
					 fullEQ += Variable;
					 // adding power if power != 1
					 if (it->first != 1) {
						 fullEQ += '^';
						 fullEQ += to_string(it->first);
					 }
				 }
			 }
			 if (Zero)
			 {
				 fullEQ += '0';
			 }
			 return fullEQ;
		 }
private: System::Void additionBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedOperator = '+';
	operatorLbl->Text = "+";
}
private: System::Void subtractionBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedOperator = '-';
	operatorLbl->Text = "-";
}
private: System::Void multiplicationBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedOperator = '*';
	operatorLbl->Text = "x";
}
private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	firstEquationTxt->Text = "";
	secondEquationTxt->Text = "";
	resultLbl->Text = "";
}
};
}
