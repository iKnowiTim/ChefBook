#pragma once

#include <vector>
#include <string>

namespace ChiefBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DBRecipes
	/// </summary>
	public ref class DBRecipes : public System::Windows::Forms::Form
	{
	public:
		DBRecipes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ListBox^  currentRecipesListBox;
	public:

	public:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  removeButton;
	private: System::Windows::Forms::Button^  ChangeButton;
	private: System::Windows::Forms::Label^  currRecipeLabel;
	private: System::Windows::Forms::ListBox^  selectedRecipeListBox;
	private: System::Windows::Forms::Label^  addNewRecipeLabel;
	private: System::Windows::Forms::TextBox^  nameRecipeTextBox;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;






















	private: System::Windows::Forms::Form ^ otherform;
	public:
		DBRecipes(System::Windows::Forms::Form ^ o)
		{
			otherform = o;
			InitializeComponent();

			std::vector<std::string> products{
				"123",
				"234",
				"345"
			};

			auto x = (DataGridViewComboBoxColumn^)dataGridView1->Columns[0];
									
			for (auto product : products) {
				x->Items->Add(gcnew String(product.c_str()));
			}
			/*MessageBox::Show(x->Name);*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DBRecipes()
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
			this->currentRecipesListBox = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->ChangeButton = (gcnew System::Windows::Forms::Button());
			this->currRecipeLabel = (gcnew System::Windows::Forms::Label());
			this->selectedRecipeListBox = (gcnew System::Windows::Forms::ListBox());
			this->addNewRecipeLabel = (gcnew System::Windows::Forms::Label());
			this->nameRecipeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// currentRecipesListBox
			// 
			this->currentRecipesListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentRecipesListBox->FormattingEnabled = true;
			this->currentRecipesListBox->ItemHeight = 25;
			this->currentRecipesListBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"name", L"sdfsf", L"asdfasdf", L"sadfasdf" });
			this->currentRecipesListBox->Location = System::Drawing::Point(55, 69);
			this->currentRecipesListBox->Name = L"currentRecipesListBox";
			this->currentRecipesListBox->Size = System::Drawing::Size(230, 479);
			this->currentRecipesListBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Все рецепты:";
			// 
			// removeButton
			// 
			this->removeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeButton->Location = System::Drawing::Point(528, 570);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(111, 42);
			this->removeButton->TabIndex = 2;
			this->removeButton->Text = L"удалить";
			this->removeButton->UseVisualStyleBackColor = true;
			// 
			// ChangeButton
			// 
			this->ChangeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChangeButton->Location = System::Drawing::Point(322, 570);
			this->ChangeButton->Name = L"ChangeButton";
			this->ChangeButton->Size = System::Drawing::Size(111, 42);
			this->ChangeButton->TabIndex = 3;
			this->ChangeButton->Text = L"изменить";
			this->ChangeButton->UseVisualStyleBackColor = true;
			// 
			// currRecipeLabel
			// 
			this->currRecipeLabel->AutoSize = true;
			this->currRecipeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currRecipeLabel->Location = System::Drawing::Point(317, 27);
			this->currRecipeLabel->Name = L"currRecipeLabel";
			this->currRecipeLabel->Size = System::Drawing::Size(185, 25);
			this->currRecipeLabel->TabIndex = 4;
			this->currRecipeLabel->Text = L"Выбраный рецепт:";
			// 
			// selectedRecipeListBox
			// 
			this->selectedRecipeListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->selectedRecipeListBox->FormattingEnabled = true;
			this->selectedRecipeListBox->ItemHeight = 25;
			this->selectedRecipeListBox->Location = System::Drawing::Point(322, 69);
			this->selectedRecipeListBox->Name = L"selectedRecipeListBox";
			this->selectedRecipeListBox->Size = System::Drawing::Size(317, 479);
			this->selectedRecipeListBox->TabIndex = 5;
			// 
			// addNewRecipeLabel
			// 
			this->addNewRecipeLabel->AutoSize = true;
			this->addNewRecipeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewRecipeLabel->Location = System::Drawing::Point(669, 27);
			this->addNewRecipeLabel->Name = L"addNewRecipeLabel";
			this->addNewRecipeLabel->Size = System::Drawing::Size(150, 25);
			this->addNewRecipeLabel->TabIndex = 6;
			this->addNewRecipeLabel->Text = L"Новый рецепт:";
			// 
			// nameRecipeTextBox
			// 
			this->nameRecipeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameRecipeTextBox->Location = System::Drawing::Point(674, 69);
			this->nameRecipeTextBox->Name = L"nameRecipeTextBox";
			this->nameRecipeTextBox->Size = System::Drawing::Size(292, 30);
			this->nameRecipeTextBox->TabIndex = 7;
			this->nameRecipeTextBox->Text = L"Название рецепта";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(674, 117);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(292, 485);
			this->dataGridView1->TabIndex = 8;
			// 
			// Column1
			// 
			this->Column1->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->Column1->HeaderText = L"Name";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Count";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Gramm";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// DBRecipes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 679);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->nameRecipeTextBox);
			this->Controls->Add(this->addNewRecipeLabel);
			this->Controls->Add(this->selectedRecipeListBox);
			this->Controls->Add(this->currRecipeLabel);
			this->Controls->Add(this->ChangeButton);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->currentRecipesListBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"DBRecipes";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поваренная книга";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	};
}
