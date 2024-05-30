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
	/// Summary for UC_Personnel_Afficher
	/// </summary>
	public ref class UC_Personnel_Afficher : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Afficher(void)
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
		~UC_Personnel_Afficher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAfficherEmployes;

	private: System::Data::DataSet^ dataSetEmploye;
	private: CL_Services^ Services;
	private: System::Windows::Forms::DataGridView^ dataGridViewEmploye;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lblAfficherEmployes = (gcnew System::Windows::Forms::Label());
			this->dataGridViewEmploye = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEmploye))->BeginInit();
			this->SuspendLayout();
			// 
			// lblAfficherEmployes
			// 
			this->lblAfficherEmployes->AutoSize = true;
			this->lblAfficherEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblAfficherEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAfficherEmployes->Location = System::Drawing::Point(4, 6);
			this->lblAfficherEmployes->Name = L"lblAfficherEmployes";
			this->lblAfficherEmployes->Size = System::Drawing::Size(174, 13);
			this->lblAfficherEmployes->TabIndex = 1;
			this->lblAfficherEmployes->Text = L"AFFICHAGE DES EMPLOYES";
			this->lblAfficherEmployes->Click += gcnew System::EventHandler(this, &UC_Personnel_Afficher::lblAfficherEmployes_Click);
			// 
			// dataGridViewEmploye
			// 
			this->dataGridViewEmploye->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEmploye->Location = System::Drawing::Point(7, 26);
			this->dataGridViewEmploye->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewEmploye->Name = L"dataGridViewEmploye";
			this->dataGridViewEmploye->RowHeadersWidth = 51;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewEmploye->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewEmploye->Size = System::Drawing::Size(766, 333);
			this->dataGridViewEmploye->TabIndex = 2;
			this->dataGridViewEmploye->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Personnel_Afficher::dataGridViewEmploye_CellContentClick);
			// 
			// UC_Personnel_Afficher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridViewEmploye);
			this->Controls->Add(this->lblAfficherEmployes);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UC_Personnel_Afficher";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Personnel_Afficher::UC_Personnel_Afficher_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEmploye))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UC_Personnel_Afficher_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->dataGridViewEmploye->Refresh();
		this->dataSetEmploye = this->Services->afficherToutPersonne("test");

		System::Data::DataRow^ row = dataSetEmploye->Tables["test"]->Rows[dataSetEmploye->Tables["test"]->Rows->Count-1];
		for (int i = 0; i < row->ItemArray->Length; i++) {
		System::Diagnostics::Debug::WriteLine(row->ItemArray[i]->ToString());
		}


		this->dataGridViewEmploye->DataSource = this->dataSetEmploye;
		this->dataGridViewEmploye->DataMember = "test";
	}
	private: System::Void dataGridViewEmploye_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void lblAfficherEmployes_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
