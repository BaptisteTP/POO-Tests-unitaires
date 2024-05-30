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
	/// Summary for UC_Stats
	/// </summary>
	public ref class UC_Stats : public System::Windows::Forms::UserControl
	{
	public:
		UC_Stats(void)
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
		~UC_Stats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: CL_Services^ Services;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ CA;
	private: System::Windows::Forms::TextBox^ panierMoy;


	private: System::Windows::Forms::Label^ label6;
	private: System::Data::DataSet^ dataSet10sup;
	private: System::Data::DataSet^ dataSet10less;
	private: System::Windows::Forms::TextBox^ returnAchat;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ enterClient;

	private: System::Windows::Forms::Label^ label8;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CA = (gcnew System::Windows::Forms::TextBox());
			this->panierMoy = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->returnAchat = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->enterClient = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(278, 127);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 39);
			this->label1->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(33, 79);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Size = System::Drawing::Size(149, 213);
			this->dataGridView1->TabIndex = 4;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(205, 79);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Size = System::Drawing::Size(158, 213);
			this->dataGridView2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Les 10 Articles les plus vendus";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(202, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Les 10 Articles les moins Vendus";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Statistiques";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Chiffre d\'affaire du mois :";
			// 
			// CA
			// 
			this->CA->Location = System::Drawing::Point(214, 29);
			this->CA->Name = L"CA";
			this->CA->Size = System::Drawing::Size(71, 20);
			this->CA->TabIndex = 10;
			// 
			// panierMoy
			// 
			this->panierMoy->Location = System::Drawing::Point(568, 29);
			this->panierMoy->Name = L"panierMoy";
			this->panierMoy->Size = System::Drawing::Size(71, 20);
			this->panierMoy->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(394, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Montant Panier Moyen :";
			// 
			// returnAchat
			// 
			this->returnAchat->Location = System::Drawing::Point(703, 61);
			this->returnAchat->Name = L"returnAchat";
			this->returnAchat->Size = System::Drawing::Size(35, 20);
			this->returnAchat->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(392, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(247, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Montant total des achats du Client :";
			// 
			// enterClient
			// 
			this->enterClient->Location = System::Drawing::Point(645, 61);
			this->enterClient->Name = L"enterClient";
			this->enterClient->Size = System::Drawing::Size(35, 20);
			this->enterClient->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(682, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"=";
			// 
			// UC_Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->enterClient);
			this->Controls->Add(this->returnAchat);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panierMoy);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->CA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UC_Stats";
			this->Size = System::Drawing::Size(741, 295);
			this->Load += gcnew System::EventHandler(this, &UC_Stats::UC_Stats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UC_Stats_Load(System::Object^ sender, System::EventArgs^ e) {
		//10 plus vendus
		Services = gcnew CL_Services();
		this->dataGridView1->Refresh();
		this->dataSet10sup = this->Services->afficherstat10sup("test");
		this->dataGridView1->DataSource = this->dataSet10sup;
		this->dataGridView1->DataMember = "test";

		//10 moins vendus 
		Services = gcnew CL_Services();
		this->dataGridView2->Refresh();
		this->dataSet10less = this->Services->afficherstat10less("test");
		this->dataGridView2->DataSource = this->dataSet10less;
		this->dataGridView2->DataMember = "test";

		this->CA->Text = System::Convert::ToString(this->Services->afficheCA());


		this->panierMoy->Text = System::Convert::ToString(this->Services->afficheValue());
	}
};
}
