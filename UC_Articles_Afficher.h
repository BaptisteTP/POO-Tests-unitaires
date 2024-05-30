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
	/// Summary for UC_Articles_Afficher
	/// </summary>
	public ref class UC_Articles_Afficher : public System::Windows::Forms::UserControl
	{
	public:
		UC_Articles_Afficher(void)
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
		~UC_Articles_Afficher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TBidArticle;
	private: System::Windows::Forms::Button^ afficherArticleId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ afficherTousArticles;
	private: System::Windows::Forms::DataGridView^ dataGridViewArticles;
	private: System::Data::DataSet^ dataSetArticle;
	private: CL_Services^ Services;
	private: System::Windows::Forms::Label^ lblError;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBidArticle = (gcnew System::Windows::Forms::TextBox());
			this->afficherArticleId = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->afficherTousArticles = (gcnew System::Windows::Forms::Button());
			this->dataGridViewArticles = (gcnew System::Windows::Forms::DataGridView());
			this->lblError = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(3, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"AFFICHAGE DES ARTICLES";
			// 
			// TBidArticle
			// 
			this->TBidArticle->Location = System::Drawing::Point(237, 32);
			this->TBidArticle->Name = L"TBidArticle";
			this->TBidArticle->Size = System::Drawing::Size(100, 22);
			this->TBidArticle->TabIndex = 4;
			// 
			// afficherArticleId
			// 
			this->afficherArticleId->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->afficherArticleId->Location = System::Drawing::Point(9, 29);
			this->afficherArticleId->Name = L"afficherArticleId";
			this->afficherArticleId->Size = System::Drawing::Size(178, 30);
			this->afficherArticleId->TabIndex = 5;
			this->afficherArticleId->Text = L"Afficher un article par id";
			this->afficherArticleId->UseVisualStyleBackColor = true;
			this->afficherArticleId->Click += gcnew System::EventHandler(this, &UC_Articles_Afficher::afficherArticleId_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(207, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"id :";
			// 
			// afficherTousArticles
			// 
			this->afficherTousArticles->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->afficherTousArticles->Location = System::Drawing::Point(582, 30);
			this->afficherTousArticles->Name = L"afficherTousArticles";
			this->afficherTousArticles->Size = System::Drawing::Size(191, 30);
			this->afficherTousArticles->TabIndex = 7;
			this->afficherTousArticles->Text = L"Afficher tous les articles";
			this->afficherTousArticles->UseVisualStyleBackColor = true;
			this->afficherTousArticles->Click += gcnew System::EventHandler(this, &UC_Articles_Afficher::afficherTousArticles_Click);
			// 
			// dataGridViewArticles
			// 
			this->dataGridViewArticles->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewArticles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArticles->Location = System::Drawing::Point(6, 65);
			this->dataGridViewArticles->Name = L"dataGridViewArticles";
			this->dataGridViewArticles->RowHeadersWidth = 51;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewArticles->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewArticles->RowTemplate->Height = 24;
			this->dataGridViewArticles->Size = System::Drawing::Size(768, 295);
			this->dataGridViewArticles->TabIndex = 9;
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(353, 36);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 16);
			this->lblError->TabIndex = 10;
			this->lblError->Text = L"label3";
			// 
			// UC_Articles_Afficher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->dataGridViewArticles);
			this->Controls->Add(this->afficherTousArticles);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->afficherArticleId);
			this->Controls->Add(this->TBidArticle);
			this->Controls->Add(this->label1);
			this->Name = L"UC_Articles_Afficher";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Articles_Afficher::UC_Articles_Afficher_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void afficherArticleId_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->TBidArticle->Text != "") {
			int id = System::Convert::ToUInt32(this->TBidArticle->Text);
			if (id > 0) {
				this->lblError->Text = "";
				this->dataGridViewArticles->Refresh();
				this->dataSetArticle = this->Services->afficherArticle(id, "articlesID");
				this->dataGridViewArticles->DataSource = this->dataSetArticle;
				this->dataGridViewArticles->DataMember = "articlesID";
			}
			else {
				this->lblError->Text = "Id invalide";
			}
		}
		else {
			this->lblError->Text = "Id invalide";
		}
	}
	private: System::Void UC_Articles_Afficher_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}
	private: System::Void afficherTousArticles_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TBidArticle->Text = "";
		this->dataGridViewArticles->Refresh();
		this->dataSetArticle = this->Services->afficherTousArticles("articlesALL");
		this->dataGridViewArticles->DataSource = this->dataSetArticle;
		this->dataGridViewArticles->DataMember = "articlesALL";
	}
};
}
