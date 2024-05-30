#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Clients_Modifier
	/// </summary>
	public ref class UC_Clients_Modifier : public System::Windows::Forms::UserControl
	{
	public:
		UC_Clients_Modifier(void)
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
		~UC_Clients_Modifier()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// UC_Clients_Modifier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->MaximumSize = System::Drawing::Size(777, 363);
			this->MinimumSize = System::Drawing::Size(777, 363);
			this->Name = L"UC_Clients_Modifier";
			this->Size = System::Drawing::Size(777, 363);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
