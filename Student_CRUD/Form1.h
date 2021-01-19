#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnPrev;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtStudentNo;
	private: System::Windows::Forms::TextBox^ txtAge;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cbSex;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtFees;
	private: System::Windows::Forms::TextBox^ txtAmountPaid;
	private: System::Windows::Forms::TextBox^ txtBalance;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnPrintAll;
	protected:


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtStudentNo = (gcnew System::Windows::Forms::TextBox());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbSex = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtFees = (gcnew System::Windows::Forms::TextBox());
			this->txtAmountPaid = (gcnew System::Windows::Forms::TextBox());
			this->txtBalance = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnPrintAll = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Name:";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(182, 96);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(145, 26);
			this->txtName->TabIndex = 1;
			// 
			// btnPrev
			// 
			this->btnPrev->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrev->Location = System::Drawing::Point(12, 319);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(77, 33);
			this->btnPrev->TabIndex = 2;
			this->btnPrev->Text = L"<< Prev";
			this->btnPrev->UseVisualStyleBackColor = true;
			this->btnPrev->Click += gcnew System::EventHandler(this, &Form1::btnPrev_Click);
			// 
			// btnNext
			// 
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->Location = System::Drawing::Point(457, 319);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 33);
			this->btnNext->TabIndex = 3;
			this->btnNext->Text = L"Next >>";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Form1::btnNext_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Student Number:";
			// 
			// txtStudentNo
			// 
			this->txtStudentNo->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStudentNo->Location = System::Drawing::Point(182, 60);
			this->txtStudentNo->Name = L"txtStudentNo";
			this->txtStudentNo->Size = System::Drawing::Size(145, 26);
			this->txtStudentNo->TabIndex = 5;
			// 
			// txtAge
			// 
			this->txtAge->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAge->Location = System::Drawing::Point(182, 133);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(145, 26);
			this->txtAge->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Student Age:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(114, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Sex:";
			// 
			// cbSex
			// 
			this->cbSex->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSex->FormattingEnabled = true;
			this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->cbSex->Location = System::Drawing::Point(181, 172);
			this->cbSex->Name = L"cbSex";
			this->cbSex->Size = System::Drawing::Size(146, 30);
			this->cbSex->TabIndex = 8;
			this->cbSex->Text = L"M";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(55, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"School Fees:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(50, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 22);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Amount paid:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(85, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 22);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Balance:";
			// 
			// txtFees
			// 
			this->txtFees->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFees->Location = System::Drawing::Point(181, 214);
			this->txtFees->Name = L"txtFees";
			this->txtFees->Size = System::Drawing::Size(145, 26);
			this->txtFees->TabIndex = 7;
			this->txtFees->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::getBalance);
			// 
			// txtAmountPaid
			// 
			this->txtAmountPaid->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAmountPaid->Location = System::Drawing::Point(181, 247);
			this->txtAmountPaid->Name = L"txtAmountPaid";
			this->txtAmountPaid->Size = System::Drawing::Size(145, 26);
			this->txtAmountPaid->TabIndex = 7;
			this->txtAmountPaid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::getBalance);
			// 
			// txtBalance
			// 
			this->txtBalance->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBalance->Location = System::Drawing::Point(182, 281);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->ReadOnly = true;
			this->txtBalance->Size = System::Drawing::Size(145, 26);
			this->txtBalance->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(167, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(181, 27);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Student Database";
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(88, 364);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(67, 31);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(180, 365);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 31);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Form1::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(279, 366);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 31);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Form1::btnDelete_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(376, 365);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 31);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(457, 200);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(75, 33);
			this->btnPrint->TabIndex = 10;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &Form1::btnPrint_Click);
			// 
			// btnPrintAll
			// 
			this->btnPrintAll->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrintAll->Location = System::Drawing::Point(457, 250);
			this->btnPrintAll->Name = L"btnPrintAll";
			this->btnPrintAll->Size = System::Drawing::Size(75, 33);
			this->btnPrintAll->TabIndex = 11;
			this->btnPrintAll->Text = L"Print all";
			this->btnPrintAll->UseVisualStyleBackColor = true;
			this->btnPrintAll->Click += gcnew System::EventHandler(this, &Form1::btnPrint_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 409);
			this->Controls->Add(this->btnPrintAll);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cbSex);
			this->Controls->Add(this->txtBalance);
			this->Controls->Add(this->txtAmountPaid);
			this->Controls->Add(this->txtFees);
			this->Controls->Add(this->txtAge);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtStudentNo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnPrev);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Database";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	MySqlConnection^ con;
	MySqlCommand^ cmd;
	MySqlDataReader^ dr;
	String^ studentNo;
	String^ studentName;
	int age = 0;
	String^ sex;
	double fees = 0;
	double amountPaid = 0;
	double balance = 0;
	ArrayList^ studentID;
	int currentRecord = 0;


	//Connect to DB
	private: System::Void connection() {
		try {
			String^ connectionStirng = "Server=localhost; Uid=root; Pwd=; Database=student_record";
			con = gcnew MySqlConnection(connectionStirng);
			con->Open();
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
		finally {
			con->Close();
		}
	}

	//Clear all fields
	private: System::Void reset() {
		txtStudentNo->Text = "";
		txtName->Text = "";
		txtAge->Text = "";
		cbSex->SelectedIndex = 0;
		txtFees->Text = "";
		txtAmountPaid->Text = "";
		txtBalance->Text = "";
		txtStudentNo->Focus();
	}

	//Get all fields to a variable
	private: System::Boolean getValues() {
		try {
			studentNo = txtStudentNo->Text;
			studentName = txtName->Text;

			if (studentNo == "" || studentName == "") {
				throw gcnew ::Exception("Input cannot be empty");
			}
			
			age = int::Parse(txtAge->Text);
			sex = cbSex->Text;
			fees = double::Parse(txtFees->Text);
			amountPaid = double::Parse(txtAmountPaid->Text);
			balance = double::Parse(txtBalance->Text);
			return true;
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
			return false;
		}
	}

	//Set all fields to a variable
	private: System::Void setValues() {
		txtStudentNo->Text = studentNo;
		txtName->Text = studentName;
		txtAge->Text = age.ToString();
		cbSex->Text = sex;
		txtFees->Text = fees.ToString();
		txtAmountPaid->Text = amountPaid.ToString();
		txtBalance->Text = balance.ToString();
	}
	
	private: System::Void getID() {
		connection();
		try {
			studentID = gcnew ArrayList();

			String^ sql = "SELECT * FROM students";
			cmd = gcnew MySqlCommand(sql, con);
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				studentID->Add(dr->GetString("studentNo"));
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
		finally {
			con->Close();
		}
	}

	private: System::Void getRecord() {
		connection();
		try {

			String^ sql = "SELECT * FROM students WHERE studentNo='" + studentID[currentRecord] + "'";
			cmd = gcnew MySqlCommand(sql, con);
			con->Open();
			dr = cmd->ExecuteReader();
			dr->Read();
			studentNo = dr->GetString("studentNo");
			studentName = dr->GetString("studentName");
			age = dr->GetInt32("age");
			sex = dr->GetString("sex");
			fees = dr->GetDouble("fees");
			amountPaid = dr->GetDouble("amountPaid");
			balance = dr->GetDouble("balance");
			
			setValues();
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
		finally {
			con->Close();
		}
	}

	private: System::Void getBalance(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try {
			if (txtFees->Text != "")
				fees = double::Parse(txtFees->Text);

			if (txtAmountPaid->Text != "")
				amountPaid = double::Parse(txtAmountPaid->Text);

			txtBalance->Text = (fees - amountPaid).ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
	}

	//Form load
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		getID();
	}

	private: System::Void btnPrev_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentRecord > 0) {
			currentRecord--;
		}
		getRecord();
	}

	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentRecord < (studentID->Count - 1)) {
			currentRecord++;
		}
		getRecord();
	}


	//Inser new record
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		connection();
		if (!getValues()) return;
		try {
			String^ sql = "INSERT INTO students VALUES('" +
				studentNo + "','" +
				studentName + "','" +
				age + "','" +
				sex + "','" +
				fees + "','" +
				amountPaid + "','" +
				balance + "')";

			cmd = gcnew MySqlCommand(sql, con);
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show(this, "User info saved", this->Text);
			reset();
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
		finally {
			con->Close();
			getID();
		}
	}

	//Update record
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		connection();
		getValues();
		try {
			String^ sql = "UPDATE students SET " +
				"studentName='" + studentName + "'," +
				"age='" + age + "'," +
				"sex='" + sex + "'," +
				"fees='" + fees + "'," +
				"amountPaid='" + amountPaid + "'," +
				"balance='" + balance + "' WHERE studentNo='" + studentNo + "'";

			cmd = gcnew MySqlCommand(sql, con);
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show(this, "User info updated", this->Text);
			reset();
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
		finally {
			con->Close();
		}
	}

	//Delete Record
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		connection();
		try {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Delete this record",
				this->Text, MessageBoxButtons::OKCancel,
				MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::OK) {
				getValues();
				String^ sql = "DELETE FROM students WHERE studentNo='" + studentNo + "'";

				cmd = gcnew MySqlCommand(sql, con);
				con->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show(this, "User info deleted",this->Text);
				reset();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(this, ex->Message);
		}
		finally {
			con->Close();
			getID();
		}
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		reset();
	}
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Printer error, cannot find printer", this->Text);
	}
};
}
