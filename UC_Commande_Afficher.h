#pragma once
#include "CL_Services.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Commande_Afficher
	/// </summary>
	public ref class UC_Commande_Afficher : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commande_Afficher(void)
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
		~UC_Commande_Afficher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommande;

	private: System::Data::DataSet^ dataSetCommande;
	private: CL_Services^ Services;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewCommande = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(5, 4);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AFFICHAGE DES COMMANDES";
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(3, 20);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewCommande->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewCommande->Size = System::Drawing::Size(577, 272);
			this->dataGridViewCommande->TabIndex = 1;
			this->dataGridViewCommande->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Commande_Afficher::dataGridViewCommande_CellContentClick);
			// 
			// UC_Commande_Afficher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->dataGridViewCommande);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UC_Commande_Afficher";
			this->Size = System::Drawing::Size(583, 295);
			this->Load += gcnew System::EventHandler(this, &UC_Commande_Afficher::UC_Commande_Afficher_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridViewCommande_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void UC_Commande_Afficher_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->dataGridViewCommande->Refresh();
		this->dataSetCommande = this->Services->afficherToutCommande("test");
		this->dataGridViewCommande->DataSource = this->dataSetCommande;
		this->dataGridViewCommande->DataMember = "test";
	}
	};
}
