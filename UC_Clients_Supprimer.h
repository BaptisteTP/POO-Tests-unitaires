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
	/// Summary for UC_Clients_Supprimer
	/// </summary>
	public ref class UC_Clients_Supprimer : public System::Windows::Forms::UserControl
	{
	public:
		UC_Clients_Supprimer(void)
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
		~UC_Clients_Supprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lberror;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbclient;

	private: System::Windows::Forms::Label^ lbClientSup;
	private: CL_Services^ Services;
	private: System::Windows::Forms::Label^ label1;

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
			this->lberror = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbclient = (gcnew System::Windows::Forms::TextBox());
			this->lbClientSup = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lberror
			// 
			this->lberror->AutoSize = true;
			this->lberror->ForeColor = System::Drawing::Color::Red;
			this->lberror->Location = System::Drawing::Point(4, 89);
			this->lberror->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lberror->Name = L"lberror";
			this->lberror->Size = System::Drawing::Size(35, 13);
			this->lberror->TabIndex = 12;
			this->lberror->Text = L"label2";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(236, 204);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 52);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Clients_Supprimer::button1_Click);
			// 
			// tbclient
			// 
			this->tbclient->Location = System::Drawing::Point(214, 58);
			this->tbclient->Margin = System::Windows::Forms::Padding(2);
			this->tbclient->Name = L"tbclient";
			this->tbclient->Size = System::Drawing::Size(78, 20);
			this->tbclient->TabIndex = 10;
			// 
			// lbClientSup
			// 
			this->lbClientSup->AutoSize = true;
			this->lbClientSup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lbClientSup->ForeColor = System::Drawing::Color::Black;
			this->lbClientSup->Location = System::Drawing::Point(2, 53);
			this->lbClientSup->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbClientSup->Name = L"lbClientSup";
			this->lbClientSup->Size = System::Drawing::Size(205, 22);
			this->lbClientSup->TabIndex = 9;
			this->lbClientSup->Text = L"Id du client à supprimer :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(2, 0);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"SUPPRIMER UN ARTICLE";
			// 
			// UC_Clients_Supprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lberror);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbclient);
			this->Controls->Add(this->lbClientSup);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(583, 271);
			this->MinimumSize = System::Drawing::Size(583, 271);
			this->Name = L"UC_Clients_Supprimer";
			this->Size = System::Drawing::Size(583, 271);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->tbclient->Text != "") {
				this->Services->supprimerClient(System::Convert::ToUInt32(this->tbclient->Text));
				this->lberror->Text = "L'article a bien été supprimé.";
				this->tbclient->Text = "";
			}
			else {
				this->lberror->Text = "Veuillez entre un id.";
			}
		}
	};
}

