#include "TVector.h"
#include "TMatrix.h"
#include <cmath>
namespace Matrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			A = new TMatrix<int>();
			B = new TMatrix<int>();
			C = new TMatrix<int>();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				delete A;
				delete B;
				delete C;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"РАЗМЕР :";
			//
			// textBox1
			//
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(214, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 38);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(92, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Матрица \"A\"";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(314, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Матрица \"B\"";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(561, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 31);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Результат:";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(586, 413);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 33);
			this->label5->TabIndex = 5;
			this->label5->Text = L"k:";
			this->label5->Visible = false;
			//
			// textBox2
			//
			this->textBox2->BackColor = System::Drawing::Color::MistyRose;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(630, 411);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(104, 38);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			//
			// button1
			//
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(35, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//
			// button2
			//
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(160, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 53);
			this->button2->TabIndex = 8;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			//
			// button3
			//
			this->button3->BackColor = System::Drawing::Color::Salmon;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(289, 398);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 53);
			this->button3->TabIndex = 9;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			//
			// button4
			//
			this->button4->BackColor = System::Drawing::Color::Salmon;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(418, 398);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 53);
			this->button4->TabIndex = 10;
			this->button4->Text = L"A*k";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			//
			// dataGridView1
			//
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LemonChiffon;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(76, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(200, 200);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			//
			// dataGridView2
			//
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LemonChiffon;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(300, 104);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(200, 200);
			this->dataGridView2->TabIndex = 12;
			this->dataGridView2->Visible = false;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellValueChanged);
			//
			// dataGridView3
			//
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LemonChiffon;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Enabled = false;
			this->dataGridView3->Location = System::Drawing::Point(534, 104);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(200, 200);
			this->dataGridView3->TabIndex = 13;
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(865, 539);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"Действия с Матрицами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int MATRIXSIZE = 0;
		int MNOJITEL = 1;
		TMatrix<int>* A;
		TMatrix<int>* B;
		TMatrix<int>* C;
		//int k;
		//int l;
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
		}
		//System::Void dataGridView2_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e)
		//{
			//k = dataGridView2->CurrentCell->RowIndex;
			//l = dataGridView2->CurrentCell->ColumnIndex;
		//}
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			C[0] = A[0] + B[0];
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = MATRIXSIZE - 1; j >= i; j--)
				{
					dataGridView3[j, i]->Value = C[0][i][j];
					//dataGridView3->Rows[i]->Cells[j]->Value = C[0][i][j];
				}
			}
		}
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			C[0] = A[0] - B[0];
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = MATRIXSIZE - 1; j >= i; j--)
				{
					dataGridView3[j, i]->Value = C[0][i][j];
					//dataGridView3->Rows[i]->Cells[j]->Value = C[0][i][j];
				}
			}
		}
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			C[0] = A[0] * B[0];
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = MATRIXSIZE - 1; j >= i; j--)
				{
					dataGridView3[j, i]->Value = C[0][i][j];
					//dataGridView3->Rows[i]->Cells[j]->Value = C[0][i][j];
				}
			}
		}
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->textBox2->Visible = 1;
			MNOJITEL = System::Int32::Parse(textBox2->Text);
			TMatrix<int> RES = A[0] * MNOJITEL;
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = MATRIXSIZE - 1; j >= i; j--)
				{
					dataGridView3[j, i]->Value = RES[i][j];
					//dataGridView3->Rows[i]->Cells[j]->Value = C[0][i][j];
				}
			}
		}
		System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (textBox2->Text == "")
			{
				textBox2->Text = "0";
			}
			MNOJITEL = System::Int32::Parse(textBox2->Text);
			TMatrix<int> RES = A[0] * MNOJITEL;
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = MATRIXSIZE - 1; j >= i; j--)
				{
					dataGridView3[j, i]->Value = RES[i][j];
				}
			}
		}
		System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			this->button1->Visible = 1;
			this->button2->Visible = 1;
			this->button3->Visible = 1;
			this->button4->Visible = 1;
			int i = dataGridView1->CurrentRow->Index;
			int j = dataGridView1->CurrentCell->ColumnIndex;
			A[0][i][j] = System::Int32::Parse((dataGridView1[j, i]->Value)->ToString());
		}
		System::Void dataGridView2_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			this->button1->Visible = 1;
			this->button2->Visible = 1;
			this->button3->Visible = 1;
			this->button4->Visible = 1;
			int i = dataGridView2->CurrentCell->RowIndex;
			int j = dataGridView2->CurrentCell->ColumnIndex;
			B[0][i][j] = System::Int32::Parse((dataGridView2[j, i]->Value)->ToString());
		}
		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (textBox1->Text == "")
			{
				textBox1->Text = "1";
			}
			while (dataGridView1->Rows->Count != 0 && dataGridView1->Columns->Count != 0)
			{
				dataGridView1->Rows->RemoveAt(0);
				dataGridView2->Rows->RemoveAt(0);
				dataGridView3->Rows->RemoveAt(0);
				dataGridView1->Columns->RemoveAt(0);
				dataGridView2->Columns->RemoveAt(0);
				dataGridView3->Columns->RemoveAt(0);
			}
			MATRIXSIZE = System::Int32::Parse(textBox1->Text);
			TMatrix<int> A1(MATRIXSIZE);
			A[0] = A1;
			TMatrix<int> B1(MATRIXSIZE);
			B[0] = B1;
			TMatrix<int> C1(MATRIXSIZE);
			C[0] = C1;
			dataGridView1->Visible = 1;
			dataGridView2->Visible = 1;
			dataGridView3->Visible = 1;
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				DataGridViewColumn^ c666 = gcnew DataGridViewColumn();
				DataGridViewCell^ td666 = gcnew DataGridViewTextBoxCell();
				c666->CellTemplate = td666;
				dataGridView3->Columns->Add(c666);
				DataGridViewRow^ r666 = gcnew DataGridViewRow();
				r666->CreateCells(dataGridView3);
				dataGridView3->Rows->Add(r666);
				DataGridViewColumn^ col666 = dataGridView3->Columns[i];
				col666->Width = floor(200 / (MATRIXSIZE + 0.1));
				DataGridViewRow^ row666 = dataGridView3->Rows[i];
				row666->Height = floor(200 / (MATRIXSIZE + 0.1));
			}
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = 0; j < MATRIXSIZE; j++)
				{
					dataGridView3->Rows[i]->Cells[j]->ReadOnly = true;
					dataGridView3->Rows[i]->Cells[j]->Value = int(0);
				}
			}
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				DataGridViewColumn^ c = gcnew DataGridViewColumn();
				DataGridViewCell^ td = gcnew DataGridViewTextBoxCell();
				c->CellTemplate = td;
				dataGridView1->Columns->Add(c);
				DataGridViewRow^ r = gcnew DataGridViewRow();
				r->CreateCells(dataGridView1);
				dataGridView1->Rows->Add(r);
				DataGridViewColumn^ col = dataGridView1->Columns[i];
				col->Width = floor(200 / (MATRIXSIZE + 0.1));
				DataGridViewRow^ row = dataGridView1->Rows[i];
				row->Height = floor(200 / (MATRIXSIZE + 0.1));
				DataGridViewColumn^ c1 = gcnew DataGridViewColumn();
				DataGridViewCell^ td1 = gcnew DataGridViewTextBoxCell();
				c1->CellTemplate = td1;
				dataGridView2->Columns->Add(c1);
				DataGridViewRow^ r1 = gcnew DataGridViewRow();
				r1->CreateCells(dataGridView1);
				dataGridView2->Rows->Add(r1);
				DataGridViewColumn^ col1 = dataGridView2->Columns[i];
				col1->Width = floor(200 / (MATRIXSIZE + 0.1));
				DataGridViewRow^ row1 = dataGridView2->Rows[i];
				row1->Height = floor(200 / (MATRIXSIZE + 0.1));
			}
			for (int i = 0; i < MATRIXSIZE; i++)
			{
				for (int j = 0; j < MATRIXSIZE; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = int(0);
					dataGridView2->Rows[i]->Cells[j]->Value = int(0);
				}
			}
			for (int i = 1; i < MATRIXSIZE; i++)
			{
				for (int j = 0; j < i; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
					dataGridView2->Rows[i]->Cells[j]->ReadOnly = true;
				}
			}
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
