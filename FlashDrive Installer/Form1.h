#pragma once

namespace FlashDriveInstaller {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Declarations

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;

	private: System::Windows::Forms::Button^  browseapp1;
	private: System::Windows::Forms::Button^  browseapp2;
	private: System::Windows::Forms::Button^  browseapp3;
	private: System::Windows::Forms::Button^  browseapp4;
	private: System::Windows::Forms::Button^  browseapp5;

	private: System::Windows::Forms::TextBox^  apppath1;
	private: System::Windows::Forms::TextBox^  apppath2;
	private: System::Windows::Forms::TextBox^  apppath3;
	private: System::Windows::Forms::TextBox^  apppath4;
	private: System::Windows::Forms::TextBox^  apppath5;

	private: System::Windows::Forms::TextBox^  appver1;
	private: System::Windows::Forms::TextBox^  appver2;
	private: System::Windows::Forms::TextBox^  appver3;
	private: System::Windows::Forms::TextBox^  appver4;
	private: System::Windows::Forms::TextBox^  appver5;

	private: System::Windows::Forms::TextBox^  appname1;
	private: System::Windows::Forms::TextBox^  appname2;
	private: System::Windows::Forms::TextBox^  appname3;
	private: System::Windows::Forms::TextBox^  appname4;
	private: System::Windows::Forms::TextBox^  appname5;

	private: System::Windows::Forms::Button^  browseicon1;
	private: System::Windows::Forms::Button^  browseicon2;
	private: System::Windows::Forms::Button^  browseicon3;
	private: System::Windows::Forms::Button^  browseicon4;
	private: System::Windows::Forms::Button^  browseicon5;

	private: System::Windows::Forms::Button^  browsedriveicon;

	private: System::Windows::Forms::Button^  install;

	private: System::Windows::Forms::TextBox^  appicon1;
	private: System::Windows::Forms::TextBox^  appicon2;
	private: System::Windows::Forms::TextBox^  appicon3;
	private: System::Windows::Forms::TextBox^  appicon4;
	private: System::Windows::Forms::TextBox^  appicon5;

	private: System::Windows::Forms::TextBox^  driveicon;

