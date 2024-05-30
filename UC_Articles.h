#pragma once
#include "UC_Articles_Afficher.h"
#include "UC_Articles_Ajouter.h"
#include "UC_Articles_Modifier.h"
#include "UC_Articles_Supprimer.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Articles
	/// </summary>
	public ref class UC_Articles : public System::Windows::Forms::UserControl
	{
	public:
		UC_Articles(void)
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
		~UC_Articles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Supprimer;
	protected:
	private: System::Windows::Forms::Button^ boutonAfficher;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Panel^ panelContainerArticles;

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
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->boutonAfficher = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->panelContainerArticles = (gcnew System::Windows::Forms::Panel());
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
			this->Supprimer->Margin = System::Windows::Forms::Padding(4);
			this->Supprimer->MinimumSize = System::Drawing::Size(133, 62);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(133, 62);
			this->Supprimer->TabIndex = 11;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = false;
			this->Supprimer->Click += gcnew System::EventHandler(this, &UC_Articles::Supprimer_Click);
			// 
			// boutonAfficher
			// 
			this->boutonAfficher->BackColor = System::Drawing::Color::Yellow;
			this->boutonAfficher->FlatAppearance->BorderSize = 0;
			this->boutonAfficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boutonAfficher->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boutonAfficher->Location = System::Drawing::Point(37, 111);
			this->boutonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->boutonAfficher->MinimumSize = System::Drawing::Size(133, 62);
			this->boutonAfficher->Name = L"boutonAfficher";
			this->boutonAfficher->Size = System::Drawing::Size(133, 62);
			this->boutonAfficher->TabIndex = 12;
			this->boutonAfficher->Text = L"Afficher";
			this->boutonAfficher->UseVisualStyleBackColor = false;
			this->boutonAfficher->Click += gcnew System::EventHandler(this, &UC_Articles::boutonAfficher_Click);
			// 
			// Modifier
			// 
			this->Modifier->BackColor = System::Drawing::Color::DodgerBlue;
			this->Modifier->FlatAppearance->BorderSize = 0;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(37, 180);
			this->Modifier->Margin = System::Windows::Forms::Padding(4);
			this->Modifier->MinimumSize = System::Drawing::Size(133, 62);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(133, 62);
			this->Modifier->TabIndex = 10;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = false;
			this->Modifier->Click += gcnew System::EventHandler(this, &UC_Articles::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::LimeGreen;
			this->Ajouter->FlatAppearance->BorderSize = 0;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(37, 42);
			this->Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Ajouter->MinimumSize = System::Drawing::Size(133, 62);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(133, 62);
			this->Ajouter->TabIndex = 9;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &UC_Articles::Ajouter_Click);
			// 
			// panelContainerArticles
			// 
			this->panelContainerArticles->BackColor = System::Drawing::Color::White;
			this->panelContainerArticles->Location = System::Drawing::Point(211, 0);
			this->panelContainerArticles->Name = L"panelContainerArticles";
			this->panelContainerArticles->Size = System::Drawing::Size(777, 363);
			this->panelContainerArticles->TabIndex = 13;
			// 
			// UC_Articles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->panelContainerArticles);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->boutonAfficher);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Name = L"UC_Articles";
			this->Size = System::Drawing::Size(988, 363);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addUserControlPersonnel(System::Windows::Forms::UserControl^ userControlArticle) {

		userControlArticle->Dock = System::Windows::Forms::DockStyle::Fill;
		panelContainerArticles->Controls->Clear();
		panelContainerArticles->Controls->Add(userControlArticle);
		userControlArticle->BringToFront();
	}
	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Articles_Ajouter^ uc = gcnew UC_Articles_Ajouter();
		addUserControlPersonnel(uc);

	}
	private: System::Void boutonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Articles_Afficher^ uc = gcnew UC_Articles_Afficher();
		addUserControlPersonnel(uc);
	}
	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Articles_Modifier^ uc = gcnew UC_Articles_Modifier();
		addUserControlPersonnel(uc);
	}
	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		UC_Articles_Supprimer^ uc = gcnew UC_Articles_Supprimer();
		addUserControlPersonnel(uc);
	}
};
}
