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
	/// Summary for UC_Personnel_Supprimer
	/// </summary>
	public ref class UC_Personnel_Supprimer : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Supprimer(void)
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
		~UC_Personnel_Supprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblSupprimerEmployes;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbIdPersonnel;

	private: System::Windows::Forms::Button^ button1;
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
			this->lblSupprimerEmployes = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbIdPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblSupprimerEmployes
			// 
			this->lblSupprimerEmployes->AutoSize = true;
			this->lblSupprimerEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			this->lblSupprimerEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblSupprimerEmployes->Location = System::Drawing::Point(3, 6);
			this->lblSupprimerEmployes->Name = L"lblSupprimerEmployes";
			this->lblSupprimerEmployes->Size = System::Drawing::Size(181, 16);
			this->lblSupprimerEmployes->TabIndex = 2;
			this->lblSupprimerEmployes->Text = L"SUPPRIMER EMPLOYES";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(13, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Id du personnel à supprimer :";
			// 
			// tbIdPersonnel
			// 
			this->tbIdPersonnel->Location = System::Drawing::Point(360, 83);
			this->tbIdPersonnel->Name = L"tbIdPersonnel";
			this->tbIdPersonnel->Size = System::Drawing::Size(104, 22);
			this->tbIdPersonnel->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(319, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 65);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Personnel_Supprimer::button1_Click);
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(18, 137);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 16);
			this->lblError->TabIndex = 6;
			this->lblError->Text = L"label2";
			// 
			// UC_Personnel_Supprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbIdPersonnel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblSupprimerEmployes);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UC_Personnel_Supprimer";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Personnel_Supprimer::UC_Personnel_Supprimer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UC_Personnel_Supprimer_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbIdPersonnel->Text != "") {
			this->Services->supprimerPersonne(System::Convert::ToUInt32(this->tbIdPersonnel->Text));
			this->lblError->Text = "Ce personnel a été supprimé.";
			this->tbIdPersonnel->Text = "";
		}
		else {
			this->lblError->Text = "Veuillez entre un id personnel valide.";
		}
	}
};
}
