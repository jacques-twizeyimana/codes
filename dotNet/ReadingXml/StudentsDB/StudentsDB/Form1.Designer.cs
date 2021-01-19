namespace StudentsDB
{
    partial class StudentForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.studentId = new System.Windows.Forms.RichTextBox();
            this.lastName = new System.Windows.Forms.RichTextBox();
            this.studentAge = new System.Windows.Forms.RichTextBox();
            this.firstName = new System.Windows.Forms.RichTextBox();
            this.submit = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.dataConsole = new System.Windows.Forms.DataGridView();
            this.label5 = new System.Windows.Forms.Label();
            this.studentClass = new System.Windows.Forms.RichTextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.bReadData = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataConsole)).BeginInit();
            this.SuspendLayout();
            // 
            // studentId
            // 
            this.studentId.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.studentId.Location = new System.Drawing.Point(217, 76);
            this.studentId.Name = "studentId";
            this.studentId.Size = new System.Drawing.Size(286, 50);
            this.studentId.TabIndex = 0;
            this.studentId.Text = "";
            // 
            // lastName
            // 
            this.lastName.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lastName.Location = new System.Drawing.Point(217, 234);
            this.lastName.Name = "lastName";
            this.lastName.Size = new System.Drawing.Size(286, 50);
            this.lastName.TabIndex = 1;
            this.lastName.Text = "";
            // 
            // studentAge
            // 
            this.studentAge.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.studentAge.Location = new System.Drawing.Point(217, 312);
            this.studentAge.Name = "studentAge";
            this.studentAge.Size = new System.Drawing.Size(286, 49);
            this.studentAge.TabIndex = 2;
            this.studentAge.Text = "";
            // 
            // firstName
            // 
            this.firstName.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.firstName.Location = new System.Drawing.Point(217, 161);
            this.firstName.Name = "firstName";
            this.firstName.Size = new System.Drawing.Size(286, 46);
            this.firstName.TabIndex = 3;
            this.firstName.Text = "";
            // 
            // submit
            // 
            this.submit.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.submit.Location = new System.Drawing.Point(317, 457);
            this.submit.Name = "submit";
            this.submit.Size = new System.Drawing.Size(170, 49);
            this.submit.TabIndex = 4;
            this.submit.Text = "Register";
            this.submit.UseVisualStyleBackColor = true;
            this.submit.Click += new System.EventHandler(this.submit_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(70, 88);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(101, 25);
            this.label1.TabIndex = 5;
            this.label1.Text = "Student Id";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(73, 163);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(98, 25);
            this.label2.TabIndex = 5;
            this.label2.Text = "Firstname";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(70, 236);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(98, 25);
            this.label3.TabIndex = 5;
            this.label3.Text = "Lastname";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(55, 324);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(116, 25);
            this.label4.TabIndex = 5;
            this.label4.Text = "StudentAge";
            // 
            // dataConsole
            // 
            this.dataConsole.BackgroundColor = System.Drawing.Color.White;
            this.dataConsole.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataConsole.Location = new System.Drawing.Point(587, 12);
            this.dataConsole.Name = "dataConsole";
            this.dataConsole.Size = new System.Drawing.Size(590, 486);
            this.dataConsole.TabIndex = 6;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(82, 394);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(62, 25);
            this.label5.TabIndex = 7;
            this.label5.Text = "Class";
            // 
            // studentClass
            // 
            this.studentClass.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.studentClass.Location = new System.Drawing.Point(217, 392);
            this.studentClass.Name = "studentClass";
            this.studentClass.Size = new System.Drawing.Size(286, 49);
            this.studentClass.TabIndex = 2;
            this.studentClass.Text = "";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(0, 0);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 8;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // bReadData
            // 
            this.bReadData.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bReadData.Location = new System.Drawing.Point(13, 460);
            this.bReadData.Name = "bReadData";
            this.bReadData.Size = new System.Drawing.Size(170, 46);
            this.bReadData.TabIndex = 9;
            this.bReadData.Text = "Read Exisiting";
            this.bReadData.UseVisualStyleBackColor = true;
            this.bReadData.Click += new System.EventHandler(this.bReadData_Click);
            // 
            // StudentForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1189, 552);
            this.Controls.Add(this.bReadData);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.dataConsole);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.submit);
            this.Controls.Add(this.firstName);
            this.Controls.Add(this.studentClass);
            this.Controls.Add(this.studentAge);
            this.Controls.Add(this.lastName);
            this.Controls.Add(this.studentId);
            this.Name = "StudentForm";
            this.Text = "STUDENTS RECORDING WITH XML";
            ((System.ComponentModel.ISupportInitialize)(this.dataConsole)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RichTextBox studentId;
        private System.Windows.Forms.RichTextBox lastName;
        private System.Windows.Forms.RichTextBox studentAge;
        private System.Windows.Forms.RichTextBox firstName;
        private System.Windows.Forms.Button submit;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.DataGridView dataConsole;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.RichTextBox studentClass;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button bReadData;
    }
}

