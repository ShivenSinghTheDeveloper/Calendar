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
	/// Summary for EventDeletion
	/// </summary>
	public ref class EventDeletion : public System::Windows::Forms::Form
	{
	public:
		EventDeletion(void)
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
		~EventDeletion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;



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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(39, 120);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(400, 31);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->richTextBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->richTextBox2->Location = System::Drawing::Point(392, 478);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(115, 96);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(140, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 60);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Pick";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EventDeletion::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(392, 616);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 52);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EventDeletion::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(133, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Pick a Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(306, 398);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(297, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Pick an ID to Delete";
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
				74)));
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
			this->tableLayoutPanel1->Size = System::Drawing::Size(225, 4);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(499, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(440, 360);
			this->panel1->TabIndex = 12;
			// 
			// EventDeletion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->ClientSize = System::Drawing::Size(1077, 699);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"EventDeletion";
			this->Text = L"EventDeletion";
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
		String^ SqlQuery = "DELETE FROM CalendarDB WHERE Id = @idSelector;";
		SqlCommand command(SqlQuery, % SqlConn);
		command.Parameters->AddWithValue("@idSelector", idSelector);
		int rowsAffected = command.ExecuteNonQuery();
		MessageBox::Show("Information has been deleted. Rows Affected: " + rowsAffected, "Succesful Deletion", MessageBoxButtons::OK);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Database failed to connect" + e->ToString(), "Database Error Message", MessageBoxButtons::OK);
	}
}
};
}