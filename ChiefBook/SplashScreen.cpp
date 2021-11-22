#include "SplashScreen.h"

using namespace System;
using namespace System::Windows::Forms;

void OnFormClosed(System::Object ^sender, System::Windows::Forms::FormClosedEventArgs ^e) {
	Form^ form = safe_cast<Form^>(sender);
	form->FormClosed -= gcnew FormClosedEventHandler(&OnFormClosed);
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
}

[STAThread]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChiefBook::SplashScreen^ startupWindow = gcnew ChiefBook::SplashScreen();
	startupWindow->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
	startupWindow->Show();
	Application::Run();
	return 0;
}