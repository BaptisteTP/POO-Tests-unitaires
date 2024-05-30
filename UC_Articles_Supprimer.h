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
	/// Summary for UC_Articles_Supprimer
	/// </summary>
	public ref class UC_Articles_Supprimer : public System::Windows::Forms::UserControl
	{
	public:
		UC_Articles_Supprimer(void)
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
		~UC_Articles_Supprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbIdArticle;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbIdArticle = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(3, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SUPPRIMER UN ARTICLE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(3, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Id de l\'article à supprimer :";
			// 
			// tbIdArticle
			// 
			this->tbIdArticle->Location = System::Drawing::Point(285, 77);
			this->tbIdArticle->Name = L"tbIdArticle";
			this->tbIdArticle->Size = System::Drawing::Size(102, 22);
			this->tbIdArticle->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(314, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 64);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Articles_Supprimer::button1_Click);
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(5, 116);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 16);
			this->lblError->TabIndex = 7;
			this->lblError->Text = L"label2";
			// 
			// UC_Articles_Supprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbIdArticle);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UC_Articles_Supprimer";
			this->Size = System::Drawing::Size(777, 363);
			this->Load += gcnew System::EventHandler(this, &UC_Articles_Supprimer::UC_Articles_Supprimer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UC_Articles_Supprimer_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
		this->lblError->Text = "";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbIdArticle->Text != "") {
			this->Services->supprimerArtcile(System::Convert::ToUInt32(this->tbIdArticle->Text));
			this->lblError->Text = "L'article a bien été supprimé.";
			this->tbIdArticle->Text = "";
		}
		else {
			this->lblError->Text = "Veuillez entre un id.";
		}
	}
};
}
