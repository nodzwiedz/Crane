#pragma once
#include <fstream>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <tchar.h>
#include <conio.h>


namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	Point crane, position;
	bool malowac;
	
	struct circle {
		int x, y, height, width;
	};

	circle C1, C2, C3, C4, R;
	bool C1_catch, C2_catch, C3_catch, C4_catch;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>


	public ref class MyForm : public System::Windows::Forms::Form
	{
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

	protected:

	private:

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;


	 


	public: 



	public:
	private:

	private:



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Location = System::Drawing::Point(0, 576);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1179, 22);
			this->statusStrip1->TabIndex = 18;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"dzwig.jpg");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(49, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(851, 508);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(906, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(190, 76);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Catch!";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(906, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 76);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Drop!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(906, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 76);
			this->button2->TabIndex = 26;
			this->button2->Text = L"A";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(993, 399);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 76);
			this->button3->TabIndex = 27;
			this->button3->Text = L"S";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(1083, 399);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 76);
			this->button4->TabIndex = 28;
			this->button4->Text = L"D";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(993, 317);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 76);
			this->button6->TabIndex = 29;
			this->button6->Text = L"W";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1179, 598);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->statusStrip1);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"DŸwig";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		
	}


private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	if (malowac == false) {																						//otwarcie okna
		position = Point(146, 150);
		crane = Point(146, 50);

		C1.x = 100;		C1.y = 300;		C1.height = 50;		C1.width = 50;
		C2.x = 200;		C2.y = 300;		C2.height = 50;		C2.width = 50;
		C3.x = 300;		C3.y = 300;		C3.height = 50;		C3.width = 50;
		C4.x = 400;		C4.y = 300;		C4.height = 50;		C4.width = 50;
		R.x = 470;		R.y = 300;		R.height = 50;		R.width = 50;
	}
	

	Graphics^ g = e->Graphics;
	g->DrawLine(System::Drawing::Pens::Orange, crane, position);
	
	g->DrawEllipse(System::Drawing::Pens::Red, C1.x, C1.y, C1.height, C1.width);
	g->DrawEllipse(System::Drawing::Pens::Red, C2.x, C2.y, C2.height, C2.width);
	g->DrawEllipse(System::Drawing::Pens::Red, C3.x, C3.y, C3.height, C3.width);
	g->DrawEllipse(System::Drawing::Pens::Red, C4.x, C4.y, C4.height, C4.width);
	g->DrawRectangle(System::Drawing::Pens::Blue, R.x ,R.y, R.height, R.width);

	if (C1_catch == false && C1.y != 300) {							//spadek C1
		if (C1.x >= C2.x && C1.x <= (C2.x + (C2.width))) {
			if (C1.y <= C2.y - (C2.height)) {
				C1.y += 1;
				this->Refresh();
			}
		}
		else if (C1.x >= C3.x && C1.x <= (C3.x + (C3.width))) {
			if (C1.y <= C3.y - (C3.height)) {
				C1.y += 1;
				this->Refresh();
			}
		}
		else if (C1.x >= C4.x && C1.x <= (C4.x + (C4.width))) {
			if (C1.y <= C4.y - (C4.height)) {
				C1.y += 1;
				this->Refresh();
			}
		}
		else if (C1.y != 301) {
			C1.y += 1;
			this->Refresh();
		}
			
	}
	if (C2_catch == false && C2.y != 300) {					//spadek C2
		if (C2.x >= C1.x && C2.x <= (C1.x + (C1.width))) {
			if (C2.y <= C1.y - (C1.height)) {
				C2.y += 1;
				this->Refresh();
			}
		}
		else if (C2.x >= C3.x && C2.x <= (C3.x + (C3.width))) {
			if (C2.y <= C3.y - (C3.height)) {
				C2.y += 1;
				this->Refresh();
			}
		}
		else if (C2.x >= C4.x && C2.x <= (C4.x + (C4.width))) {
			if (C2.y <= C4.y - (C4.height)) {
				C2.y += 1;
				this->Refresh();
			}
		}
		else if (C2.y != 301) {
			C2.y += 1;
			this->Refresh();
		}
	}
	if (C3_catch == false && C3.y != 300) {					//spadek C3
		if (C3.x >= C2.x && C3.x <= (C2.x + (C2.width))) {
			if (C3.y <= C2.y - (C2.height)) {
				C3.y += 1;
				this->Refresh();
			}
		}
		else if (C3.x >= C1.x && C3.x <= (C1.x + (C1.width))) {
			if (C3.y <= C1.y - (C1.height)) {
				C3.y += 1;
				this->Refresh();
			}
		}
		else if (C3.x >= C4.x && C3.x <= (C4.x + (C4.width))) {
			if (C3.y <= C4.y - (C4.height)) {
				C3.y += 1;
				this->Refresh();
			}
		}
		else if (C3.y != 301) {
			C3.y += 1;
			this->Refresh();
		}
	}
	if (C4_catch == false && C4.y != 300) {					//spadek C4
		if (C4.x >= C2.x && C4.x <= (C2.x + (C2.width))) {
			if (C4.y <= C2.y - (C2.height)) {
				C4.y += 1;
				this->Refresh();
			}
		}
		else if (C4.x >= C3.x && C4.x <= (C3.x + (C3.width))) {
			if (C4.y <= C3.y - (C3.height)) {
				C4.y += 1;
				this->Refresh();
			}
		}
		else if (C4.x >= C1.x && C4.x <= (C1.x + (C1.width))) {
			if (C4.y <= C1.y - (C1.height)) {
				C4.y += 1;
				this->Refresh();
			}
		}
		else if (C4.y != 301) {
			C4.y += 1;
			this->Refresh();
		}
	}

	
}


