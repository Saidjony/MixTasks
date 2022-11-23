procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.listBox2 := new System.Windows.Forms.ListBox();
        self.label5 := new System.Windows.Forms.Label();
        self.label6 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label8 := new System.Windows.Forms.Label();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.button2 := new System.Windows.Forms.Button();
        self.textBox5 := new System.Windows.Forms.TextBox();
        self.label9 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(447, 124);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(179, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'добавить в список';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // listBox1
        // 
        self.listBox1.FormattingEnabled := true;
        self.listBox1.Location := new System.Drawing.Point(12, 50);
        self.listBox1.Name := 'listBox1';
        self.listBox1.Size := new System.Drawing.Size(192, 394);
        self.listBox1.TabIndex := 1;
        self.listBox1.SelectedIndexChanged += listBox1_SelectedIndexChanged;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(447, 49);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(284, 20);
        self.textBox1.TabIndex := 2;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(448, 23);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 23);
        self.label1.TabIndex := 3;
        self.label1.Text := 'автор';
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(448, 72);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(147, 23);
        self.label2.TabIndex := 5;
        self.label2.Text := 'название книги';
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(448, 98);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(284, 20);
        self.textBox2.TabIndex := 4;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(448, 305);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(136, 21);
        self.label3.TabIndex := 6;
        self.label3.Text := 'данные о книгах';
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(448, 326);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(284, 118);
        self.label4.TabIndex := 7;
        self.label4.Text := 'label4';
        // 
        // listBox2
        // 
        self.listBox2.FormattingEnabled := true;
        self.listBox2.Location := new System.Drawing.Point(210, 50);
        self.listBox2.Name := 'listBox2';
        self.listBox2.Size := new System.Drawing.Size(219, 394);
        self.listBox2.TabIndex := 8;
        self.listBox2.SelectedIndexChanged += listBox2_SelectedIndexChanged;
        // 
        // label5
        // 
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.Location := new System.Drawing.Point(12, 24);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(100, 23);
        self.label5.TabIndex := 3;
        self.label5.Text := 'автор';
        // 
        // label6
        // 
        self.label6.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label6.Location := new System.Drawing.Point(210, 24);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(147, 23);
        self.label6.TabIndex := 5;
        self.label6.Text := 'название книги';
        // 
        // label7
        // 
        self.label7.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label7.Location := new System.Drawing.Point(449, 197);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(266, 23);
        self.label7.TabIndex := 13;
        self.label7.Text := 'название книги которые он читал';
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(447, 214);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(284, 20);
        self.textBox3.TabIndex := 12;
        // 
        // label8
        // 
        self.label8.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label8.Location := new System.Drawing.Point(449, 157);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(147, 23);
        self.label8.TabIndex := 11;
        self.label8.Text := 'фамилия читателя';
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(449, 174);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(284, 20);
        self.textBox4.TabIndex := 10;
        // 
        // button2
        // 
        self.button2.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button2.Location := new System.Drawing.Point(449, 279);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(210, 23);
        self.button2.TabIndex := 9;
        self.button2.Text := 'обновить информацию';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // textBox5
        // 
        self.textBox5.Location := new System.Drawing.Point(447, 253);
        self.textBox5.Name := 'textBox5';
        self.textBox5.Size := new System.Drawing.Size(284, 20);
        self.textBox5.TabIndex := 14;
        // 
        // label9
        // 
        self.label9.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label9.Location := new System.Drawing.Point(450, 236);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(265, 20);
        self.label9.TabIndex := 15;
        self.label9.Text := 'сколько днею он читал';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(765, 486);
        self.Controls.Add(self.textBox5);
        self.Controls.Add(self.label9);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.label7);
        self.Controls.Add(self.label8);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.listBox2);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.listBox1);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
