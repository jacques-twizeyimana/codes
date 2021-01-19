namespace XMLFiles
{
    partial class XmlFiles
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
            this.bCreateXML = new System.Windows.Forms.Button();
            this.bWriteXML = new System.Windows.Forms.Button();
            this.dataContainer = new System.Windows.Forms.DataGridView();
            ((System.ComponentModel.ISupportInitialize)(this.dataContainer)).BeginInit();
            this.SuspendLayout();
            // 
            // bCreateXML
            // 
            this.bCreateXML.Location = new System.Drawing.Point(50, 384);
            this.bCreateXML.Name = "bCreateXML";
            this.bCreateXML.Size = new System.Drawing.Size(109, 54);
            this.bCreateXML.TabIndex = 0;
            this.bCreateXML.Text = "Create XML";
            this.bCreateXML.UseVisualStyleBackColor = true;
            this.bCreateXML.Click += new System.EventHandler(this.bCreateXML_Click);
            // 
            // bWriteXML
            // 
            this.bWriteXML.Location = new System.Drawing.Point(606, 384);
            this.bWriteXML.Name = "bWriteXML";
            this.bWriteXML.Size = new System.Drawing.Size(109, 54);
            this.bWriteXML.TabIndex = 0;
            this.bWriteXML.Text = "Read XML";
            this.bWriteXML.UseVisualStyleBackColor = true;
            this.bWriteXML.Click += new System.EventHandler(this.button2_Click);
            // 
            // dataContainer
            // 
            this.dataContainer.BackgroundColor = System.Drawing.Color.White;
            this.dataContainer.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataContainer.Location = new System.Drawing.Point(12, 31);
            this.dataContainer.Name = "dataContainer";
            this.dataContainer.Size = new System.Drawing.Size(776, 347);
            this.dataContainer.TabIndex = 1;
            // 
            // XmlFiles
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.dataContainer);
            this.Controls.Add(this.bWriteXML);
            this.Controls.Add(this.bCreateXML);
            this.Name = "XmlFiles";
            this.Text = "Manipulating XML Files";
            ((System.ComponentModel.ISupportInitialize)(this.dataContainer)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button bCreateXML;
        private System.Windows.Forms.Button bWriteXML;
        private System.Windows.Forms.DataGridView dataContainer;
    }
}

