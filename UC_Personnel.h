#pragma once
#include "UC_Personnel_Afficher.h"
#include "UC_Personnel_Supprimer.h"
#include "UC_Personnel_Modifier.h"
#include "UC_Personnel_Ajouter.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Description r�sum�e de UC_Personnel
	/// </summary>
	public ref class UC_Personnel : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~UC_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Supprimer;
	protected:
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ boutonAfficher;

	private: System::Windows::Forms::Panel^ panelContainerPersonnel;
	private: CL_Services^ Services;




	protected:




	protected:




	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->boutonAfficher = (gcnew System::Windows::Forms::Button());
			this->panelContainerPersonnel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Supprimer
			// 
			this->Supprimer->BackColor = System::Drawing::Color::Red;
			this->Supprimer->FlatAppearance->BorderSize = 0;
			this->Supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Supprimer->Location = System::Drawing::Point(37, 249);
			this->Supprimer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Supprimer->MinimumSize = System::Drawing::Size(133, 62);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(133, 62);
			this->Supprimer->TabIndex = 7;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = false;
			this->Supprimer->Click += gcnew System::EventHandler(this, &UC_Personnel::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->BackColor = System::Drawing::Color::DodgerBlue;
			this->Modifier->FlatAppearance->BorderSize = 0;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(37, 180);
			this->Modifier->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Modifier->MinimumSize = System::Drawing::Size(133, 62);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(133, 62);
			this->Modifier->TabIndex = 6;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = false;
			this->Modifier->Click += gcnew System::EventHandler(this, &UC_Personnel::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::LimeGreen;
			this->Ajouter->FlatAppearance->BorderSize = 0;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(37, 42);
			this->Ajouter->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Ajouter->MinimumSize = System::Drawing::Size(133, 62);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(133, 62);
			this->Ajouter->TabIndex = 5;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &UC_Personnel::Ajouter_Click);
			// 
			// boutonAfficher
			// 
			this->boutonAfficher->BackColor = System::Drawing::Color::Yellow;
			this->boutonAfficher->FlatAppearance->BorderSize = 0;
			this->boutonAfficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boutonAfficher->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boutonAfficher->Location = System::Drawing::Point(37, 111);
			this->boutonAfficher->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boutonAfficher->MinimumSize = System::Drawing::Size(133, 62);
			this->boutonAfficher->Name = L"boutonAfficher";
			this->boutonAfficher->Size = System::Drawing::Size(133, 62);
			this->boutonAfficher->TabIndex = 8;
			this->boutonAfficher->Text = L"Afficher";
			this->boutonAfficher->UseVisualStyleBackColor = false;
			this->boutonAfficher->Click += gcnew System::EventHandler(this, &UC_Personnel::boutonAfficher_Click);
			// 
			// panelContainerPersonnel
			// 
			this->panelContainerPersonnel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelContainerPersonnel->Location = System::Drawing::Point(211, 0);
			this->panelContainerPersonnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelContainerPersonnel->Name = L"panelContainerPersonnel";
			this->panelContainerPersonnel->Size = System::Drawing::Size(777, 363);
			this->panelContainerPersonnel->TabIndex = 9;
			// 
			// UC_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->panelContainerPersonnel);
			this->Controls->Add(this->boutonAfficher);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UC_Personnel";
			this->Size = System::Drawing::Size(988, 363);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void addUserControlPersonnel(System::Windows::Forms::UserControl^ userControlPersonnel) {

		userControlPersonnel->Dock = System::Windows::Forms::DockStyle::Fill;
		panelContainerPersonnel->Controls->Clear();
		panelContainerPersonnel->Controls->Add(userControlPersonnel);
		userControlPersonnel->BringToFront();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Personnel_Supprimer^ uc = gcnew UC_Personnel_Supprimer();
		addUserControlPersonnel(uc);
	}
	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Personnel_Ajouter^ uc = gcnew UC_Personnel_Ajouter();
		addUserControlPersonnel(uc);
	}
	private: System::Void boutonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Personnel_Afficher^ uc = gcnew UC_Personnel_Afficher();
		addUserControlPersonnel(uc);

	}
	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Personnel_Modifier^ uc = gcnew UC_Personnel_Modifier();
		addUserControlPersonnel(uc);
	}
};
}
