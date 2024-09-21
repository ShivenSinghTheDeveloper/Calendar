#include "CalendarForm.h"
#include "CreateEvent.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace CalendarApplication;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CalendarForm());


	//This part of the code needs to be reviewed. The issue is that calendar form is different type than form^ located in createevent init section h file
}

