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
	/// Summary for UC_Articles_Ajouter
	/// </summary>
	public ref class UC_Articles_Ajouter : public System::Windows::Forms::UserControl
	{
	public:
		UC_Articles_Ajouter(void)
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
		~UC_Articles_Ajouter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbNomArticle;
	private: System::Windows::Forms::TextBox^ tbPrixAchatArticle;


	private: System::Windows::Forms::TextBox^ tbQuantiteArticle;

	private: System::Windows::Forms::TextBox^ tbRefArticle;
	private: System::Windows::Forms::TextBox^ tbCouleurArticle;


	private: System::Windows::Forms::TextBox^ tbCategorieArticle;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnAjouterArticle;

	private: System::Windows::Forms::Label^ lblError;
	private: CL_Services^ Services;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbPrixAchatArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbQuantiteArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbRefArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbCouleurArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbCategorieArticle = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->btnAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(171, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"AJOUTER UN ARTICLE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(6, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Catégorie :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(6, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Couleur :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(288, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Référence :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(288, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Quantité :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(288, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Prix achat :";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->tbPrixAchatArticle);
			this->panel1->Controls->Add(this->tbQuantiteArticle);
			this->panel1->Controls->Add(this->tbRefArticle);
			this->panel1->Controls->Add(this->tbCouleurArticle);
			this->panel1->Controls->Add(this->tbCategorieArticle);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->tbNomArticle);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(6, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(569, 155);
			this->panel1->TabIndex = 8;
			// 
			// tbPrixAchatArticle
			// 
			this->tbPrixAchatArticle->Location = System::Drawing::Point(370, 110);
			this->tbPrixAchatArticle->Name = L"tbPrixAchatArticle";
			this->tbPrixAchatArticle->Size = System::Drawing::Size(182, 22);
			this->tbPrixAchatArticle->TabIndex = 14;
			this->tbPrixAchatArticle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbQuantiteArticle
			// 
			this->tbQuantiteArticle->Location = System::Drawing::Point(370, 74);
			this->tbQuantiteArticle->Name = L"tbQuantiteArticle";
			this->tbQuantiteArticle->Size = System::Drawing::Size(182, 22);
			this->tbQuantiteArticle->TabIndex = 13;
			this->tbQuantiteArticle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbRefArticle
			// 
			this->tbRefArticle->Location = System::Drawing::Point(370, 40);
			this->tbRefArticle->Name = L"tbRefArticle";
			this->tbRefArticle->Size = System::Drawing::Size(182, 22);
			this->tbRefArticle->TabIndex = 12;
			this->tbRefArticle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbCouleurArticle
			// 
			this->tbCouleurArticle->Location = System::Drawing::Point(84, 113);
			this->tbCouleurArticle->Name = L"tbCouleurArticle";
			this->tbCouleurArticle->Size = System::Drawing::Size(182, 22);
			this->tbCouleurArticle->TabIndex = 11;
			this->tbCouleurArticle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbCategorieArticle
			// 
			this->tbCategorieArticle->Location = System::Drawing::Point(84, 77);
			this->tbCategorieArticle->Name = L"tbCategorieArticle";
			this->tbCategorieArticle->Size = System::Drawing::Size(182, 22);
			this->tbCategorieArticle->TabIndex = 10;
			this->tbCategorieArticle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(6, 6);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(223, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"FEUILLE DE CREATION D\'ARTICLES";
			// 
			// tbNomArticle
			// 
			this->tbNomArticle->Location = System::Drawing::Point(84, 43);
			this->tbNomArticle->Name = L"tbNomArticle";
			this->tbNomArticle->Size = System::Drawing::Size(182, 22);
			this->tbNomArticle->TabIndex = 8;
			this->tbNomArticle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnAjouterArticle
			// 
			this->btnAjouterArticle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAjouterArticle->Location = System::Drawing::Point(618, 80);
			this->btnAjouterArticle->Name = L"btnAjouterArticle";
			this->btnAjouterArticle->Size = System::Drawing::Size(127, 83);
			this->btnAjouterArticle->TabIndex = 9;
			this->btnAjouterArticle->Text = L"Ajouter";
			this->btnAjouterArticle->UseVisualStyleBackColor = true;
			this->btnAjouterArticle->Click += gcnew System::EventHandler(this, &UC_Articles_Ajouter::btnAjouterArticle_Click);
			// 
			// lblError
			// 
			this->lblError->AutoEllipsis = true;
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(8, 203);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 16);
			this->lblError->TabIndex = 10;
			this->lblError->Text = L"label9";
			// 
			// UC_Articles_Ajouter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->btnAjouterArticle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"UC_Articles_Ajouter";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Articles_Ajouter::UC_Articles_Ajouter_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbNomArticle->Text == "" || this->tbCategorieArticle->Text == "" || this->tbCouleurArticle->Text == "" || this->tbRefArticle->Text == "" || this->tbPrixAchatArticle->Text == "" || this->tbQuantiteArticle->Text == "") {
			this->lblError->Text = "Veuillez remplir correctement les informations relatives à l'article.";
		}
		else {
			this->Services->ajouterArticle(this->tbNomArticle->Text, this->tbCategorieArticle->Text, this->tbCouleurArticle->Text, this->tbRefArticle->Text, System::Convert::ToUInt32(this->tbQuantiteArticle->Text), System::Convert::ToDouble(this->tbPrixAchatArticle->Text));
			this->lblError->Text = "Article ajouté avec succès.";
			this->tbCategorieArticle->Text = "";
			this->tbCouleurArticle->Text = "";
			this->tbNomArticle->Text = "";
			this->tbPrixAchatArticle->Text = "";
			this->tbQuantiteArticle->Text = "";
			this->tbRefArticle->Text = "";
		}
	}
	private: System::Void UC_Articles_Ajouter_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}
};
}
