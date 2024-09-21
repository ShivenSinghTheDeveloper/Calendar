#pragma once
#include "Calendar.h"

namespace CalendarApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for EventModification
	/// </summary>
	public ref class EventModification : public System::Windows::Forms::Form
	{
	public:
		EventModification(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			tableLayoutPanel1->ColumnCount = 5;
			tableLayoutPanel1->RowStyles->Clear();
			tableLayoutPanel1->ColumnStyles->Clear();
			array<String^>^ listOfTitles = gcnew array<String^> {"Id", "Date", "Time", "Length", "Notes"};
			for (int i = 0; i < tableLayoutPanel1->ColumnCount; i++)
			{
				Label^ headers = gcnew Label();
				headers->Text = listOfTitles[i];
				headers->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
				headers->TextAlign = ContentAlignment::MiddleCenter;
				tableLayoutPanel1->Controls->Add(headers, i, 0);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EventModification()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ timePicker;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ lengthPicker;
	private: System::Windows::Forms::RichTextBox^ notesPicker;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

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
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->timePicker = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lengthPicker = (gcnew System::Windows::Forms::RichTextBox());
			this->notesPicker = (gcnew System::Windows::Forms::RichTextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->richTextBox2->Location = System::Drawing::Point(816, 90);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(101, 123);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// timePicker
			// 
			this->timePicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->timePicker->Location = System::Drawing::Point(1252, 421);
			this->timePicker->Name = L"timePicker";
			this->timePicker->Size = System::Drawing::Size(302, 190);
			this->timePicker->TabIndex = 2;
			this->timePicker->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(211, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 72);
			this->button1->TabIndex = 3;
			this->button1->Text = L"See Events on This Date";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EventModification::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(90, 90);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(400, 31);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(981, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 72);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Select Event ID";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EventModification::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(1060, 818);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 92);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Publish Changes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EventModification::button3_Click);
			// 
			// lengthPicker
			// 
			this->lengthPicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->lengthPicker->Location = System::Drawing::Point(702, 560);
			this->lengthPicker->Name = L"lengthPicker";
			this->lengthPicker->Size = System::Drawing::Size(300, 205);
			this->lengthPicker->TabIndex = 7;
			this->lengthPicker->Text = L"";
			// 
			// notesPicker
			// 
			this->notesPicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->notesPicker->Location = System::Drawing::Point(1252, 709);
			this->notesPicker->Name = L"notesPicker";
			this->notesPicker->Size = System::Drawing::Size(298, 201);
			this->notesPicker->TabIndex = 8;
			this->notesPicker->Text = L"";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(695, 421);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(400, 31);
			this->dateTimePicker2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(189, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"See Events";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(809, 362);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 37);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(1362, 362);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 37);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Time";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(788, 498);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 37);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Length";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(1349, 632);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 37);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Notes";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.5F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.5F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				69)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				72)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(5, 5);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(5);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.97561F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.02439F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 2)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 2)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(223, 4);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(46, 257);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(607, 401);
			this->panel1->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(788, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(233, 37);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Select Event ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(1015, 283);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 37);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Modifications";
			// 
			// EventModification
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->ClientSize = System::Drawing::Size(1577, 943);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->notesPicker);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->lengthPicker);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->timePicker);
			this->Controls->Add(this->richTextBox2);
			this->Name = L"EventModification";
			this->Text = L"EventModification";
			this->Load += gcnew System::EventHandler(this, &EventModification::EventModification_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Calendar^ calendar = nullptr;
			  bool trigger = false;
				 private:
					 array<Calendar^>^ AddElement(array<Calendar^>^ originalArray, Calendar^ newElement)
					 {
						 int newSize = originalArray->Length + 1;
						 array<Calendar^>^ newArray = gcnew array<Calendar^>(newSize);

						 for (int i = 0; i < originalArray->Length; ++i)
						 {
							 newArray[i] = originalArray[i];
						 }

						 newArray[newSize - 1] = newElement;

						 return newArray;
					 }
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ theDate = dateTimePicker1->Value.ToShortDateString();
		tableLayoutPanel1->Controls->Clear();
		tableLayoutPanel1->RowCount = 0;

		if (theDate->Length == 0) {
			MessageBox::Show("Please enter a date.", "Date Error Message", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connectionString = "Data Source=Shiven;Initial Catalog=CalendarDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection SqlConn(connectionString);
			SqlConn.Open();
			String^ sqlQuery = "SELECT * FROM CalendarDB WHERE DateCalendar=@date;";
			SqlCommand command(sqlQuery, % SqlConn);
			//we might need to add a repeat here (maybe a while loop that says while table has matching dates add it to the calendarList)
			//while nextStatement.next
			//so far it's only adding 1 event from each day of the calendar
			command.Parameters->AddWithValue("@date", theDate);
			SqlDataReader^ reader = command.ExecuteReader();
			List<Calendar^>^ calendarList = gcnew List<Calendar^>();
			while (reader->Read()) {
				Calendar^ calendar = gcnew Calendar;
				calendar->setId(reader->GetInt32(0));
				calendar->setDate(reader->GetDateTime(1));
				calendar->setTime(reader->GetTimeSpan(2));
				calendar->setLength(reader->GetDecimal(3));
				calendar->setNotes(reader->GetString(4));
				calendarList->Add(calendar); // Add each event to the list
			}


			if (calendarList->Count == 0) {
				MessageBox::Show("No events found for the specified date", "Date Error Message", MessageBoxButtons::OK);
			}
			else {
				tableLayoutPanel1->RowCount = calendarList->Count + 1;
				tableLayoutPanel1->ColumnCount = 5;
				tableLayoutPanel1->RowStyles->Clear();
				tableLayoutPanel1->ColumnStyles->Clear();
				for (int i = 0; i < tableLayoutPanel1->RowCount; i++) {
					RowStyle^ rowStyle = gcnew RowStyle(SizeType::Percent, 100 / tableLayoutPanel1->RowCount); // Set each row to 30 pixels height
					tableLayoutPanel1->RowStyles->Add(rowStyle);
				}
				array<String^>^ listOfTitles = gcnew array<String^> {"Id", "Date", "Time", "Length", "Notes"};
				for (int i = 0; i < tableLayoutPanel1->ColumnCount; i++)
				{
					Label^ headers = gcnew Label();
					headers->Text = listOfTitles[i];
					headers->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
					headers->TextAlign = ContentAlignment::MiddleCenter;
					tableLayoutPanel1->Controls->Add(headers, i, 0);
				}

				for (int i = 0; i < calendarList->Count; i++) {
					Label^ id = gcnew Label;
					id->Text = calendarList[i]->getId().ToString();
					tableLayoutPanel1->Controls->Add(id, 0, i + 1);
					Label^ date = gcnew Label;
					date->Text = calendarList[i]->getDate().Date.ToShortDateString();
					tableLayoutPanel1->Controls->Add(date, 1, i + 1);
					Label^ time = gcnew Label;
					time->Text = calendarList[i]->getTime().ToString();
					tableLayoutPanel1->Controls->Add(time, 2, i + 1);
					Label^ length = gcnew Label;
					length->Text = calendarList[i]->getLength().ToString();
					tableLayoutPanel1->Controls->Add(length, 3, i + 1);
					Label^ notes = gcnew Label;
					notes->Text = calendarList[i]->getNotes();
					tableLayoutPanel1->Controls->Add(notes, 4, i + 1);

				}
				tableLayoutPanel1->Invalidate();
				tableLayoutPanel1->Update();
				String^ text = "";
				for each (Calendar ^ cal in calendarList) {
					text += "Event: " + cal->getNotes() + "\nTime: " + cal->getTime() + "\nLength: " + cal->getLength() + " Hours\n\n";
				}
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Database failed to connect" + e->ToString(), "Database Error Message", MessageBoxButtons::OK);

		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int idSelector = Int32::Parse(richTextBox2->Text);
	try
	{
		String^ connectionString = "Data Source=Shiven;Initial Catalog=CalendarDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection SqlConn(connectionString);
		SqlConn.Open();
		String^ SqlQuery = "SELECT * FROM CalendarDB WHERE Id = @idSelector;";
		SqlCommand command(SqlQuery, % SqlConn);
		command.Parameters->AddWithValue("@idSelector", idSelector);
		SqlDataReader^ reader = command.ExecuteReader();
		List<Calendar^>^ properties = gcnew List<Calendar^>();
		while (reader->Read()) {
			Calendar^ calendar = gcnew Calendar;
			calendar->setId(reader->GetInt32(0));
			calendar->setDate(reader->GetDateTime(1));
			calendar->setTime(reader->GetTimeSpan(2));
			calendar->setLength(reader->GetDecimal(3));
			calendar->setNotes(reader->GetString(4));
			properties->Add(calendar); // Add each event to the list
		}

		if (properties->Count == 0) {
			MessageBox::Show("The Id is incorrect, info empty", "Warning", MessageBoxButtons::OK);
		}
		else {
			dateTimePicker2->Value = properties[0]->getDate();
			timePicker->Text = properties[0]->getTime().ToString();
			lengthPicker->Text = properties[0]->getLength().ToString();
			notesPicker->Text = properties[0]->getNotes();
		}
		//we need to accept values and use the setters to change the data

		//richTextBox3->Text = properties[0]
		// we need to make getters and setters for the calendar class to be able to retrieve the data we put into it
		//print out each column onto the rich text boxes to be modified
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Database failed to connect" + e->ToString(), "Database Error Message", MessageBoxButtons::OK);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int idSelector = Int32::Parse(richTextBox2->Text);
	String^ eventDate = dateTimePicker2->Value.ToShortDateString();
	if (timePicker->Text != "" && lengthPicker->Text != "" && notesPicker->Text != "") {
		String^ eventTime = timePicker->Text;
		String^ eventLength = lengthPicker->Text;
		String^ eventNotes = notesPicker->Text;
		try
		{
			String^ connectionString = "Data Source=Shiven;Initial Catalog=CalendarDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection SqlConn(connectionString);
			SqlConn.Open();
			String^ sqlQuery = "UPDATE CalendarDB SET DateCalendar = @eventDate, TimeCalendar = @eventTime, LengthCalendar = @eventLength, NotesCalendar = @eventNotes WHERE Id = @idSelector";
			SqlCommand command(sqlQuery, % SqlConn);
			command.Parameters->AddWithValue("@eventDate", eventDate);
			command.Parameters->AddWithValue("@eventTime", eventTime);
			command.Parameters->AddWithValue("@eventLength", eventLength);
			command.Parameters->AddWithValue("@eventNotes", eventNotes);
			command.Parameters->AddWithValue("@idSelector", idSelector);
			int rowsAffected = command.ExecuteNonQuery();
			MessageBox::Show("Information has been updated. Rows Affected: " + rowsAffected, "Succesful Update", MessageBoxButtons::OK);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Database failed to connect" + e->ToString(), "Database Error Message", MessageBoxButtons::OK);
		}
	}

}
private: System::Void EventModification_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

//need to finish eventModification UI design
//print out data as table in text box