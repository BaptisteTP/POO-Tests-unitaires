#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Personnel_Modifier
	/// </summary>
	public ref class UC_Personnel_Modifier : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Modifier(void)
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
		~UC_Personnel_Modifier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblModifierEmployes;
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
			this->lblModifierEmployes = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblModifierEmployes
			// 
			this->lblModifierEmployes->AutoSize = true;
			this->lblModifierEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblModifierEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblModifierEmployes->Location = System::Drawing::Point(2, 3);
			this->lblModifierEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblModifierEmployes->Name = L"lblModifierEmployes";
			this->lblModifierEmployes->Size = System::Drawing::Size(137, 13);
			this->lblModifierEmployes->TabIndex = 2;
			this->lblModifierEmployes->Text = L"MODIFIER EMPLOYES";
			// 
			// UC_Personnel_Modifier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblModifierEmployes);
			this->Name = L"UC_Personnel_Modifier";
			this->Size = System::Drawing::Size(583, 295);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
