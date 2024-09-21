#pragma once

namespace CalendarApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for CreateEvent
	/// </summary>
	public ref class CreateEvent : public System::Windows::Forms::Form
	{
	public:
		CreateEvent(void)
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
		~CreateEvent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::RichTextBox^ timePicker;
	private: System::Windows::Forms::RichTextBox^ lengthPicker;
	private: System::Windows::Forms::RichTextBox^ notesPicker;
		   Form^ _mainForm;




	private: System::Windows::Forms::Button^ select;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





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
			this->timePicker = (gcnew System::Windows::Forms::RichTextBox());
			this->lengthPicker = (gcnew System::Windows::Forms::RichTextBox());
			this->notesPicker = (gcnew System::Windows::Forms::RichTextBox());
			this->select = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 104);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(400, 31);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// timePicker
			// 
			this->timePicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->timePicker->ForeColor = System::Drawing::SystemColors::Window;
			this->timePicker->Location = System::Drawing::Point(506, 82);
			this->timePicker->Name = L"timePicker";
			this->timePicker->Size = System::Drawing::Size(223, 96);
			this->timePicker->TabIndex = 2;
			this->timePicker->Text = L"";
			this->timePicker->TextChanged += gcnew System::EventHandler(this, &CreateEvent::timePicker_TextChanged);
			// 
			// lengthPicker
			// 
			this->lengthPicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->lengthPicker->ForeColor = System::Drawing::SystemColors::Window;
			this->lengthPicker->Location = System::Drawing::Point(71, 275);
			this->lengthPicker->Name = L"lengthPicker";
			this->lengthPicker->Size = System::Drawing::Size(223, 96);
			this->lengthPicker->TabIndex = 3;
			this->lengthPicker->Text = L"";
			// 
			// notesPicker
			// 
			this->notesPicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->notesPicker->ForeColor = System::Drawing::SystemColors::Window;
			this->notesPicker->Location = System::Drawing::Point(506, 275);
			this->notesPicker->Name = L"notesPicker";
			this->notesPicker->Size = System::Drawing::Size(223, 96);
			this->notesPicker->TabIndex = 4;
			this->notesPicker->Text = L"";
			// 
			// select
			// 
			this->select->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->select->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->select->Location = System::Drawing::Point(342, 352);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(105, 68);
			this->select->TabIndex = 5;
			this->select->Text = L"Create";
			this->select->UseVisualStyleBackColor = false;
			this->select->Click += gcnew System::EventHandler(this, &CreateEvent::select_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(105, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 37);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Pick a Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(488, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 37);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Write a Description";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(83, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 37);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Pick a Length";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(526, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 37);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Pick a Time";
			// 
			// CreateEvent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->ClientSize = System::Drawing::Size(881, 465);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->select);
			this->Controls->Add(this->notesPicker);
			this->Controls->Add(this->lengthPicker);
			this->Controls->Add(this->timePicker);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"CreateEvent";
			this->Text = L"CreateEvent";
			this->Load += gcnew System::EventHandler(this, &CreateEvent::CreateEvent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void select_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ eventDate = dateTimePicker1->Value.ToShortDateString();
	if (timePicker->Text != "" && lengthPicker->Text != "" && notesPicker->Text != "") {
		String^ eventTime = timePicker->Text;
		String^ eventLength = lengthPicker->Text;
		String^ eventNotes = notesPicker->Text;

		try
		{
			String^ connectionString = "Data Source=Shiven;Initial Catalog=CalendarDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection SqlConn(connectionString);
			SqlConn.Open();
			String^ sqlQuery = "INSERT INTO CalendarDB (DateCalendar, TimeCalendar, LengthCalendar, NotesCalendar) VALUES (@eventDate, @eventTime, @eventLength, @eventNotes);";
			SqlCommand command(sqlQuery, % SqlConn);
			command.Parameters->AddWithValue("@eventDate", eventDate);
			command.Parameters->AddWithValue("@eventTime", eventTime);
			command.Parameters->AddWithValue("@eventLength", eventLength);
			command.Parameters->AddWithValue("@eventNotes", eventNotes);
			int rowsAffected = command.ExecuteNonQuery();
			MessageBox::Show("Information has been registered. Rows Affected: " + rowsAffected, "Succesfull Registration", MessageBoxButtons::OK);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Database failed to connect" + e->ToString(), "Database Error Message", MessageBoxButtons::OK);

		}

	}
	else {
		MessageBox::Show("You have left one or more of the text boxes empty. Please fill them in.", "Input Error Message", MessageBoxButtons::OK);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void timePicker_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CreateEvent_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