private:
	System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {			//wychwytywanie przycisku
	if (e->KeyCode == Keys::S)
	{
		if (position.Y < 300) {
			position.Y += 2;
			if (C1_catch) {
				C1.y += 2;
			}
			else if (C2_catch) {
				C2.y += 2;
			}
			else if (C3_catch) {
				C3.y += 2;
			}
			else if (C4_catch) {
				C4.y += 2;
			}
			malowac = true;
			this->Refresh();
		}
	}

	if (e->KeyCode == Keys::W)
	{
		if (position.Y > 100) {
			position.Y -= 2;
			if (C1_catch) {
				C1.y -= 2;
			}
			else if (C2_catch) {
				C2.y -= 2;
			}
			else if (C3_catch) {
				C3.y -= 2;
			}
			else if (C4_catch) {
				C4.y -= 2;
			}
			malowac = true;
			this->Refresh();
		}
	}

	if (e->KeyCode == Keys::D)
	{
		if (position.X < 550) {
			position.X += 2;
			crane.X += 2;
			if (C1_catch) {
				C1.x += 2;
			}
			else if (C2_catch) {
				C2.x += 2;
			}
			else if (C3_catch) {
				C3.x += 2;
			}
			else if (C4_catch) {
				C4.x += 2;
			}
			malowac = true;
			this->Refresh();
		}
	}

	if (e->KeyCode == Keys::A)
	{
		if (position.X > 50) {
			position.X -= 2;
			crane.X -= 2;
			if (C1_catch) {
				C1.x -= 2;
			}
			else if (C2_catch) {
				C2.x -= 2;
			}
			else if (C3_catch) {
				C3.x -= 2;
			}
			else if (C4_catch) {
				C4.x -= 2;
			}
			malowac = true;
			this->Refresh();
		}
	}
	
}

private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	        
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {										//catch
	if (position.X >= C1.x && position.X <= C1.x + (C1.width) && position.Y >= C1.y && position.Y <= C1.y + (C1.height)) {
		C1_catch = true;
		this->Refresh();
	}
	else if (position.X >= C2.x && position.X <= C2.x + (C2.width) && position.Y >= C2.y && position.Y <= C2.y + (C2.height)) {
		C2_catch = true;
		this->Refresh();
	}
	else if (position.X >= C3.x && position.X <= C3.x + (C3.width) && position.Y >= C3.y && position.Y <= C3.y + (C3.height)) {
		C3_catch = true;
		this->Refresh();
	}
	else if (position.X >= C4.x && position.X <= C4.x + (C4.width) && position.Y >= C4.y && position.Y <= C4.y + (C4.height)) {
		C4_catch = true;
		this->Refresh();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {										//drop
	C1_catch = false;
	C2_catch = false;
	C3_catch = false;
	C4_catch = false;
	if (C1.y != 300 || C2.y != 300 || C3.y != 300 || C4.y != 300) {
		this->Refresh();
	}
		
	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {				//W
	if (position.Y > 100) {
		position.Y -= 2;
		if (C1_catch ) {
			C1.y -= 2;
		}
		else if (C2_catch) {
			C2.y -= 2;
		}
		else if (C3_catch) {
			C3.y -= 2;
		}
		else if (C4_catch) {
			C4.y -= 2;
		}
		malowac = true;
		this->Refresh();
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {			//S
	if (position.Y < 300) {
		position.Y += 2;
		if (C1_catch == true) {
			C1.y += 2;
		}
		else if (C2_catch == true) {
			C2.y += 2;
		}
		else if (C3_catch == true) {
			C3.y += 2;
		}
		else if (C4_catch == true) {
			C4.y += 2;
		}
		malowac = true;
		this->Refresh();
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {				//A
	if (position.X > 50) {
		position.X -= 2;
		crane.X -= 2;
		if (C1_catch == true) {
			C1.x -= 2;
		}
		else if (C2_catch == true) {
			C2.x -= 2;
		}
		else if (C3_catch == true) {
			C3.x -= 2;
		}
		else if (C4_catch == true) {
			C4.x -= 2;
		}
		malowac = true;
		this->Refresh();
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {				//D
	if (position.X < 550) {
		position.X += 2;
		crane.X += 2;
		if (C1_catch == true) {
			C1.x += 2;
		}
		else if (C2_catch == true) {
			C2.x += 2;
		}
		else if (C3_catch == true) {
			C3.x += 2;
		}
		else if (C4_catch == true) {
			C4.x += 2;
		}
		malowac = true;
		this->Refresh();
	}
}
};
};