	private: System::Windows::Forms::TextBox^  driveinfo1;
	private: System::Windows::Forms::TextBox^  driveinfo2;
	private: System::Windows::Forms::TextBox^  driveinfo3;

#pragma endregion

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// Do not manually modify
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->browseapp1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->browseapp2 = (gcnew System::Windows::Forms::Button());
			this->browseapp3 = (gcnew System::Windows::Forms::Button());
			this->browseapp4 = (gcnew System::Windows::Forms::Button());
			this->browseapp5 = (gcnew System::Windows::Forms::Button());
			this->apppath1 = (gcnew System::Windows::Forms::TextBox());
			this->apppath2 = (gcnew System::Windows::Forms::TextBox());
			this->apppath3 = (gcnew System::Windows::Forms::TextBox());
			this->apppath4 = (gcnew System::Windows::Forms::TextBox());
			this->apppath5 = (gcnew System::Windows::Forms::TextBox());
			this->appver1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->appver2 = (gcnew System::Windows::Forms::TextBox());
			this->appver3 = (gcnew System::Windows::Forms::TextBox());
			this->appver4 = (gcnew System::Windows::Forms::TextBox());
			this->appver5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->install = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->appname1 = (gcnew System::Windows::Forms::TextBox());
			this->appname2 = (gcnew System::Windows::Forms::TextBox());
			this->appname3 = (gcnew System::Windows::Forms::TextBox());
			this->appname4 = (gcnew System::Windows::Forms::TextBox());
			this->appname5 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->browseicon1 = (gcnew System::Windows::Forms::Button());
			this->browseicon2 = (gcnew System::Windows::Forms::Button());
			this->browseicon3 = (gcnew System::Windows::Forms::Button());
			this->browseicon4 = (gcnew System::Windows::Forms::Button());
			this->browseicon5 = (gcnew System::Windows::Forms::Button());
			this->appicon1 = (gcnew System::Windows::Forms::TextBox());
			this->appicon2 = (gcnew System::Windows::Forms::TextBox());
			this->appicon3 = (gcnew System::Windows::Forms::TextBox());
			this->appicon4 = (gcnew System::Windows::Forms::TextBox());
			this->appicon5 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->browsedriveicon = (gcnew System::Windows::Forms::Button());
			this->driveicon = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->driveinfo1 = (gcnew System::Windows::Forms::TextBox());
			this->driveinfo2 = (gcnew System::Windows::Forms::TextBox());
			this->driveinfo3 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"exe";
			this->openFileDialog1->Filter = L"Executable Files|*.exe";
			this->openFileDialog1->Title = L"Open Executable File";
			// 
			// browseapp1
			// 
			this->browseapp1->Location = System::Drawing::Point(270, 56);
			this->browseapp1->Name = L"browseapp1";
			this->browseapp1->Size = System::Drawing::Size(75, 23);
			this->browseapp1->TabIndex = 0;
			this->browseapp1->Text = L"Browse";
			this->browseapp1->UseVisualStyleBackColor = true;
			this->browseapp1->Click += gcnew System::EventHandler(this, &Form1::browseapp1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(444, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Update FlashDrive Launcher Info";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"App 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"App 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"App 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"App 4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"App 5";
			// 
			// browseapp2
			// 
			this->browseapp2->Location = System::Drawing::Point(270, 81);
			this->browseapp2->Name = L"browseapp2";
			this->browseapp2->Size = System::Drawing::Size(75, 23);
			this->browseapp2->TabIndex = 7;
			this->browseapp2->Text = L"Browse";
			this->browseapp2->UseVisualStyleBackColor = true;
			this->browseapp2->Click += gcnew System::EventHandler(this, &Form1::browseapp2_Click);
			// 
			// browseapp3
			// 
			this->browseapp3->Location = System::Drawing::Point(270, 107);
			this->browseapp3->Name = L"browseapp3";
			this->browseapp3->Size = System::Drawing::Size(75, 23);
			this->browseapp3->TabIndex = 8;
			this->browseapp3->Text = L"Browse";
			this->browseapp3->UseVisualStyleBackColor = true;
			this->browseapp3->Click += gcnew System::EventHandler(this, &Form1::browseapp3_Click);
			// 
			// browseapp4
			// 
			this->browseapp4->Location = System::Drawing::Point(270, 133);
			this->browseapp4->Name = L"browseapp4";
			this->browseapp4->Size = System::Drawing::Size(75, 23);
			this->browseapp4->TabIndex = 9;
			this->browseapp4->Text = L"Browse";
			this->browseapp4->UseVisualStyleBackColor = true;
			this->browseapp4->Click += gcnew System::EventHandler(this, &Form1::browseapp4_Click);
			// 
			// browseapp5
			// 
			this->browseapp5->Location = System::Drawing::Point(270, 159);
			this->browseapp5->Name = L"browseapp5";
			this->browseapp5->Size = System::Drawing::Size(75, 23);
			this->browseapp5->TabIndex = 10;
			this->browseapp5->Text = L"Browse";
			this->browseapp5->UseVisualStyleBackColor = true;
			this->browseapp5->Click += gcnew System::EventHandler(this, &Form1::browseapp5_Click);
			// 
			// apppath1
			// 
			this->apppath1->Location = System::Drawing::Point(55, 57);
			this->apppath1->Name = L"apppath1";
			this->apppath1->Size = System::Drawing::Size(209, 20);
			this->apppath1->TabIndex = 11;
			// 
			// apppath2
			// 
			this->apppath2->Location = System::Drawing::Point(55, 83);
			this->apppath2->Name = L"apppath2";
			this->apppath2->Size = System::Drawing::Size(209, 20);
			this->apppath2->TabIndex = 12;
			// 
			// apppath3
			// 
			this->apppath3->Location = System::Drawing::Point(55, 109);
			this->apppath3->Name = L"apppath3";
			this->apppath3->Size = System::Drawing::Size(209, 20);
			this->apppath3->TabIndex = 13;
			// 
			// apppath4
			// 
			this->apppath4->Location = System::Drawing::Point(55, 135);
			this->apppath4->Name = L"apppath4";
			this->apppath4->Size = System::Drawing::Size(209, 20);
			this->apppath4->TabIndex = 14;
			// 
			// apppath5
			// 
			this->apppath5->Location = System::Drawing::Point(55, 161);
			this->apppath5->Name = L"apppath5";
			this->apppath5->Size = System::Drawing::Size(209, 20);
			this->apppath5->TabIndex = 15;
			// 
			// appver1
			// 
			this->appver1->Location = System::Drawing::Point(430, 57);
			this->appver1->Name = L"appver1";
			this->appver1->Size = System::Drawing::Size(81, 20);
			this->appver1->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(351, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"App 1 Version";
			// 
			// appver2
			// 
			this->appver2->Location = System::Drawing::Point(430, 83);
			this->appver2->Name = L"appver2";
			this->appver2->Size = System::Drawing::Size(81, 20);
			this->appver2->TabIndex = 18;
			// 
			// appver3
			// 
			this->appver3->Location = System::Drawing::Point(430, 109);
			this->appver3->Name = L"appver3";
			this->appver3->Size = System::Drawing::Size(81, 20);
			this->appver3->TabIndex = 19;
			// 
			// appver4
			// 
			this->appver4->Location = System::Drawing::Point(430, 135);
			this->appver4->Name = L"appver4";
			this->appver4->Size = System::Drawing::Size(81, 20);
			this->appver4->TabIndex = 20;
			// 
			// appver5
			// 
			this->appver5->Location = System::Drawing::Point(430, 161);
			this->appver5->Name = L"appver5";
			this->appver5->Size = System::Drawing::Size(81, 20);
			this->appver5->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(351, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"App 2 Version";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(352, 112);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"App 3 Version";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(351, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"App 4 Version";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(352, 164);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"App 5 Version";
			// 
			// install
			// 
			this->install->Location = System::Drawing::Point(14, 376);
			this->install->Name = L"install";
			this->install->Size = System::Drawing::Size(669, 23);
			this->install->TabIndex = 26;
			this->install->Text = L"Install";
			this->install->UseVisualStyleBackColor = true;
			this->install->Click += gcnew System::EventHandler(this, &Form1::install_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(517, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"App 1 Name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(517, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"App 2 Name";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(517, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"App 3 Name";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(517, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(66, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"App 4 Name";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(517, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 13);
			this->label16->TabIndex = 31;
			this->label16->Text = L"App 5 Name";
			// 
			// appname1
			// 
			this->appname1->Location = System::Drawing::Point(589, 57);
			this->appname1->Name = L"appname1";
			this->appname1->Size = System::Drawing::Size(94, 20);
			this->appname1->TabIndex = 32;
			// 
			// appname2
			// 
			this->appname2->Location = System::Drawing::Point(589, 83);
			this->appname2->Name = L"appname2";
			this->appname2->Size = System::Drawing::Size(94, 20);
			this->appname2->TabIndex = 33;
			// 
			// appname3
			// 
			this->appname3->Location = System::Drawing::Point(589, 109);
			this->appname3->Name = L"appname3";
			this->appname3->Size = System::Drawing::Size(94, 20);
			this->appname3->TabIndex = 34;
			// 
			// appname4
			// 
			this->appname4->Location = System::Drawing::Point(589, 135);
			this->appname4->Name = L"appname4";
			this->appname4->Size = System::Drawing::Size(94, 20);
			this->appname4->TabIndex = 35;
			// 
			// appname5
			// 
			this->appname5->Location = System::Drawing::Point(589, 161);
			this->appname5->Name = L"appname5";
			this->appname5->Size = System::Drawing::Size(94, 20);
			this->appname5->TabIndex = 36;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(10, 201);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(315, 20);
			this->label17->TabIndex = 37;
			this->label17->Text = L"App Icons MUST be 24x24px and png!";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(15, 235);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(59, 13);
			this->label18->TabIndex = 38;
			this->label18->Text = L"App Icon 1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(15, 264);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 13);
			this->label19->TabIndex = 39;
			this->label19->Text = L"App Icon 2";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(15, 293);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 13);
			this->label20->TabIndex = 40;
			this->label20->Text = L"App Icon 3";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(15, 322);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(59, 13);
			this->label21->TabIndex = 41;
			this->label21->Text = L"App Icon 4";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 351);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 13);
			this->label22->TabIndex = 42;
			this->label22->Text = L"App Icon 5";
			// 
			// browseicon1
			// 
			this->browseicon1->Location = System::Drawing::Point(269, 230);
			this->browseicon1->Name = L"browseicon1";
			this->browseicon1->Size = System::Drawing::Size(75, 23);
			this->browseicon1->TabIndex = 44;
			this->browseicon1->Text = L"Browse";
			this->browseicon1->UseVisualStyleBackColor = true;
			this->browseicon1->Click += gcnew System::EventHandler(this, &Form1::browseicon1_Click);
			// 
			// browseicon2
			// 
			this->browseicon2->Location = System::Drawing::Point(269, 259);
			this->browseicon2->Name = L"browseicon2";
			this->browseicon2->Size = System::Drawing::Size(75, 23);
			this->browseicon2->TabIndex = 45;
			this->browseicon2->Text = L"Browse";
			this->browseicon2->UseVisualStyleBackColor = true;
			this->browseicon2->Click += gcnew System::EventHandler(this, &Form1::browseicon2_Click);
			// 
			// browseicon3
			// 
			this->browseicon3->Location = System::Drawing::Point(269, 288);
			this->browseicon3->Name = L"browseicon3";
			this->browseicon3->Size = System::Drawing::Size(75, 23);
			this->browseicon3->TabIndex = 46;
			this->browseicon3->Text = L"Browse";
			this->browseicon3->UseVisualStyleBackColor = true;
			this->browseicon3->Click += gcnew System::EventHandler(this, &Form1::browseicon3_Click);
			// 
			// browseicon4
			// 
			this->browseicon4->Location = System::Drawing::Point(269, 317);
			this->browseicon4->Name = L"browseicon4";
			this->browseicon4->Size = System::Drawing::Size(75, 23);
			this->browseicon4->TabIndex = 47;
			this->browseicon4->Text = L"Browse";
			this->browseicon4->UseVisualStyleBackColor = true;
			this->browseicon4->Click += gcnew System::EventHandler(this, &Form1::browseicon4_Click);
			// 
			// browseicon5
			// 
			this->browseicon5->Location = System::Drawing::Point(269, 346);
			this->browseicon5->Name = L"browseicon5";
			this->browseicon5->Size = System::Drawing::Size(75, 23);
			this->browseicon5->TabIndex = 48;
			this->browseicon5->Text = L"Browse";
			this->browseicon5->UseVisualStyleBackColor = true;
			this->browseicon5->Click += gcnew System::EventHandler(this, &Form1::browseicon5_Click);
			// 
			// appicon1
			// 
			this->appicon1->Location = System::Drawing::Point(80, 232);
			this->appicon1->Name = L"appicon1";
			this->appicon1->Size = System::Drawing::Size(183, 20);
			this->appicon1->TabIndex = 49;
			// 
			// appicon2
			// 
			this->appicon2->Location = System::Drawing::Point(80, 261);
			this->appicon2->Name = L"appicon2";
			this->appicon2->Size = System::Drawing::Size(183, 20);
			this->appicon2->TabIndex = 50;
			// 
			// appicon3
			// 
			this->appicon3->Location = System::Drawing::Point(80, 290);
			this->appicon3->Name = L"appicon3";
			this->appicon3->Size = System::Drawing::Size(183, 20);
			this->appicon3->TabIndex = 51;
			// 
			// appicon4
			// 
			this->appicon4->Location = System::Drawing::Point(80, 319);
			this->appicon4->Name = L"appicon4";
			this->appicon4->Size = System::Drawing::Size(183, 20);
			this->appicon4->TabIndex = 52;
			// 
			// appicon5
			// 
			this->appicon5->Location = System::Drawing::Point(80, 348);
			this->appicon5->Name = L"appicon5";
			this->appicon5->Size = System::Drawing::Size(183, 20);
			this->appicon5->TabIndex = 53;
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->DefaultExt = L"png";
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->Filter = L"PNG Image|*.png";
			this->openFileDialog2->Title = L"Open PNG Image";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(350, 201);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(325, 20);
			this->label23->TabIndex = 54;
			this->label23->Text = L"Drive Icon must be 128x128px and png!";
			// 
			// browsedriveicon
			// 
			this->browsedriveicon->Location = System::Drawing::Point(606, 230);
			this->browsedriveicon->Name = L"browsedriveicon";
			this->browsedriveicon->Size = System::Drawing::Size(75, 23);
			this->browsedriveicon->TabIndex = 55;
			this->browsedriveicon->Text = L"Browse";
			this->browsedriveicon->UseVisualStyleBackColor = true;
			this->browsedriveicon->Click += gcnew System::EventHandler(this, &Form1::browsedriveicon_Click);
			// 
			// driveicon
			// 
			this->driveicon->Location = System::Drawing::Point(417, 232);
			this->driveicon->Name = L"driveicon";
			this->driveicon->Size = System::Drawing::Size(183, 20);
			this->driveicon->TabIndex = 56;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(352, 235);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(56, 13);
			this->label24->TabIndex = 57;
			this->label24->Text = L"Drive Icon";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(352, 296);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(62, 13);
			this->label25->TabIndex = 58;
			this->label25->Text = L"Drive Info 1";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(352, 322);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 13);
			this->label26->TabIndex = 59;
			this->label26->Text = L"Drive Info 2";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(352, 351);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(62, 13);
			this->label27->TabIndex = 60;
			this->label27->Text = L"Drive Info 3";
			// 
			// driveinfo1
			// 
			this->driveinfo1->Location = System::Drawing::Point(421, 293);
			this->driveinfo1->Name = L"driveinfo1";
			this->driveinfo1->Size = System::Drawing::Size(262, 20);
			this->driveinfo1->TabIndex = 61;
			// 
			// driveinfo2
			// 
			this->driveinfo2->Location = System::Drawing::Point(421, 319);
			this->driveinfo2->Name = L"driveinfo2";
			this->driveinfo2->Size = System::Drawing::Size(262, 20);
			this->driveinfo2->TabIndex = 62;
			// 
			// driveinfo3
			// 
			this->driveinfo3->Location = System::Drawing::Point(421, 348);
			this->driveinfo3->Name = L"driveinfo3";
			this->driveinfo3->Size = System::Drawing::Size(262, 20);
			this->driveinfo3->TabIndex = 63;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(465, 9);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(227, 39);
			this->label28->TabIndex = 64;
			this->label28->Text = L"Place this program in the root of your drive to\r\neasily install applications and "
				L"set drive info.\r\n(Requires FlashDrive Launcher to be installed.)";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(352, 255);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(328, 13);
			this->label29->TabIndex = 65;
			this->label29->Text = L"This will appear in the taskbar and the top left corner of the program.";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 411);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->driveinfo3);
			this->Controls->Add(this->driveinfo2);
			this->Controls->Add(this->driveinfo1);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->driveicon);
			this->Controls->Add(this->browsedriveicon);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->appicon5);
			this->Controls->Add(this->appicon4);
			this->Controls->Add(this->appicon3);
			this->Controls->Add(this->appicon2);
			this->Controls->Add(this->appicon1);
			this->Controls->Add(this->browseicon5);
			this->Controls->Add(this->browseicon4);
			this->Controls->Add(this->browseicon3);
			this->Controls->Add(this->browseicon2);
			this->Controls->Add(this->browseicon1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->appname5);
			this->Controls->Add(this->appname4);
			this->Controls->Add(this->appname3);
			this->Controls->Add(this->appname2);
			this->Controls->Add(this->appname1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->install);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->appver5);
			this->Controls->Add(this->appver4);
			this->Controls->Add(this->appver3);
			this->Controls->Add(this->appver2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->appver1);
			this->Controls->Add(this->apppath5);
			this->Controls->Add(this->apppath4);
			this->Controls->Add(this->apppath3);
			this->Controls->Add(this->apppath2);
			this->Controls->Add(this->apppath1);
			this->Controls->Add(this->browseapp5);
			this->Controls->Add(this->browseapp4);
			this->Controls->Add(this->browseapp3);
			this->Controls->Add(this->browseapp2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->browseapp1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"FlashDrive Installer";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Declarations
				 ifstream checkid;
				 string appname1s, appname2s, appname3s, appname4s, appname5s;
				 string appver1s, appver2s, appver3s, appver4s, appver5s;
				 string devinfo1, devinfo2, devinfo3;

				 //Open file
				 checkid.open("id.inf");

				 //Read file
				 if (checkid.is_open()){
					 //Read version
					 getline(checkid, appver1s);
					 getline(checkid, appver2s);
					 getline(checkid, appver3s);
					 getline(checkid, appver4s);
					 getline(checkid, appver5s);

					 //Read names
					 getline(checkid, appname1s);
					 getline(checkid, appname2s);
					 getline(checkid, appname3s);
					 getline(checkid, appname4s);
					 getline(checkid, appname5s);

					 //Read info
					 getline(checkid, devinfo1);
					 getline(checkid, devinfo2);
					 getline(checkid, devinfo3);

					 //Close file
					 checkid.close();

					 //Convert versions to System::String
					 String^ appver1sfin = gcnew String(appver1s.c_str());
					 String^ appver2sfin = gcnew String(appver2s.c_str());
					 String^ appver3sfin = gcnew String(appver3s.c_str());
					 String^ appver4sfin = gcnew String(appver4s.c_str());
					 String^ appver5sfin = gcnew String(appver5s.c_str());

					 //Convert names to System::String
					 String^ appname1sfin = gcnew String(appname1s.c_str());
					 String^ appname2sfin = gcnew String(appname2s.c_str());
					 String^ appname3sfin = gcnew String(appname3s.c_str());
					 String^ appname4sfin = gcnew String(appname4s.c_str());
					 String^ appname5sfin = gcnew String(appname5s.c_str());

					 //Convert info to System::String
					 String^ devinfo1sfin = gcnew String(devinfo1.c_str());
					 String^ devinfo2sfin = gcnew String(devinfo2.c_str());
					 String^ devinfo3sfin = gcnew String(devinfo3.c_str());

					 //Set app name text boxes
					 this->appname1->Text = appname1sfin;
					 this->appname2->Text = appname2sfin;
					 this->appname3->Text = appname3sfin;
					 this->appname4->Text = appname4sfin;
					 this->appname5->Text = appname5sfin;

					 //Set app version text boxes
					 this->appver1->Text = appver1sfin;
					 this->appver2->Text = appver2sfin;
					 this->appver3->Text = appver3sfin;
					 this->appver4->Text = appver4sfin;
					 this->appver5->Text = appver5sfin;

					 //Set drive info text boxes
					 this->driveinfo1->Text = devinfo1sfin;
					 this->driveinfo2->Text = devinfo2sfin;
					 this->driveinfo3->Text = devinfo3sfin;
				 } //EndIf
			 }
	private: System::Void browseapp1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->apppath1->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void browseapp2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->apppath2->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void browseapp3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->apppath3->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void browseapp4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->apppath4->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void browseapp5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->apppath5->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void browseicon1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->appicon1->Text = openFileDialog2->FileName;
				 }
			 }
	private: System::Void browseicon2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->appicon2->Text = openFileDialog2->FileName;
				 }
			 }
	private: System::Void browseicon3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->appicon3->Text = openFileDialog2->FileName;
				 }
			 }
	private: System::Void browseicon4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->appicon4->Text = openFileDialog2->FileName;
				 }
			 }
	private: System::Void browseicon5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->appicon5->Text = openFileDialog2->FileName;
				 }
			 }
	private: System::Void browsedriveicon_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 this->driveicon->Text = this->openFileDialog2->FileName;
				 }//EndIf
			 }//EndFunc
	private: System::Void install_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Declaration
				 ofstream writeid;

				 //Open file
				 writeid.open("id.inf", ios::trunc | ios::out);

				 //Write to file
				 if (writeid.is_open()){

					 const char* app1verw = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appver1->Text);
					 writeid << app1verw;
					 writeid << endl;

					 const char* app2verw = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appver2->Text);
					 writeid << app2verw;
					 writeid << endl;

					 const char* app3verw = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appver3->Text);
					 writeid << app3verw;
					 writeid << endl;

					 const char* app4verw = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appver4->Text);
					 writeid << app4verw;
					 writeid << endl;

					 const char* app5verw = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appver5->Text);
					 writeid << app5verw;
					 writeid << endl;


					 //Write app names
					 const char* app1namew = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appname1->Text);
					 writeid << app1namew;
					 writeid << endl;

					 const char* app2namew = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appname2->Text);
					 writeid << app2namew;
					 writeid << endl;

					 const char* app3namew = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appname3->Text);
					 writeid << app3namew;
					 writeid << endl;

					 const char* app4namew = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appname4->Text);
					 writeid << app4namew;
					 writeid << endl;

					 const char* app5namew = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->appname5->Text);
					 writeid << app5namew;
					 writeid << endl;


					 //Write drive info
					 const char* driveinfo1 = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->driveinfo1->Text);
					 writeid << driveinfo1;
					 writeid << endl;

					 const char* driveinfo2 = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->driveinfo2->Text);
					 writeid << driveinfo2;
					 writeid << endl;

					 const char* driveinfo3 = (const char*) (void*) System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->driveinfo3->Text);
					 writeid << driveinfo3;


					 //Create directories
					 _mkdir("System");
					 _mkdir("System\\Apps");
					 _mkdir("System\\Images");

					 //Make "System" hidden
					 SetFileAttributes(L"System", FILE_ATTRIBUTE_HIDDEN);

					 //Create a marshal context
					 msclr::interop::marshal_context context;

					 //Convert app locations to LPCTSTR
					 LPCTSTR apppath1 = context.marshal_as<const TCHAR*>(this->apppath1->Text);
					 CopyFile(apppath1, L"System\\Apps\\app1\\app1.exe", false);

					 LPCTSTR apppath2 = context.marshal_as<const TCHAR*>(this->apppath2->Text);
					 CopyFile(apppath2, L"System\\Apps\\app2\\app2.exe", false);

					 LPCTSTR apppath3 = context.marshal_as<const TCHAR*>(this->apppath3->Text);
					 CopyFile(apppath3, L"System\\Apps\\app3\\app3.exe", false);

					 LPCTSTR apppath4 = context.marshal_as<const TCHAR*>(this->apppath4->Text);
					 CopyFile(apppath4, L"System\\Apps\\app4\\app4.exe", false);

					 LPCTSTR apppath5 = context.marshal_as<const TCHAR*>(this->apppath5->Text);
					 CopyFile(apppath5, L"System\\Apps\\app5\\app5.exe", false);


					 //Convert app icon locations to LPCTSTR
					 LPCTSTR appicon1 = context.marshal_as<const TCHAR*>(this->appicon1->Text);
					 CopyFile(appicon1, L"System\\Images\\app1.png", false);

					 LPCTSTR appicon2 = context.marshal_as<const TCHAR*>(this->appicon2->Text);
					 CopyFile(appicon2, L"System\\Images\\app2.png", false);

					 LPCTSTR appicon3 = context.marshal_as<const TCHAR*>(this->appicon3->Text);
					 CopyFile(appicon3, L"System\\Images\\app3.png", false);

					 LPCTSTR appicon4 = context.marshal_as<const TCHAR*>(this->appicon4->Text);
					 CopyFile(appicon4, L"System\\Images\\app4.png", false);

					 LPCTSTR appicon5 = context.marshal_as<const TCHAR*>(this->appicon5->Text);
					 CopyFile(appicon5, L"System\\Images\\app5.png", false);


					 //Convert drive logo location to LPCTSTR
					 LPCTSTR drivelogo = context.marshal_as<const TCHAR*>(this->driveicon->Text);
					 CopyFile(drivelogo, L"System\\Images\\drivelogo.png", false);

					 //Create png2ico process to convert drivelogo.png to drivelogo.ico
					 //Declarations
					 PROCESS_INFORMATION pinfo;
					 STARTUPINFO sinfo;
					 //Set size of sinfo
					 ZeroMemory(&sinfo, sizeof(sinfo));
					 sinfo.cb = sizeof(STARTUPINFO);
					 //Make writeable LPWSTR
					 TCHAR cmdln[500] = L"png2ico.exe System\\Images\\drivelogo.ico System\\Images\\drivelogo.png";
					 //Create process
					 CreateProcess(NULL, cmdln, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS | CREATE_NO_WINDOW, NULL, NULL, &sinfo, &pinfo);
					 //Wait for process to close
					 WaitForSingleObject(pinfo.hProcess, INFINITE);
					 //Close process and thread handles
					 CloseHandle(pinfo.hProcess);
					 CloseHandle(pinfo.hThread);
				 }
			 }
	};//EndClass
}//EndNamespace