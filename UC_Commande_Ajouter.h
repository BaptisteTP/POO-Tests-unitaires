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
	/// Summary for UC_Commande_Ajouter
	/// </summary>
	public ref class UC_Commande_Ajouter : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commande_Ajouter(void)
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
		~UC_Commande_Ajouter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAjouterArticleCommande;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Espace;
	private: System::Windows::Forms::TextBox^ tbPrenomCliCommande;

	private: System::Windows::Forms::TextBox^ tbNomCliCommande;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateEmission;

	private: System::Windows::Forms::DateTimePicker^ dateLivraison;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DateTimePicker^ datePaiement;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DomainUpDown^ methodePaiement;

	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbnombreArticleCommande;

	private: System::Windows::Forms::TextBox^ tbrefArticleCommande;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnAjouterCommande;
	private: System::Windows::Forms::Label^ lblErrorAritcleCommande;
	private: System::Windows::Forms::Label^ lblErrorGeneral;

	private: System::String^ ArticleInCommand;
	private: int QuantiteArticleInCommand = -1;
	private: CL_Services^ Services;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAjouterArticleCommande = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbPrenomCliCommande = (gcnew System::Windows::Forms::TextBox());
			this->tbNomCliCommande = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Espace = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dateEmission = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->methodePaiement = (gcnew System::Windows::Forms::DomainUpDown());
			this->datePaiement = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lblErrorAritcleCommande = (gcnew System::Windows::Forms::Label());
			this->tbnombreArticleCommande = (gcnew System::Windows::Forms::TextBox());
			this->tbrefArticleCommande = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnAjouterCommande = (gcnew System::Windows::Forms::Button());
			this->lblErrorGeneral = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(7, 6);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"AJOUTER UNE COMMANDE :";
			// 
			// btnAjouterArticleCommande
			// 
			this->btnAjouterArticleCommande->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAjouterArticleCommande->FlatAppearance->BorderSize = 0;
			this->btnAjouterArticleCommande->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAjouterArticleCommande->Location = System::Drawing::Point(102, 70);
			this->btnAjouterArticleCommande->Margin = System::Windows::Forms::Padding(2);
			this->btnAjouterArticleCommande->Name = L"btnAjouterArticleCommande";
			this->btnAjouterArticleCommande->Size = System::Drawing::Size(86, 48);
			this->btnAjouterArticleCommande->TabIndex = 2;
			this->btnAjouterArticleCommande->Text = L"Ajouter article";
			this->btnAjouterArticleCommande->UseVisualStyleBackColor = true;
			this->btnAjouterArticleCommande->Click += gcnew System::EventHandler(this, &UC_Commande_Ajouter::AddCommand_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->tbPrenomCliCommande);
			this->panel1->Controls->Add(this->tbNomCliCommande);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Espace);
			this->panel1->Location = System::Drawing::Point(10, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 79);
			this->panel1->TabIndex = 3;
			// 
			// tbPrenomCliCommande
			// 
			this->tbPrenomCliCommande->Location = System::Drawing::Point(58, 51);
			this->tbPrenomCliCommande->Name = L"tbPrenomCliCommande";
			this->tbPrenomCliCommande->Size = System::Drawing::Size(100, 20);
			this->tbPrenomCliCommande->TabIndex = 4;
			// 
			// tbNomCliCommande
			// 
			this->tbNomCliCommande->Location = System::Drawing::Point(44, 24);
			this->tbNomCliCommande->Name = L"tbNomCliCommande";
			this->tbNomCliCommande->Size = System::Drawing::Size(114, 20);
			this->tbNomCliCommande->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(3, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(3, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom :";
			// 
			// Espace
			// 
			this->Espace->AutoSize = true;
			this->Espace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Espace->Location = System::Drawing::Point(3, 0);
			this->Espace->Name = L"Espace";
			this->Espace->Size = System::Drawing::Size(72, 13);
			this->Espace->TabIndex = 0;
			this->Espace->Text = L"Espace Client";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Controls->Add(this->dateEmission);
			this->panel2->Controls->Add(this->dateLivraison);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(203, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(368, 79);
			this->panel2->TabIndex = 4;
			// 
			// dateEmission
			// 
			this->dateEmission->Location = System::Drawing::Point(70, 47);
			this->dateEmission->Name = L"dateEmission";
			this->dateEmission->Size = System::Drawing::Size(200, 20);
			this->dateEmission->TabIndex = 8;
			// 
			// dateLivraison
			// 
			this->dateLivraison->Location = System::Drawing::Point(70, 21);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(200, 20);
			this->dateLivraison->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(6, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Emmision :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(6, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Livraison : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Dates ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->methodePaiement);
			this->panel3->Controls->Add(this->datePaiement);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(10, 129);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(174, 137);
			this->panel3->TabIndex = 5;
			// 
			// methodePaiement
			// 
			this->methodePaiement->Location = System::Drawing::Point(6, 46);
			this->methodePaiement->Name = L"methodePaiement";
			this->methodePaiement->Size = System::Drawing::Size(120, 20);
			this->methodePaiement->TabIndex = 6;
			this->methodePaiement->Text = L"domainUpDown1";
			// 
			// datePaiement
			// 
			this->datePaiement->Location = System::Drawing::Point(3, 98);
			this->datePaiement->Name = L"datePaiement";
			this->datePaiement->Size = System::Drawing::Size(168, 20);
			this->datePaiement->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(3, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Date paiment :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(3, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Méthode paiment :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Paiement";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Controls->Add(this->lblErrorAritcleCommande);
			this->panel4->Controls->Add(this->tbnombreArticleCommande);
			this->panel4->Controls->Add(this->tbrefArticleCommande);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->btnAjouterArticleCommande);
			this->panel4->Location = System::Drawing::Point(203, 129);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(270, 137);
			this->panel4->TabIndex = 6;
			// 
			// lblErrorAritcleCommande
			// 
			this->lblErrorAritcleCommande->AutoSize = true;
			this->lblErrorAritcleCommande->ForeColor = System::Drawing::Color::Red;
			this->lblErrorAritcleCommande->Location = System::Drawing::Point(6, 121);
			this->lblErrorAritcleCommande->Name = L"lblErrorAritcleCommande";
			this->lblErrorAritcleCommande->Size = System::Drawing::Size(35, 13);
			this->lblErrorAritcleCommande->TabIndex = 9;
			this->lblErrorAritcleCommande->Text = L"Erreur";
			// 
			// tbnombreArticleCommande
			// 
			this->tbnombreArticleCommande->Location = System::Drawing::Point(63, 44);
			this->tbnombreArticleCommande->Name = L"tbnombreArticleCommande";
			this->tbnombreArticleCommande->Size = System::Drawing::Size(190, 20);
			this->tbnombreArticleCommande->TabIndex = 12;
			// 
			// tbrefArticleCommande
			// 
			this->tbrefArticleCommande->Location = System::Drawing::Point(64, 21);
			this->tbrefArticleCommande->Name = L"tbrefArticleCommande";
			this->tbrefArticleCommande->Size = System::Drawing::Size(189, 20);
			this->tbrefArticleCommande->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(6, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Nombre : ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(6, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Ref article :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Articles";
			// 
			// btnAjouterCommande
			// 
			this->btnAjouterCommande->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAjouterCommande->FlatAppearance->BorderSize = 0;
			this->btnAjouterCommande->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAjouterCommande->Location = System::Drawing::Point(478, 129);
			this->btnAjouterCommande->Margin = System::Windows::Forms::Padding(2);
			this->btnAjouterCommande->Name = L"btnAjouterCommande";
			this->btnAjouterCommande->Size = System::Drawing::Size(93, 137);
			this->btnAjouterCommande->TabIndex = 13;
			this->btnAjouterCommande->Text = L"Ajouter commande";
			this->btnAjouterCommande->UseVisualStyleBackColor = true;
			this->btnAjouterCommande->Click += gcnew System::EventHandler(this, &UC_Commande_Ajouter::btnAjouterCommande_Click);
			// 
			// lblErrorGeneral
			// 
			this->lblErrorGeneral->AutoSize = true;
			this->lblErrorGeneral->ForeColor = System::Drawing::Color::Red;
			this->lblErrorGeneral->Location = System::Drawing::Point(13, 275);
			this->lblErrorGeneral->Name = L"lblErrorGeneral";
			this->lblErrorGeneral->Size = System::Drawing::Size(35, 13);
			this->lblErrorGeneral->TabIndex = 13;
			this->lblErrorGeneral->Text = L"Erreur";
			// 
			// UC_Commande_Ajouter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->lblErrorGeneral);
			this->Controls->Add(this->btnAjouterCommande);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UC_Commande_Ajouter";
			this->Size = System::Drawing::Size(583, 295);
			this->Load += gcnew System::EventHandler(this, &UC_Commande_Ajouter::UC_Commande_Ajouter_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean isOkAddCommand() {
		if (this->tbNomCliCommande->Text != "" && this->tbPrenomCliCommande->Text != "") {
			System::Boolean result = this->Services->doExistClient(this->tbNomCliCommande->Text, this->tbPrenomCliCommande->Text);
			if (result == 1 && this->QuantiteArticleInCommand != -1) {
				this->lblErrorGeneral->Text = "";
				return 1;
			}
			else {
				this->lblErrorGeneral->Text = "Le client entré n'existe pas. / Veuillez ajouter des articles dans la commande.";
				return 0;
			}
		}
		else {
			this->lblErrorGeneral->Text = "Veuillez entrer un client.";
			return 0;
		}
	}

	private: System::Boolean isOkAddArticle() {
		if (this->tbrefArticleCommande->Text != "" && this->tbnombreArticleCommande->Text != "") {
			return 1;
		}
		else {
			return 0;
		}
	}

	private: System::Void AddCommand_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isOkAddArticle()) {
			System::Boolean result = this->Services->CheckArticleCommande(this->tbrefArticleCommande->Text);
			if (result == 1) {
				ArticleInCommand = this->tbrefArticleCommande->Text;
				QuantiteArticleInCommand = System::Convert::ToInt32(this->tbnombreArticleCommande->Text);
				this->lblErrorAritcleCommande->Text = this->tbrefArticleCommande->Text + " ajouté à la commande.";
				this->tbrefArticleCommande->Text = "";
				this->tbnombreArticleCommande->Text = "";
			}
			else {
				this->lblErrorAritcleCommande->Text = "Cette article n'existe pas.";
			}
		}
		else {
			this->lblErrorAritcleCommande->Text = "Veuillez correctement remplir les champs.";
		}
	}
	private: System::Void btnAjouterCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isOkAddCommand()) {
			this->Services->ajouterCommande(this->tbNomCliCommande->Text, this->tbPrenomCliCommande->Text, this->methodePaiement->Text, this->dateEmission->Text, this->dateLivraison->Text, this->datePaiement->Text, ArticleInCommand, QuantiteArticleInCommand);
			this->lblErrorGeneral->Text = "La commande a bien été créee.";
		}
	}
	private: System::Void UC_Commande_Ajouter_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblErrorAritcleCommande->Text = "";
		this->lblErrorGeneral->Text = "";
		this->methodePaiement->Items->Add("Carte bleue");
		this->methodePaiement->Items->Add("Chèque");
		this->methodePaiement->Items->Add("Espèce");
		this->methodePaiement->Text = "Carte bleue";
	}
};
}
