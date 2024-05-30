#pragma once
#include "UC_Clients_Afficher.h"
#include "UC_Clients_Ajouter.h"
#include "UC_Clients_Modifier.h"
#include "UC_Clients_Supprimer.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Client
	/// </summary>
	public ref class UC_Client : public System::Windows::Forms::UserControl
	{
	public:
		UC_Client(void)
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
		~UC_Client()
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
	private: System::Windows::Forms::Button^ Afficher;
	private: System::Windows::Forms::Panel^ panelContainerClients;



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
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Afficher = (gcnew System::Windows::Forms::Button());
			this->panelContainerClients = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Supprimer
			// 
			this->Supprimer->BackColor = System::Drawing::Color::Red;
			this->Supprimer->FlatAppearance->BorderSize = 0;
			this->Supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Supprimer->Location = System::Drawing::Point(30, 252);
			this->Supprimer->Margin = System::Windows::Forms::Padding(4);
			this->Supprimer->MinimumSize = System::Drawing::Size(133, 62);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(133, 62);
			this->Supprimer->TabIndex = 7;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = false;
			this->Supprimer->Click += gcnew System::EventHandler(this, &UC_Client::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->BackColor = System::Drawing::Color::DodgerBlue;
			this->Modifier->FlatAppearance->BorderSize = 0;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(30, 182);
			this->Modifier->Margin = System::Windows::Forms::Padding(4);
			this->Modifier->MinimumSize = System::Drawing::Size(133, 62);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(133, 62);
			this->Modifier->TabIndex = 6;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = false;
			this->Modifier->Click += gcnew System::EventHandler(this, &UC_Client::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::LimeGreen;
			this->Ajouter->FlatAppearance->BorderSize = 0;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(30, 42);
			this->Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Ajouter->MinimumSize = System::Drawing::Size(133, 62);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(133, 62);
			this->Ajouter->TabIndex = 5;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &UC_Client::Ajouter_Click);
			// 
			// Afficher
			// 
			this->Afficher->BackColor = System::Drawing::Color::Yellow;
			this->Afficher->FlatAppearance->BorderSize = 0;
			this->Afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Afficher->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Afficher->Location = System::Drawing::Point(30, 112);
			this->Afficher->Margin = System::Windows::Forms::Padding(4);
			this->Afficher->MinimumSize = System::Drawing::Size(133, 62);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(133, 62);
			this->Afficher->TabIndex = 8;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = false;
			this->Afficher->Click += gcnew System::EventHandler(this, &UC_Client::Afficher_Click);
			// 
			// panelContainerClients
			// 
			this->panelContainerClients->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelContainerClients->Location = System::Drawing::Point(231, 0);
			this->panelContainerClients->Name = L"panelContainerClients";
			this->panelContainerClients->Size = System::Drawing::Size(777, 363);
			this->panelContainerClients->TabIndex = 9;
			// 
			// UC_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->panelContainerClients);
			this->Controls->Add(this->Afficher);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Name = L"UC_Client";
			this->Size = System::Drawing::Size(988, 363);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addUserControlClients(System::Windows::Forms::UserControl^ userControlClients) {

		userControlClients->Dock = System::Windows::Forms::DockStyle::Fill;
		panelContainerClients->Controls->Clear();
		panelContainerClients->Controls->Add(userControlClients);
		userControlClients->BringToFront();
	}

	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Clients_Ajouter^ uc = gcnew UC_Clients_Ajouter();
		addUserControlClients(uc);
	}

	private: System::Void Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Clients_Afficher^ uc = gcnew UC_Clients_Afficher();
		addUserControlClients(uc);
	}
	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Clients_Modifier^ uc = gcnew UC_Clients_Modifier();
		addUserControlClients(uc);
	}
	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Clients_Supprimer^ uc = gcnew UC_Clients_Supprimer();
		addUserControlClients(uc);
	}
};
}
