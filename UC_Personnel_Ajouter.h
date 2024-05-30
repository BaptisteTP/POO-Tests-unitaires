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
	/// Summary for UC_Personnel_Ajouter
	/// </summary>
	public ref class UC_Personnel_Ajouter : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Ajouter(void)
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
		~UC_Personnel_Ajouter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAjouterEmployes;
	private: System::Windows::Forms::Button^ button1;
	private: CL_Services^ Services;
	private: System::Windows::Forms::Label^ Nom;

	private: System::Windows::Forms::Label^ Prenom;
	private: System::Windows::Forms::Label^ Mail;
	private: System::Windows::Forms::TextBox^ tbNom;
	private: System::Windows::Forms::TextBox^ tbPrenom;
	private: System::Windows::Forms::TextBox^ tbMail;
	private: System::Windows::Forms::TextBox^ tbTel;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbIdSup;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateEmbauche;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbComplementAdr;

	private: System::Windows::Forms::TextBox^ tbNomRue;

	private: System::Windows::Forms::TextBox^ tbNumRue;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ NomRue;
	private: System::Windows::Forms::Label^ numero;
	private: System::Windows::Forms::TextBox^ tbPays;



	private: System::Windows::Forms::TextBox^ tbVille;


	private: System::Windows::Forms::TextBox^ tbCodePostal;



	private: System::Windows::Forms::Label^ pays;
	private: System::Windows::Forms::Label^ Comp;
	private: System::Windows::Forms::Label^ label9;
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
			this->lblAjouterEmployes = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Nom = (gcnew System::Windows::Forms::Label());
			this->Prenom = (gcnew System::Windows::Forms::Label());
			this->Mail = (gcnew System::Windows::Forms::Label());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->tbPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbMail = (gcnew System::Windows::Forms::TextBox());
			this->tbTel = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbIdSup = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbComplementAdr = (gcnew System::Windows::Forms::TextBox());
			this->tbNomRue = (gcnew System::Windows::Forms::TextBox());
			this->tbNumRue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NomRue = (gcnew System::Windows::Forms::Label());
			this->numero = (gcnew System::Windows::Forms::Label());
			this->tbPays = (gcnew System::Windows::Forms::TextBox());
			this->tbVille = (gcnew System::Windows::Forms::TextBox());
			this->tbCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->pays = (gcnew System::Windows::Forms::Label());
			this->Comp = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblAjouterEmployes
			// 
			this->lblAjouterEmployes->AutoSize = true;
			this->lblAjouterEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblAjouterEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAjouterEmployes->Location = System::Drawing::Point(3, 5);
			this->lblAjouterEmployes->Name = L"lblAjouterEmployes";
			this->lblAjouterEmployes->Size = System::Drawing::Size(153, 16);
			this->lblAjouterEmployes->TabIndex = 2;
			this->lblAjouterEmployes->Text = L"AJOUTER EMPLOYE";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(327, 297);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Personnel_Ajouter::button1_Click);
			// 
			// Nom
			// 
			this->Nom->AutoSize = true;
			this->Nom->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Nom->Location = System::Drawing::Point(14, 56);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(42, 16);
			this->Nom->TabIndex = 4;
			this->Nom->Text = L"Nom :";
			// 
			// Prenom
			// 
			this->Prenom->AutoSize = true;
			this->Prenom->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Prenom->Location = System::Drawing::Point(14, 84);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(60, 16);
			this->Prenom->TabIndex = 5;
			this->Prenom->Text = L"Prénom :";
			// 
			// Mail
			// 
			this->Mail->AutoSize = true;
			this->Mail->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mail->Location = System::Drawing::Point(14, 111);
			this->Mail->Name = L"Mail";
			this->Mail->Size = System::Drawing::Size(41, 16);
			this->Mail->TabIndex = 6;
			this->Mail->Text = L"Mail : ";
			// 
			// tbNom
			// 
			this->tbNom->Location = System::Drawing::Point(62, 53);
			this->tbNom->Name = L"tbNom";
			this->tbNom->Size = System::Drawing::Size(293, 22);
			this->tbNom->TabIndex = 7;
			// 
			// tbPrenom
			// 
			this->tbPrenom->Location = System::Drawing::Point(80, 81);
			this->tbPrenom->Name = L"tbPrenom";
			this->tbPrenom->Size = System::Drawing::Size(275, 22);
			this->tbPrenom->TabIndex = 8;
			// 
			// tbMail
			// 
			this->tbMail->Location = System::Drawing::Point(56, 108);
			this->tbMail->Name = L"tbMail";
			this->tbMail->Size = System::Drawing::Size(299, 22);
			this->tbMail->TabIndex = 9;
			// 
			// tbTel
			// 
			this->tbTel->Location = System::Drawing::Point(50, 136);
			this->tbTel->Name = L"tbTel";
			this->tbTel->Size = System::Drawing::Size(305, 22);
			this->tbTel->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(14, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Tel : ";
			// 
			// tbIdSup
			// 
			this->tbIdSup->Location = System::Drawing::Point(112, 164);
			this->tbIdSup->Name = L"tbIdSup";
			this->tbIdSup->Size = System::Drawing::Size(243, 22);
			this->tbIdSup->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(14, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"IDSupérieur :";
			this->label2->Click += gcnew System::EventHandler(this, &UC_Personnel_Ajouter::label2_Click);
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->Location = System::Drawing::Point(130, 192);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(225, 22);
			this->dateEmbauche->TabIndex = 14;
			this->dateEmbauche->Value = System::DateTime(2023, 12, 7, 14, 16, 8, 0);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(14, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Date Embauche :";
			// 
			// tbComplementAdr
			// 
			this->tbComplementAdr->Location = System::Drawing::Point(544, 108);
			this->tbComplementAdr->Name = L"tbComplementAdr";
			this->tbComplementAdr->Size = System::Drawing::Size(193, 22);
			this->tbComplementAdr->TabIndex = 21;
			// 
			// tbNomRue
			// 
			this->tbNomRue->Location = System::Drawing::Point(508, 81);
			this->tbNomRue->Name = L"tbNomRue";
			this->tbNomRue->Size = System::Drawing::Size(229, 22);
			this->tbNomRue->TabIndex = 20;
			// 
			// tbNumRue
			// 
			this->tbNumRue->Location = System::Drawing::Point(463, 53);
			this->tbNumRue->Name = L"tbNumRue";
			this->tbNumRue->Size = System::Drawing::Size(274, 22);
			this->tbNumRue->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(396, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Code Postal : ";
			// 
			// NomRue
			// 
			this->NomRue->AutoSize = true;
			this->NomRue->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NomRue->Location = System::Drawing::Point(396, 84);
			this->NomRue->Name = L"NomRue";
			this->NomRue->Size = System::Drawing::Size(106, 16);
			this->NomRue->TabIndex = 17;
			this->NomRue->Text = L"Nom de la Rue : ";
			this->NomRue->Click += gcnew System::EventHandler(this, &UC_Personnel_Ajouter::label5_Click);
			// 
			// numero
			// 
			this->numero->AutoSize = true;
			this->numero->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->numero->Location = System::Drawing::Point(396, 56);
			this->numero->Name = L"numero";
			this->numero->Size = System::Drawing::Size(61, 16);
			this->numero->TabIndex = 16;
			this->numero->Text = L"Numero :";
			// 
			// tbPays
			// 
			this->tbPays->Location = System::Drawing::Point(449, 191);
			this->tbPays->Name = L"tbPays";
			this->tbPays->Size = System::Drawing::Size(288, 22);
			this->tbPays->TabIndex = 27;
			// 
			// tbVille
			// 
			this->tbVille->Location = System::Drawing::Point(449, 164);
			this->tbVille->Name = L"tbVille";
			this->tbVille->Size = System::Drawing::Size(288, 22);
			this->tbVille->TabIndex = 26;
			// 
			// tbCodePostal
			// 
			this->tbCodePostal->Location = System::Drawing::Point(492, 136);
			this->tbCodePostal->Name = L"tbCodePostal";
			this->tbCodePostal->Size = System::Drawing::Size(245, 22);
			this->tbCodePostal->TabIndex = 25;
			// 
			// pays
			// 
			this->pays->AutoSize = true;
			this->pays->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pays->Location = System::Drawing::Point(396, 194);
			this->pays->Name = L"pays";
			this->pays->Size = System::Drawing::Size(47, 16);
			this->pays->TabIndex = 24;
			this->pays->Text = L"Pays : ";
			// 
			// Comp
			// 
			this->Comp->AutoSize = true;
			this->Comp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Comp->Location = System::Drawing::Point(396, 111);
			this->Comp->Name = L"Comp";
			this->Comp->Size = System::Drawing::Size(142, 16);
			this->Comp->TabIndex = 23;
			this->Comp->Text = L"Complément adresse :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(396, 167);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 16);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Ville :";
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(14, 233);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 16);
			this->lblError->TabIndex = 28;
			this->lblError->Text = L"label5";
			// 
			// UC_Personnel_Ajouter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->tbPays);
			this->Controls->Add(this->tbVille);
			this->Controls->Add(this->tbCodePostal);
			this->Controls->Add(this->pays);
			this->Controls->Add(this->Comp);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tbComplementAdr);
			this->Controls->Add(this->tbNomRue);
			this->Controls->Add(this->tbNumRue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NomRue);
			this->Controls->Add(this->numero);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateEmbauche);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbIdSup);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbTel);
			this->Controls->Add(this->tbMail);
			this->Controls->Add(this->tbPrenom);
			this->Controls->Add(this->tbNom);
			this->Controls->Add(this->Mail);
			this->Controls->Add(this->Prenom);
			this->Controls->Add(this->Nom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblAjouterEmployes);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UC_Personnel_Ajouter";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Personnel_Ajouter::UC_Personnel_Ajouter_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean isGoodToAdd() {
		if (this->tbCodePostal->Text == "" && this->tbComplementAdr->Text == "" && this->tbIdSup->Text == "" && this->tbMail->Text == "" && this->tbNom->Text == "" && this->tbNumRue->Text == "" && this->tbNomRue->Text == "" && this->tbPays->Text == "" && this->tbPrenom->Text == "" && this->tbTel->Text == "" && this->tbVille->Text == "") {
			return 0;
		}
		else {
			return 1;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGoodToAdd()) {
			System::Boolean result;
			result = this->Services->ajouterPersonne(this->tbNom->Text, this->tbPrenom->Text, this->tbNomRue->Text, this->dateEmbauche->Text, System::Convert::ToUInt32(this->tbIdSup->Text), this->tbMail->Text, this->tbTel->Text);
			if (result == 1) {
				this->lblError->Text = "Le personnel a été ajouté.";
				this->tbNom->Text = "";
				this->tbPrenom->Text = "";
				this->tbCodePostal->Text = "";
				this->tbComplementAdr->Text = "";
				this->tbIdSup->Text = "";
				this->tbMail->Text = "";
				this->tbNomRue->Text = "";
				this->tbNumRue->Text = "";
				this->tbPays->Text = "";
				this->tbTel->Text = "";
				this->tbVille->Text = "";
			}
			else {
				this->lblError->Text = "Ce personnel existe déjà.";
			}
		}
		else {
			this->lblError->Text = "Veuillez remplir correctement la fiche personnel.";
		}
	}
	private: System::Void UC_Personnel_Ajouter_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
