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
	/// Summary for UC_Commande_Supprimer
	/// </summary>
	public ref class UC_Commande_Supprimer : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commande_Supprimer(void)
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
		~UC_Commande_Supprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbIdCommande;

	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbIdCommande = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(2, 4);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"SUPPRIMER UNE COMMANDE";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(231, 144);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 53);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Commande_Supprimer::button1_Click);
			// 
			// tbIdCommande
			// 
			this->tbIdCommande->Location = System::Drawing::Point(301, 70);
			this->tbIdCommande->Margin = System::Windows::Forms::Padding(2);
			this->tbIdCommande->Name = L"tbIdCommande";
			this->tbIdCommande->Size = System::Drawing::Size(79, 20);
			this->tbIdCommande->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(2, 65);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(295, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Id de la commande à supprimer :";
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(4, 108);
			this->lblError->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(35, 13);
			this->lblError->TabIndex = 9;
			this->lblError->Text = L"label2";
			// 
			// UC_Commande_Supprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbIdCommande);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UC_Commande_Supprimer";
			this->Size = System::Drawing::Size(583, 295);
			this->Load += gcnew System::EventHandler(this, &UC_Commande_Supprimer::UC_Commande_Supprimer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UC_Commande_Supprimer_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbIdCommande->Text != "") {
			this->Services->supprimerCommande(System::Convert::ToUInt32(this->tbIdCommande->Text));
			this->lblError->Text = "Cette commande a été supprimé.";
			this->tbIdCommande->Text = "";
		}
		else {
			this->lblError->Text = "Veuillez entre un id personnel valide.";
		}
	}
};
}
