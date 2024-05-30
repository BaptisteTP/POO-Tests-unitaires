#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Commande_Afficher_Template
	/// </summary>
	public ref class UC_Commande_Afficher_Template : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commande_Afficher_Template(void)
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
		~UC_Commande_Afficher_Template()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblTitre;

	private: System::Windows::Forms::Label^ lblDescription;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::String^ _Titre;
		System::String^ _Description;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblTitre = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(18, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(136, 130);
			this->panel1->TabIndex = 1;
			// 
			// lblTitre
			// 
			this->lblTitre->AutoEllipsis = true;
			this->lblTitre->Location = System::Drawing::Point(155, 16);
			this->lblTitre->Name = L"lblTitre";
			this->lblTitre->Size = System::Drawing::Size(619, 23);
			this->lblTitre->TabIndex = 2;
			this->lblTitre->Text = L"Titre";
			// 
			// lblDescription
			// 
			this->lblDescription->AutoEllipsis = true;
			this->lblDescription->Location = System::Drawing::Point(155, 67);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(619, 49);
			this->lblDescription->TabIndex = 3;
			this->lblDescription->Text = L"DESCRIPTION";
			// 
			// UC_Commande_Afficher_Template
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblDescription);
			this->Controls->Add(this->lblTitre);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"UC_Commande_Afficher_Template";
			this->Size = System::Drawing::Size(777, 130);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}
