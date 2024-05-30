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
	/// Summary for UC_Clients_Ajouter
	/// </summary>
	public ref class UC_Clients_Ajouter : public System::Windows::Forms::UserControl
	{
	public:
		UC_Clients_Ajouter(void)
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
		~UC_Clients_Ajouter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblError;
	private: System::Windows::Forms::TextBox^ tbAdrsLivr;
	protected:











	private: System::Windows::Forms::Label^ numero;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateNaissance;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbTel;
	private: System::Windows::Forms::TextBox^ tbMail;
	private: System::Windows::Forms::TextBox^ tbPrenom;
	private: System::Windows::Forms::TextBox^ tbNom;
	private: System::Windows::Forms::Label^ Mail;
	private: System::Windows::Forms::Label^ Prenom;
	private: System::Windows::Forms::Label^ Nom;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblAjouterCLient;
	private: System::Windows::Forms::TextBox^ tbAdrsFact;
	private: System::Windows::Forms::Label^ label4;
	private: CL_Services^ Services;

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
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->tbAdrsLivr = (gcnew System::Windows::Forms::TextBox());
			this->numero = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbTel = (gcnew System::Windows::Forms::TextBox());
			this->tbMail = (gcnew System::Windows::Forms::TextBox());
			this->tbPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->Mail = (gcnew System::Windows::Forms::Label());
			this->Prenom = (gcnew System::Windows::Forms::Label());
			this->Nom = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblAjouterCLient = (gcnew System::Windows::Forms::Label());
			this->tbAdrsFact = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(32, 238);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 16);
			this->lblError->TabIndex = 55;
			this->lblError->Text = L"label5";
			// 
			// tbAdrsLivr
			// 
			this->tbAdrsLivr->Location = System::Drawing::Point(541, 58);
			this->tbAdrsLivr->Name = L"tbAdrsLivr";
			this->tbAdrsLivr->Size = System::Drawing::Size(214, 22);
			this->tbAdrsLivr->TabIndex = 46;
			// 
			// numero
			// 
			this->numero->AutoSize = true;
			this->numero->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->numero->Location = System::Drawing::Point(414, 61);
			this->numero->Name = L"numero";
			this->numero->Size = System::Drawing::Size(121, 16);
			this->numero->TabIndex = 43;
			this->numero->Text = L"Adresse Livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(32, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Date Naissance :";
			// 
			// dateNaissance
			// 
			this->dateNaissance->Location = System::Drawing::Point(148, 169);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(225, 22);
			this->dateNaissance->TabIndex = 41;
			this->dateNaissance->Value = System::DateTime(2023, 12, 7, 14, 16, 8, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(32, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Tel : ";
			// 
			// tbTel
			// 
			this->tbTel->Location = System::Drawing::Point(68, 141);
			this->tbTel->Name = L"tbTel";
			this->tbTel->Size = System::Drawing::Size(305, 22);
			this->tbTel->TabIndex = 37;
			// 
			// tbMail
			// 
			this->tbMail->Location = System::Drawing::Point(74, 113);
			this->tbMail->Name = L"tbMail";
			this->tbMail->Size = System::Drawing::Size(299, 22);
			this->tbMail->TabIndex = 36;
			// 
			// tbPrenom
			// 
			this->tbPrenom->Location = System::Drawing::Point(98, 86);
			this->tbPrenom->Name = L"tbPrenom";
			this->tbPrenom->Size = System::Drawing::Size(275, 22);
			this->tbPrenom->TabIndex = 35;
			// 
			// tbNom
			// 
			this->tbNom->Location = System::Drawing::Point(80, 58);
			this->tbNom->Name = L"tbNom";
			this->tbNom->Size = System::Drawing::Size(293, 22);
			this->tbNom->TabIndex = 34;
			// 
			// Mail
			// 
			this->Mail->AutoSize = true;
			this->Mail->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mail->Location = System::Drawing::Point(32, 116);
			this->Mail->Name = L"Mail";
			this->Mail->Size = System::Drawing::Size(41, 16);
			this->Mail->TabIndex = 33;
			this->Mail->Text = L"Mail : ";
			// 
			// Prenom
			// 
			this->Prenom->AutoSize = true;
			this->Prenom->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Prenom->Location = System::Drawing::Point(32, 89);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(60, 16);
			this->Prenom->TabIndex = 32;
			this->Prenom->Text = L"Prénom :";
			// 
			// Nom
			// 
			this->Nom->AutoSize = true;
			this->Nom->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Nom->Location = System::Drawing::Point(32, 61);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(42, 16);
			this->Nom->TabIndex = 31;
			this->Nom->Text = L"Nom :";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(345, 302);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 50);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Clients_Ajouter::button1_Click);
			// 
			// lblAjouterCLient
			// 
			this->lblAjouterCLient->AutoSize = true;
			this->lblAjouterCLient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblAjouterCLient->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAjouterCLient->Location = System::Drawing::Point(21, 10);
			this->lblAjouterCLient->Name = L"lblAjouterCLient";
			this->lblAjouterCLient->Size = System::Drawing::Size(135, 16);
			this->lblAjouterCLient->TabIndex = 29;
			this->lblAjouterCLient->Text = L"AJOUTER CLIENT";
			// 
			// tbAdrsFact
			// 
			this->tbAdrsFact->Location = System::Drawing::Point(553, 86);
			this->tbAdrsFact->Name = L"tbAdrsFact";
			this->tbAdrsFact->Size = System::Drawing::Size(202, 22);
			this->tbAdrsFact->TabIndex = 59;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(414, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 16);
			this->label4->TabIndex = 58;
			this->label4->Text = L"Adresse Facturation :";
			// 
			// UC_Clients_Ajouter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tbAdrsFact);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->tbAdrsLivr);
			this->Controls->Add(this->numero);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateNaissance);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbTel);
			this->Controls->Add(this->tbMail);
			this->Controls->Add(this->tbPrenom);
			this->Controls->Add(this->tbNom);
			this->Controls->Add(this->Mail);
			this->Controls->Add(this->Prenom);
			this->Controls->Add(this->Nom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblAjouterCLient);
			this->MaximumSize = System::Drawing::Size(777, 363);
			this->MinimumSize = System::Drawing::Size(777, 363);
			this->Name = L"UC_Clients_Ajouter";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Clients_Ajouter::UC_Clients_Ajouter_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean IsGoodToAdd() {
		if (this->tbAdrsFact->Text != "" && this->tbAdrsLivr->Text != "" && this->tbMail->Text != "" && this->tbNom->Text != "" && this->tbPrenom->Text != "" && this->tbTel->Text != "") {
			return 1;
		}
		else {
			return 0;
		}
	}

	private: System::Void UC_Clients_Ajouter_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (IsGoodToAdd()) {
			this->Services->ajouterClient(this->tbNom->Text, this->tbPrenom->Text, this->tbMail->Text, this->tbTel->Text, this->tbAdrsFact->Text, this->tbAdrsLivr->Text, this->dateNaissance->Text);
			this->lblError->Text = "Le client a bien été ajouté.";
			this->tbAdrsFact->Text = "";
			this->tbAdrsLivr->Text = "";
			this->tbMail->Text = "";
			this->tbNom->Text = "";
			this->tbPrenom->Text = "";
			this->tbTel->Text = "";
		}
		else {
			this->lblError->Text = "Veuillez correctement remplir la page client.";
		}
	}
};
}
