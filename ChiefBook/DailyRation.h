#pragma once

namespace ChiefBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DailyRation
	/// </summary>
	public ref class DailyRation : public System::Windows::Forms::Form
	{
	public:
		DailyRation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label1;
	public:
	private: System::Windows::Forms::TextBox^  NumOfPersonTextBox;
	private: System::Windows::Forms::Button^  AcceptNumOfPersonButton;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ListBox^  RecipeDescriptionListBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  CheckProductsLabel;
	private: System::Windows::Forms::Label^  PriceAddProductsLabel;
	private: System::Windows::Forms::ListView^  CurrentRecipesListView;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  AddButton;
	private: System::Windows::Forms::Button^  RemoveButton;
	private: System::Windows::Forms::Button^  MainFormButton;

	private: System::Windows::Forms::Form ^ otherform;
	public:
		DailyRation(System::Windows::Forms::Form ^ o)
		{
			otherform = o;
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DailyRation()
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NumOfPersonTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AcceptNumOfPersonButton = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->RecipeDescriptionListBox = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CheckProductsLabel = (gcnew System::Windows::Forms::Label());
			this->PriceAddProductsLabel = (gcnew System::Windows::Forms::Label());
			this->CurrentRecipesListView = (gcnew System::Windows::Forms::ListView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->RemoveButton = (gcnew System::Windows::Forms::Button());
			this->MainFormButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Число персон:";
			// 
			// NumOfPersonTextBox
			// 
			this->NumOfPersonTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumOfPersonTextBox->Location = System::Drawing::Point(37, 81);
			this->NumOfPersonTextBox->Name = L"NumOfPersonTextBox";
			this->NumOfPersonTextBox->Size = System::Drawing::Size(59, 30);
			this->NumOfPersonTextBox->TabIndex = 1;
			// 
			// AcceptNumOfPersonButton
			// 
			this->AcceptNumOfPersonButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AcceptNumOfPersonButton->Location = System::Drawing::Point(136, 81);
			this->AcceptNumOfPersonButton->Name = L"AcceptNumOfPersonButton";
			this->AcceptNumOfPersonButton->Size = System::Drawing::Size(106, 30);
			this->AcceptNumOfPersonButton->TabIndex = 2;
			this->AcceptNumOfPersonButton->Text = L"Принять";
			this->AcceptNumOfPersonButton->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(37, 143);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(205, 404);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// RecipeDescriptionListBox
			// 
			this->RecipeDescriptionListBox->FormattingEnabled = true;
			this->RecipeDescriptionListBox->ItemHeight = 16;
			this->RecipeDescriptionListBox->Location = System::Drawing::Point(339, 143);
			this->RecipeDescriptionListBox->Name = L"RecipeDescriptionListBox";
			this->RecipeDescriptionListBox->Size = System::Drawing::Size(389, 404);
			this->RecipeDescriptionListBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(334, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Накладная";
			// 
			// CheckProductsLabel
			// 
			this->CheckProductsLabel->AutoSize = true;
			this->CheckProductsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckProductsLabel->Location = System::Drawing::Point(334, 572);
			this->CheckProductsLabel->Name = L"CheckProductsLabel";
			this->CheckProductsLabel->Size = System::Drawing::Size(369, 25);
			this->CheckProductsLabel->TabIndex = 0;
			this->CheckProductsLabel->Text = L"Достаточность продуктов на складе: ";
			// 
			// PriceAddProductsLabel
			// 
			this->PriceAddProductsLabel->AutoSize = true;
			this->PriceAddProductsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PriceAddProductsLabel->Location = System::Drawing::Point(334, 623);
			this->PriceAddProductsLabel->Name = L"PriceAddProductsLabel";
			this->PriceAddProductsLabel->Size = System::Drawing::Size(190, 25);
			this->PriceAddProductsLabel->TabIndex = 0;
			this->PriceAddProductsLabel->Text = L"Цена доп. закупки: ";
			// 
			// CurrentRecipesListView
			// 
			this->CurrentRecipesListView->HideSelection = false;
			this->CurrentRecipesListView->Location = System::Drawing::Point(827, 143);
			this->CurrentRecipesListView->Name = L"CurrentRecipesListView";
			this->CurrentRecipesListView->Size = System::Drawing::Size(205, 404);
			this->CurrentRecipesListView->TabIndex = 3;
			this->CurrentRecipesListView->UseCompatibleStateImageBehavior = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(822, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Выбранные рецепты";
			// 
			// AddButton
			// 
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(37, 567);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(205, 49);
			this->AddButton->TabIndex = 2;
			this->AddButton->Text = L"Добавить";
			this->AddButton->UseVisualStyleBackColor = true;
			// 
			// RemoveButton
			// 
			this->RemoveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveButton->Location = System::Drawing::Point(827, 567);
			this->RemoveButton->Name = L"RemoveButton";
			this->RemoveButton->Size = System::Drawing::Size(205, 49);
			this->RemoveButton->TabIndex = 2;
			this->RemoveButton->Text = L"Удалить";
			this->RemoveButton->UseVisualStyleBackColor = true;
			// 
			// MainFormButton
			// 
			this->MainFormButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainFormButton->Location = System::Drawing::Point(37, 653);
			this->MainFormButton->Name = L"MainFormButton";
			this->MainFormButton->Size = System::Drawing::Size(127, 44);
			this->MainFormButton->TabIndex = 2;
			this->MainFormButton->Text = L"Главная";
			this->MainFormButton->UseVisualStyleBackColor = true;
			this->MainFormButton->Click += gcnew System::EventHandler(this, &DailyRation::MainFormButton_Click);
			// 
			// DailyRation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 726);
			this->Controls->Add(this->RecipeDescriptionListBox);
			this->Controls->Add(this->CurrentRecipesListView);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->RemoveButton);
			this->Controls->Add(this->MainFormButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->AcceptNumOfPersonButton);
			this->Controls->Add(this->NumOfPersonTextBox);
			this->Controls->Add(this->PriceAddProductsLabel);
			this->Controls->Add(this->CheckProductsLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"DailyRation";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поваренная книга";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainFormButton_Click(System::Object^  sender, System::EventArgs^  e) {
		otherform->Show();
		this->Close();
	}
};
}
