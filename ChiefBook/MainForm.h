#pragma once
#include "DailyRation.h"
#include "StorageForm.h"
#include "DBRecipes.h"

namespace ChiefBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  DailyRationButton;
	private: System::Windows::Forms::Button^  StorageButton;
	private: System::Windows::Forms::Button^  DBRecipesButton;
	private: System::Windows::Forms::Button^  ExitButton;
	protected:




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
			this->DailyRationButton = (gcnew System::Windows::Forms::Button());
			this->StorageButton = (gcnew System::Windows::Forms::Button());
			this->DBRecipesButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DailyRationButton
			// 
			this->DailyRationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DailyRationButton->Location = System::Drawing::Point(100, 121);
			this->DailyRationButton->Name = L"DailyRationButton";
			this->DailyRationButton->Size = System::Drawing::Size(346, 67);
			this->DailyRationButton->TabIndex = 0;
			this->DailyRationButton->Text = L"Ежедневный рацион";
			this->DailyRationButton->UseVisualStyleBackColor = true;
			this->DailyRationButton->Click += gcnew System::EventHandler(this, &MainForm::DailyRationButton_Click);
			// 
			// StorageButton
			// 
			this->StorageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StorageButton->Location = System::Drawing::Point(100, 208);
			this->StorageButton->Name = L"StorageButton";
			this->StorageButton->Size = System::Drawing::Size(346, 67);
			this->StorageButton->TabIndex = 0;
			this->StorageButton->Text = L"Корректировка продуктов";
			this->StorageButton->UseVisualStyleBackColor = true;
			this->StorageButton->Click += gcnew System::EventHandler(this, &MainForm::StorageButton_Click);
			// 
			// DBRecipesButton
			// 
			this->DBRecipesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DBRecipesButton->Location = System::Drawing::Point(100, 303);
			this->DBRecipesButton->Name = L"DBRecipesButton";
			this->DBRecipesButton->Size = System::Drawing::Size(346, 67);
			this->DBRecipesButton->TabIndex = 0;
			this->DBRecipesButton->Text = L"Список Рецептов";
			this->DBRecipesButton->UseVisualStyleBackColor = true;
			this->DBRecipesButton->Click += gcnew System::EventHandler(this, &MainForm::DBRecipesButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(336, 458);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(175, 51);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->Text = L"Выход";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 540);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->DBRecipesButton);
			this->Controls->Add(this->StorageButton);
			this->Controls->Add(this->DailyRationButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поваренная книга";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

private: System::Void DailyRationButton_Click(System::Object^  sender, System::EventArgs^  e) {

	DailyRation^ dailyRationForm = gcnew DailyRation(this);
	dailyRationForm->Show();
	this->Hide();
}
private: System::Void StorageButton_Click(System::Object^  sender, System::EventArgs^  e) {
	StorageForm^ storageForm = gcnew StorageForm(this);
	storageForm->Show();
	this->Hide();
}
private: System::Void DBRecipesButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DBRecipes^ dbRecipesForm = gcnew DBRecipes(this);
	dbRecipesForm->Show();
	this->Hide();

}
};
}
