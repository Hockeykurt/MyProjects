namespace WinFormsApp1
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.comboBoxColor1 = new System.Windows.Forms.ComboBox();
            this.comboBoxShape1 = new System.Windows.Forms.ComboBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.comboBoxShape2 = new System.Windows.Forms.ComboBox();
            this.comboBoxColor2 = new System.Windows.Forms.ComboBox();
            this.comboBoxShape3 = new System.Windows.Forms.ComboBox();
            this.comboBoxColor3 = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.checkBox1 = new System.Windows.Forms.ComboBox();
            this.checkBox2 = new System.Windows.Forms.ComboBox();
            this.checkBox3 = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(421, 230);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(94, 29);
            this.button1.TabIndex = 0;
            this.button1.Text = "Create";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(66, 185);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(82, 20);
            this.label1.TabIndex = 1;
            this.label1.Text = "Output File";
            // 
            // comboBoxColor1
            // 
            this.comboBoxColor1.FormattingEnabled = true;
            this.comboBoxColor1.Items.AddRange(new object[] {
            "Red",
            "Green",
            "Blue"});
            this.comboBoxColor1.Location = new System.Drawing.Point(66, 59);
            this.comboBoxColor1.Name = "comboBoxColor1";
            this.comboBoxColor1.Size = new System.Drawing.Size(151, 28);
            this.comboBoxColor1.TabIndex = 3;
            // 
            // comboBoxShape1
            // 
            this.comboBoxShape1.FormattingEnabled = true;
            this.comboBoxShape1.Items.AddRange(new object[] {
            "Circle",
            "Square"});
            this.comboBoxShape1.Location = new System.Drawing.Point(66, 93);
            this.comboBoxShape1.Name = "comboBoxShape1";
            this.comboBoxShape1.Size = new System.Drawing.Size(151, 28);
            this.comboBoxShape1.TabIndex = 4;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(66, 208);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(125, 27);
            this.textBox1.TabIndex = 5;
            this.textBox1.Text = "Output.txt";
            // 
            // comboBoxShape2
            // 
            this.comboBoxShape2.FormattingEnabled = true;
            this.comboBoxShape2.Items.AddRange(new object[] {
            "Circle",
            "Square"});
            this.comboBoxShape2.Location = new System.Drawing.Point(256, 93);
            this.comboBoxShape2.Name = "comboBoxShape2";
            this.comboBoxShape2.Size = new System.Drawing.Size(151, 28);
            this.comboBoxShape2.TabIndex = 8;
            // 
            // comboBoxColor2
            // 
            this.comboBoxColor2.FormattingEnabled = true;
            this.comboBoxColor2.Items.AddRange(new object[] {
            "Red",
            "Green",
            "Blue"});
            this.comboBoxColor2.Location = new System.Drawing.Point(256, 59);
            this.comboBoxColor2.Name = "comboBoxColor2";
            this.comboBoxColor2.Size = new System.Drawing.Size(151, 28);
            this.comboBoxColor2.TabIndex = 7;
            // 
            // comboBoxShape3
            // 
            this.comboBoxShape3.FormattingEnabled = true;
            this.comboBoxShape3.Items.AddRange(new object[] {
            "Circle",
            "Square"});
            this.comboBoxShape3.Location = new System.Drawing.Point(439, 93);
            this.comboBoxShape3.Name = "comboBoxShape3";
            this.comboBoxShape3.Size = new System.Drawing.Size(151, 28);
            this.comboBoxShape3.TabIndex = 11;
            // 
            // comboBoxColor3
            // 
            this.comboBoxColor3.FormattingEnabled = true;
            this.comboBoxColor3.Items.AddRange(new object[] {
            "Red",
            "Green",
            "Blue"});
            this.comboBoxColor3.Location = new System.Drawing.Point(439, 59);
            this.comboBoxColor3.Name = "comboBoxColor3";
            this.comboBoxColor3.Size = new System.Drawing.Size(151, 28);
            this.comboBoxColor3.TabIndex = 10;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(66, 259);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(76, 20);
            this.label2.TabIndex = 12;
            this.label2.Text = "File Name";
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(66, 282);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(125, 27);
            this.textBox2.TabIndex = 13;
            this.textBox2.Text = "Output.svg";
            // 
            // checkBox1
            // 
            this.checkBox1.FormattingEnabled = true;
            this.checkBox1.Items.AddRange(new object[] {
            "Yes",
            "No"});
            this.checkBox1.Location = new System.Drawing.Point(126, 127);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(91, 28);
            this.checkBox1.TabIndex = 14;
            // 
            // checkBox2
            // 
            this.checkBox2.FormattingEnabled = true;
            this.checkBox2.Items.AddRange(new object[] {
            "Yes",
            "No"});
            this.checkBox2.Location = new System.Drawing.Point(316, 127);
            this.checkBox2.Name = "checkBox2";
            this.checkBox2.Size = new System.Drawing.Size(91, 28);
            this.checkBox2.TabIndex = 15;
            // 
            // checkBox3
            // 
            this.checkBox3.FormattingEnabled = true;
            this.checkBox3.Items.AddRange(new object[] {
            "Yes",
            "No"});
            this.checkBox3.Location = new System.Drawing.Point(499, 127);
            this.checkBox3.Name = "checkBox3";
            this.checkBox3.Size = new System.Drawing.Size(91, 28);
            this.checkBox3.TabIndex = 16;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(66, 130);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(54, 20);
            this.label3.TabIndex = 17;
            this.label3.Text = "Noise?";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(256, 130);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(54, 20);
            this.label4.TabIndex = 18;
            this.label4.Text = "Noise?";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(439, 130);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(54, 20);
            this.label5.TabIndex = 19;
            this.label5.Text = "Noise?";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(650, 336);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.checkBox3);
            this.Controls.Add(this.checkBox2);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.comboBoxShape3);
            this.Controls.Add(this.comboBoxColor3);
            this.Controls.Add(this.comboBoxShape2);
            this.Controls.Add(this.comboBoxColor2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.comboBoxShape1);
            this.Controls.Add(this.comboBoxColor1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Button button1;
        private Label label1;
        private ComboBox comboBoxColor1;
        private ComboBox comboBoxShape1;
        private TextBox textBox1;
        private ComboBox comboBoxShape2;
        private ComboBox comboBoxColor2;
        private ComboBox comboBoxShape3;
        private ComboBox comboBoxColor3;
        private Label label2;
        private TextBox textBox2;
        private ComboBox checkBox1;
        private ComboBox checkBox2;
        private ComboBox checkBox3;
        private Label label3;
        private Label label4;
        private Label label5;
    }
}