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
	/// Summary for UC_Clients_Afficher
	/// </summary>
	public ref class UC_Clients_Afficher : public System::Windows::Forms::UserControl
	{
	public:
		UC_Clients_Afficher(void)
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
		~UC_Clients_Afficher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewClients;
	protected:
	private: System::Windows::Forms::Label^ lblAfficherEmployes;
	private: System::Data::DataSet^ dataSetClients;
	private: CL_Services^ Services;

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
			this->dataGridViewClients = (gcnew System::Windows::Forms::DataGridView());
			this->lblAfficherEmployes = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClients))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewClients
			// 
			this->dataGridViewClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClients->Location = System::Drawing::Point(7, 25);
			this->dataGridViewClients->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewClients->Name = L"dataGridViewClients";
			this->dataGridViewClients->RowHeadersWidth = 51;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewClients->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewClients->Size = System::Drawing::Size(766, 333);
			this->dataGridViewClients->TabIndex = 4;
			this->dataGridViewClients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Clients_Afficher::dataGridViewClients_CellContentClick);
			// 
			// lblAfficherEmployes
			// 
			this->lblAfficherEmployes->AutoSize = true;
			this->lblAfficherEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblAfficherEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAfficherEmployes->Location = System::Drawing::Point(4, 0);
			this->lblAfficherEmployes->Name = L"lblAfficherEmployes";
			this->lblAfficherEmployes->Size = System::Drawing::Size(160, 13);
			this->lblAfficherEmployes->TabIndex = 3;
			this->lblAfficherEmployes->Text = L"AFFICHAGE DES CLIENTS";
			// 
			// UC_Clients_Afficher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridViewClients);
			this->Controls->Add(this->lblAfficherEmployes);
			this->MaximumSize = System::Drawing::Size(777, 363);
			this->MinimumSize = System::Drawing::Size(777, 363);
			this->Name = L"UC_Clients_Afficher";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Clients_Afficher::UC_Clients_Afficher_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClients))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridViewClients_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
	private: System::Void UC_Clients_Afficher_Load_1(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->dataGridViewClients->Refresh();
		this->dataSetClients = this->Services->afficherClient("test");
		this->dataGridViewClients->DataSource = this->dataSetClients;
		this->dataGridViewClients->DataMember = "test";
	}
	};
}