#pragma once
#include "Calendar.h"
#include "CreateEvent.h"
#include "EventDeletion.h"
#include "EventModification.h"
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
	/// Summary for CalendarForm
	/// </summary>
	public ref class CalendarForm : public System::Windows::Forms::Form
	{
	public:
		CalendarForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// 
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
		~CalendarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Button^ btnPick;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ createEvent;
	private: System::Windows::Forms::Button^ deleteEvent;
	private: System::Windows::Forms::Button^ modifyEvent;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnPick = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->createEvent = (gcnew System::Windows::Forms::Button());
			this->deleteEvent = (gcnew System::Windows::Forms::Button());
			this->modifyEvent = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::Red;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Red;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::Red;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::Red;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(34, 145);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(400, 31);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &CalendarForm::dateTimePicker1_ValueChanged);
			// 
			// btnPick
			// 
			this->btnPick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->btnPick->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPick->Location = System::Drawing::Point(107, 221);
			this->btnPick->Name = L"btnPick";
			this->btnPick->Size = System::Drawing::Size(186, 66);
			this->btnPick->TabIndex = 2;
			this->btnPick->Text = L"Pick";
			this->btnPick->UseVisualStyleBackColor = false;
			this->btnPick->Click += gcnew System::EventHandler(this, &CalendarForm::btnPick_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(966, 536);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(121, 78);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &CalendarForm::btnCancel_Click);
			// 
			// createEvent
			// 
			this->createEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->createEvent->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->createEvent->Location = System::Drawing::Point(694, 113);
			this->createEvent->Name = L"createEvent";
			this->createEvent->Size = System::Drawing::Size(268, 63);
			this->createEvent->TabIndex = 5;
			this->createEvent->Text = L"Create an Event";
			this->createEvent->UseVisualStyleBackColor = false;
			this->createEvent->Click += gcnew System::EventHandler(this, &CalendarForm::createEvent_Click);
			// 
			// deleteEvent
			// 
			this->deleteEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->deleteEvent->ForeColor = System::Drawing::Color::White;
			this->deleteEvent->Location = System::Drawing::Point(694, 269);
			this->deleteEvent->Name = L"deleteEvent";
			this->deleteEvent->Size = System::Drawing::Size(268, 63);
			this->deleteEvent->TabIndex = 6;
			this->deleteEvent->Text = L"Delete an Event";
			this->deleteEvent->UseVisualStyleBackColor = false;
			this->deleteEvent->Click += gcnew System::EventHandler(this, &CalendarForm::button2_Click);
			// 
			// modifyEvent
			// 
			this->modifyEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->modifyEvent->ForeColor = System::Drawing::Color::White;
			this->modifyEvent->Location = System::Drawing::Point(694, 435);
			this->modifyEvent->Name = L"modifyEvent";
			this->modifyEvent->Size = System::Drawing::Size(268, 63);
			this->modifyEvent->TabIndex = 7;
			this->modifyEvent->Text = L"Modify an Event";
			this->modifyEvent->UseVisualStyleBackColor = false;
			this->modifyEvent->Click += gcnew System::EventHandler(this, &CalendarForm::modifyEvent_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(27, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 37);
			this->label1->TabIndex = 8;
			this->label1->Text = L"View Your Scheduled Events";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(707, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 37);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Event Manager";
			this->label2->Click += gcnew System::EventHandler(this, &CalendarForm::label2_Click);
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
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
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
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CalendarForm::tableLayoutPanel1_Paint);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(34, 334);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(580, 265);
			this->panel1->TabIndex = 11;
			// 
			// CalendarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->ClientSize = System::Drawing::Size(1110, 630);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->modifyEvent);
			this->Controls->Add(this->deleteEvent);
			this->Controls->Add(this->createEvent);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnPick);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"CalendarForm";
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &CalendarForm::CalendarForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
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
private: System::Void btnPick_Click(System::Object^ sender, System::EventArgs^ e) {
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
				RowStyle^ rowStyle = gcnew RowStyle(SizeType::Percent, 100/tableLayoutPanel1->RowCount ); // Set each row to 30 pixels height
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
private: System::Void createEvent_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateEvent^ ce = gcnew CreateEvent();
	ce->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	EventDeletion^ de = gcnew EventDeletion();
	de->Show();
}
private: System::Void modifyEvent_Click(System::Object^ sender, System::EventArgs^ e) {
	EventModification^ em = gcnew EventModification();
	em->Show();
}
private: System::Void CalendarForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}

//table not printing equally sized rows or columns
//pretty sure it's printing all the data, just not displaying it because the cells are too small
//we need to figure out how to set even sizes on the rows and columns to display everything