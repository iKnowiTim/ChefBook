#pragma once

#include <msclr\marshal_cppstd.h>
#include "Storage.h"

namespace ChiefBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StorageForm
	/// </summary>
	public ref class StorageForm : public System::Windows::Forms::Form
	{
	public:
		StorageForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ListView^  StorageListView;
	public:
	private: System::Windows::Forms::Label^  ProductLabel;
	private: System::Windows::Forms::Label^  CurrentAmountProductLabel;
	private: System::Windows::Forms::TextBox^  NewAmountTextBox;
	private: System::Windows::Forms::Button^  ChangeAmountButton;
	private: System::Windows::Forms::Button^  MainFormButton;



	private: Storage* storage = new Storage();
			 


	private: System::Windows::Forms::Form ^ otherform;
	public:
		StorageForm(System::Windows::Forms::Form ^ o)
		{
			otherform = o;
			InitializeComponent();			

			storage->load();			

			for (auto& [name, quantity] : storage->quantities) {
				StorageListView->Items->Add(gcnew String(name.c_str()));
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StorageForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->StorageListView = (gcnew System::Windows::Forms::ListView());
			this->ProductLabel = (gcnew System::Windows::Forms::Label());
			this->CurrentAmountProductLabel = (gcnew System::Windows::Forms::Label());
			this->NewAmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ChangeAmountButton = (gcnew System::Windows::Forms::Button());
			this->MainFormButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StorageListView
			// 
			this->StorageListView->HideSelection = false;
			this->StorageListView->Location = System::Drawing::Point(36, 45);
			this->StorageListView->MultiSelect = false;
			this->StorageListView->Name = L"StorageListView";
			this->StorageListView->Size = System::Drawing::Size(250, 545);
			this->StorageListView->TabIndex = 0;
			this->StorageListView->UseCompatibleStateImageBehavior = false;
			this->StorageListView->View = System::Windows::Forms::View::List;
			this->StorageListView->SelectedIndexChanged += gcnew System::EventHandler(this, &StorageForm::MainFormButton_Change);
			// 
			// ProductLabel
			// 
			this->ProductLabel->AutoSize = true;
			this->ProductLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductLabel->Location = System::Drawing::Point(435, 45);
			this->ProductLabel->Name = L"ProductLabel";
			this->ProductLabel->Size = System::Drawing::Size(125, 29);
			this->ProductLabel->TabIndex = 1;
			this->ProductLabel->Text = L"Продукт: ";
			// 
			// CurrentAmountProductLabel
			// 
			this->CurrentAmountProductLabel->AutoSize = true;
			this->CurrentAmountProductLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentAmountProductLabel->Location = System::Drawing::Point(435, 116);
			this->CurrentAmountProductLabel->Name = L"CurrentAmountProductLabel";
			this->CurrentAmountProductLabel->Size = System::Drawing::Size(164, 29);
			this->CurrentAmountProductLabel->TabIndex = 1;
			this->CurrentAmountProductLabel->Text = L"Количество: ";
			// 
			// NewAmountTextBox
			// 
			this->NewAmountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewAmountTextBox->Location = System::Drawing::Point(440, 181);
			this->NewAmountTextBox->Name = L"NewAmountTextBox";
			this->NewAmountTextBox->Size = System::Drawing::Size(100, 36);
			this->NewAmountTextBox->TabIndex = 2;
			// 
			// ChangeAmountButton
			// 
			this->ChangeAmountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChangeAmountButton->Location = System::Drawing::Point(575, 181);
			this->ChangeAmountButton->Name = L"ChangeAmountButton";
			this->ChangeAmountButton->Size = System::Drawing::Size(158, 36);
			this->ChangeAmountButton->TabIndex = 3;
			this->ChangeAmountButton->Text = L"Изменить";
			this->ChangeAmountButton->UseVisualStyleBackColor = true;
			// 
			// MainFormButton
			// 
			this->MainFormButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainFormButton->Location = System::Drawing::Point(36, 665);
			this->MainFormButton->Name = L"MainFormButton";
			this->MainFormButton->Size = System::Drawing::Size(158, 63);
			this->MainFormButton->TabIndex = 3;
			this->MainFormButton->Text = L"Главная";
			this->MainFormButton->UseVisualStyleBackColor = true;
			this->MainFormButton->Click += gcnew System::EventHandler(this, &StorageForm::MainFormButton_Click);
			// 
			// StorageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 772);
			this->Controls->Add(this->MainFormButton);
			this->Controls->Add(this->ChangeAmountButton);
			this->Controls->Add(this->NewAmountTextBox);
			this->Controls->Add(this->CurrentAmountProductLabel);
			this->Controls->Add(this->ProductLabel);
			this->Controls->Add(this->StorageListView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"StorageForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поваренная книга";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainFormButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		otherform->Show();
	}

private: System::Void MainFormButton_Change(System::Object^  sender, System::EventArgs^  e) {
	if (StorageListView->SelectedItems->Count <= 0) {
		return;
	}

	auto name = msclr::interop::marshal_as<std::string>(StorageListView->SelectedItems[0]->Text);
	CurrentAmountProductLabel->Text = "Количество: " + storage->quantities[name].ToString();
	ProductLabel->Text = "Продукт: " + StorageListView->SelectedItems[0]->Text;


}
};
}
