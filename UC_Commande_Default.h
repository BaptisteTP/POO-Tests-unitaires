#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Commande_Default
	/// </summary>
	public ref class UC_Commande_Default : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commande_Default(void)
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
		~UC_Commande_Default()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(353, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"DEFAULT";
			// 
			// UC_Commande_Default
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->label1);
			this->Name = L"UC_Commande_Default";
			this->Size = System::Drawing::Size(777, 363);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
