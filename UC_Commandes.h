#pragma once
#include "UC_Commande_Afficher.h"
#include "UC_Commande_Ajouter.h"
#include "UC_Commande_Default.h"
#include "UC_Commande_Modifier.h"
#include "UC_Commande_Supprimer.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Commandes
	/// </summary>
	public ref class UC_Commandes : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commandes(void)
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
		~UC_Commandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelContainerCommande;
	protected:

	protected:

	private: System::Windows::Forms::Button^ ajouterCommandeButton;
	private: System::Windows::Forms::Button^ afficherCommandeButton;
	private: System::Windows::Forms::Button^ modifierCommandeButton;
	private: System::Windows::Forms::Button^ supprimerCommandeButton;
	protected:





	protected:

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
			this->panelContainerCommande = (gcnew System::Windows::Forms::Panel());
			this->ajouterCommandeButton = (gcnew System::Windows::Forms::Button());
			this->afficherCommandeButton = (gcnew System::Windows::Forms::Button());
			this->modifierCommandeButton = (gcnew System::Windows::Forms::Button());
			this->supprimerCommandeButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panelContainerCommande
			// 
			this->panelContainerCommande->Location = System::Drawing::Point(194, 0);
			this->panelContainerCommande->Name = L"panelContainerCommande";
			this->panelContainerCommande->Size = System::Drawing::Size(794, 363);
			this->panelContainerCommande->TabIndex = 0;
			// 
			// ajouterCommandeButton
			// 
			this->ajouterCommandeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ajouterCommandeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ajouterCommandeButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ajouterCommandeButton->Location = System::Drawing::Point(17, 59);
			this->ajouterCommandeButton->Name = L"ajouterCommandeButton";
			this->ajouterCommandeButton->Size = System::Drawing::Size(155, 55);
			this->ajouterCommandeButton->TabIndex = 1;
			this->ajouterCommandeButton->Text = L"Ajouter";
			this->ajouterCommandeButton->UseVisualStyleBackColor = true;
			this->ajouterCommandeButton->Click += gcnew System::EventHandler(this, &UC_Commandes::ajouterCommandeButton_Click);
			// 
			// afficherCommandeButton
			// 
			this->afficherCommandeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->afficherCommandeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->afficherCommandeButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->afficherCommandeButton->Location = System::Drawing::Point(17, 120);
			this->afficherCommandeButton->Name = L"afficherCommandeButton";
			this->afficherCommandeButton->Size = System::Drawing::Size(155, 55);
			this->afficherCommandeButton->TabIndex = 2;
			this->afficherCommandeButton->Text = L"Afficher";
			this->afficherCommandeButton->UseVisualStyleBackColor = true;
			this->afficherCommandeButton->Click += gcnew System::EventHandler(this, &UC_Commandes::afficherCommandeButton_Click);
			// 
			// modifierCommandeButton
			// 
			this->modifierCommandeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modifierCommandeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifierCommandeButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->modifierCommandeButton->Location = System::Drawing::Point(17, 181);
			this->modifierCommandeButton->Name = L"modifierCommandeButton";
			this->modifierCommandeButton->Size = System::Drawing::Size(155, 55);
			this->modifierCommandeButton->TabIndex = 3;
			this->modifierCommandeButton->Text = L"Modifier";
			this->modifierCommandeButton->UseVisualStyleBackColor = true;
			this->modifierCommandeButton->Click += gcnew System::EventHandler(this, &UC_Commandes::modifierCommandeButton_Click);
			// 
			// supprimerCommandeButton
			// 
			this->supprimerCommandeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->supprimerCommandeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supprimerCommandeButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->supprimerCommandeButton->Location = System::Drawing::Point(17, 242);
			this->supprimerCommandeButton->Name = L"supprimerCommandeButton";
			this->supprimerCommandeButton->Size = System::Drawing::Size(155, 55);
			this->supprimerCommandeButton->TabIndex = 4;
			this->supprimerCommandeButton->Text = L"Supprimer";
			this->supprimerCommandeButton->UseVisualStyleBackColor = true;
			this->supprimerCommandeButton->Click += gcnew System::EventHandler(this, &UC_Commandes::supprimerCommandeButton_Click);
			// 
			// UC_Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->supprimerCommandeButton);
			this->Controls->Add(this->modifierCommandeButton);
			this->Controls->Add(this->afficherCommandeButton);
			this->Controls->Add(this->ajouterCommandeButton);
			this->Controls->Add(this->panelContainerCommande);
			this->Name = L"UC_Commandes";
			this->Size = System::Drawing::Size(988, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Commandes::UC_Commandes_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void addUserControlCommandes(System::Windows::Forms::UserControl^ userControlCommande) {

		userControlCommande->Dock = System::Windows::Forms::DockStyle::Fill;
		panelContainerCommande->Controls->Clear();
		panelContainerCommande->Controls->Add(userControlCommande);
		userControlCommande->BringToFront();
	}
	private: System::Void UC_Commandes_Load(System::Object^ sender, System::EventArgs^ e) {
		UC_Commande_Default^ uc = gcnew UC_Commande_Default();
		addUserControlCommandes(uc);
	}
	private: System::Void ajouterCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Commande_Ajouter^ uc = gcnew UC_Commande_Ajouter();
		addUserControlCommandes(uc);
	}
	private: System::Void afficherCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Commande_Afficher^ uc = gcnew UC_Commande_Afficher();
		addUserControlCommandes(uc);
	}
	private: System::Void modifierCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Commande_Modifier^ uc = gcnew UC_Commande_Modifier();
		addUserControlCommandes(uc);
	}
	private: System::Void supprimerCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Commande_Supprimer^ uc = gcnew UC_Commande_Supprimer();
		addUserControlCommandes(uc);
	}
};
}
