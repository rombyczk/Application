
#pragma once
#include"MyForm.h"
#include<cmath>
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opcje
	/// </summary>
	public ref class Opcje : public System::Windows::Forms::Form
	{
	public:
		Opcje(void)
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
		~Opcje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  powrot;
	protected:
	private: System::Windows::Forms::Label^  Nazwa_opcje;
	private: System::Windows::Forms::Button^  Exit;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  Own;
	private: System::Windows::Forms::RadioButton^  Easy;
	private: System::Windows::Forms::RadioButton^  Middle;
	private: System::Windows::Forms::RadioButton^  Hard;
	private: System::Windows::Forms::RadioButton^  Impossible;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
	private: System::Windows::Forms::RadioButton^  On;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;


	protected:

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
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->Nazwa_opcje = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Own = (gcnew System::Windows::Forms::RadioButton());
			this->Easy = (gcnew System::Windows::Forms::RadioButton());
			this->Middle = (gcnew System::Windows::Forms::RadioButton());
			this->Hard = (gcnew System::Windows::Forms::RadioButton());
			this->Impossible = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->On = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// powrot
			// 
			this->powrot->BackColor = System::Drawing::Color::Lime;
			this->powrot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->powrot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->powrot->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->powrot->ForeColor = System::Drawing::SystemColors::ControlText;
			this->powrot->Location = System::Drawing::Point(269, 521);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(339, 78);
			this->powrot->TabIndex = 1;
			this->powrot->Text = L"Nowa Gra";
			this->powrot->UseVisualStyleBackColor = false;
			this->powrot->Click += gcnew System::EventHandler(this, &Opcje::button4_Click);
			// 
			// Nazwa_opcje
			// 
			this->Nazwa_opcje->BackColor = System::Drawing::SystemColors::Control;
			this->Nazwa_opcje->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Nazwa_opcje->Font = (gcnew System::Drawing::Font(L"Cambria", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nazwa_opcje->Location = System::Drawing::Point(262, 75);
			this->Nazwa_opcje->Name = L"Nazwa_opcje";
			this->Nazwa_opcje->Size = System::Drawing::Size(346, 52);
			this->Nazwa_opcje->TabIndex = 2;
			this->Nazwa_opcje->Text = L"Opcje";
			this->Nazwa_opcje->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Exit->Location = System::Drawing::Point(799, 12);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(98, 79);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Opcje::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(265, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Poziom Trudnoœci";
			// 
			// Own
			// 
			this->Own->AutoSize = true;
			this->Own->Location = System::Drawing::Point(6, 0);
			this->Own->Name = L"Own";
			this->Own->Size = System::Drawing::Size(62, 17);
			this->Own->TabIndex = 5;
			this->Own->Text = L"W³asny";
			this->Own->UseVisualStyleBackColor = true;
			this->Own->CheckedChanged += gcnew System::EventHandler(this, &Opcje::Own_CheckedChanged);
			// 
			// Easy
			// 
			this->Easy->AutoSize = true;
			this->Easy->Checked = true;
			this->Easy->Location = System::Drawing::Point(74, 0);
			this->Easy->Name = L"Easy";
			this->Easy->Size = System::Drawing::Size(54, 17);
			this->Easy->TabIndex = 6;
			this->Easy->TabStop = true;
			this->Easy->Text = L"£atwy";
			this->Easy->UseVisualStyleBackColor = true;
			// 
			// Middle
			// 
			this->Middle->AutoSize = true;
			this->Middle->Location = System::Drawing::Point(134, 0);
			this->Middle->Name = L"Middle";
			this->Middle->Size = System::Drawing::Size(55, 17);
			this->Middle->TabIndex = 7;
			this->Middle->Text = L"Œredni";
			this->Middle->UseVisualStyleBackColor = true;
			// 
			// Hard
			// 
			this->Hard->AutoSize = true;
			this->Hard->Location = System::Drawing::Point(195, 0);
			this->Hard->Name = L"Hard";
			this->Hard->Size = System::Drawing::Size(58, 17);
			this->Hard->TabIndex = 8;
			this->Hard->Text = L"Trudny";
			this->Hard->UseVisualStyleBackColor = true;
			// 
			// Impossible
			// 
			this->Impossible->AutoSize = true;
			this->Impossible->Location = System::Drawing::Point(259, 0);
			this->Impossible->Name = L"Impossible";
			this->Impossible->Size = System::Drawing::Size(77, 17);
			this->Impossible->TabIndex = 9;
			this->Impossible->Text = L"Niemo¿liwy";
			this->Impossible->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(265, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Szybkoœæ Klocków";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(265, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Szybkoœæ ³uku";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(265, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Iloœæ Klocków";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(265, 458);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Laser";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(265, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Szybkoœæ Strza³u";
			this->label6->Visible = false;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(503, 255);
			this->maskedTextBox2->Mask = L"000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox2->TabIndex = 11;
			this->maskedTextBox2->Text = L"010";
			this->maskedTextBox2->Visible = false;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(503, 305);
			this->maskedTextBox3->Mask = L"000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox3->TabIndex = 12;
			this->maskedTextBox3->Text = L"020";
			this->maskedTextBox3->Visible = false;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(503, 356);
			this->maskedTextBox4->Mask = L"000";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox4->TabIndex = 13;
			this->maskedTextBox4->Text = L"020";
			this->maskedTextBox4->Visible = false;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(503, 410);
			this->maskedTextBox5->Mask = L"00";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox5->TabIndex = 14;
			this->maskedTextBox5->Text = L"05";
			this->maskedTextBox5->Visible = false;
			// 
			// On
			// 
			this->On->AutoSize = true;
			this->On->Location = System::Drawing::Point(6, 0);
			this->On->Name = L"On";
			this->On->Size = System::Drawing::Size(57, 17);
			this->On->TabIndex = 15;
			this->On->Text = L"W³¹cz";
			this->On->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(69, 0);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Wy³¹cz";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Own);
			this->groupBox1->Controls->Add(this->Easy);
			this->groupBox1->Controls->Add(this->Middle);
			this->groupBox1->Controls->Add(this->Hard);
			this->groupBox1->Controls->Add(this->Impossible);
			this->groupBox1->Location = System::Drawing::Point(503, 204);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 24);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->On);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(492, 458);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 17);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			this->groupBox2->Visible = false;
			// 
			// Opcje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 611);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Nazwa_opcje);
			this->Controls->Add(this->powrot);
			this->Name = L"Opcje";
			this->Text = L"Opcje";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	/*	this->Hide();
		Form1^ f4 = gcnew Form1();
		f4->ShowDialog();*/
		this->Hide();
		MyForm^ f5 = gcnew MyForm();
		f5->ShowDialog();
	}
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}
private: System::Void Own_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	maskedTextBox2->Visible = true;
	maskedTextBox3->Visible = true;
	maskedTextBox4->Visible = true;
	maskedTextBox5->Visible = true;
	groupBox2->Visible = true;
}
};
}
