#pragma once

namespace interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  Green;
	protected: 
	private: System::Windows::Forms::NumericUpDown^  Red;
	private: System::Windows::Forms::NumericUpDown^  Blue;
	private: System::Windows::Forms::Label^  label1;

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
			this->Green = (gcnew System::Windows::Forms::NumericUpDown());
			this->Red = (gcnew System::Windows::Forms::NumericUpDown());
			this->Blue = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Green))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Blue))->BeginInit();
			this->SuspendLayout();
			// 
			// Green
			// 
			this->Green->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Green->Location = System::Drawing::Point(154, 119);
			this->Green->Name = L"Green";
			this->Green->Size = System::Drawing::Size(43, 20);
			this->Green->TabIndex = 0;
			// 
			// Red
			// 
			this->Red->BackColor = System::Drawing::Color::Red;
			this->Red->Location = System::Drawing::Point(234, 119);
			this->Red->Name = L"Red";
			this->Red->Size = System::Drawing::Size(42, 20);
			this->Red->TabIndex = 1;
			// 
			// Blue
			// 
			this->Blue->BackColor = System::Drawing::Color::Cyan;
			this->Blue->Location = System::Drawing::Point(307, 119);
			this->Blue->Name = L"Blue";
			this->Blue->Size = System::Drawing::Size(42, 20);
			this->Blue->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Please select the number of each chip type you would like";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 439);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Blue);
			this->Controls->Add(this->Red);
			this->Controls->Add(this->Green);
			this->Name = L"Form1";
			this->Text = L"interface";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Green))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Blue))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

