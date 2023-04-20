procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.monthCalendar1 := new System.Windows.Forms.MonthCalendar();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.colorDialog1 := new System.Windows.Forms.ColorDialog();
        self.fontDialog1 := new System.Windows.Forms.FontDialog();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.fileToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.settingsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.projectToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.programToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.helpToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.newToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.openToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.saveToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.exitToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.BackColor := System.Drawing.Color.Khaki;
        self.textBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.textBox1.Font := new System.Drawing.Font('Chekhovskoy', 11.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.ForeColor := System.Drawing.Color.Black;
        self.textBox1.Location := new System.Drawing.Point(0, 24);
        self.textBox1.Multiline := true;
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(534, 383);
        self.textBox1.TabIndex := 0;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.None;
        self.pictureBox1.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox1.Cursor := System.Windows.Forms.Cursors.Hand;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(408, 55);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(114, 160);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.Zoom;
        self.pictureBox1.TabIndex := 1;
        self.pictureBox1.TabStop := false;
        // 
        // monthCalendar1
        // 
        self.monthCalendar1.BackColor := System.Drawing.Color.Yellow;
        self.monthCalendar1.ForeColor := System.Drawing.Color.Transparent;
        self.monthCalendar1.Location := new System.Drawing.Point(358, 227);
        self.monthCalendar1.Name := 'monthCalendar1';
        self.monthCalendar1.TabIndex := 1;
        self.monthCalendar1.TitleBackColor := System.Drawing.Color.AliceBlue;
        self.monthCalendar1.TitleForeColor := System.Drawing.Color.AntiqueWhite;
        self.monthCalendar1.TrailingForeColor := System.Drawing.SystemColors.Highlight;
        self.monthCalendar1.DateChanged += monthCalendar1_DateChanged;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.FileName := 'openFileDialog1';
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackColor := System.Drawing.Color.DarkSeaGreen;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[5](self.fileToolStripMenuItem, self.settingsToolStripMenuItem, self.projectToolStripMenuItem, self.programToolStripMenuItem, self.helpToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(534, 24);
        self.menuStrip1.TabIndex := 3;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // fileToolStripMenuItem
        // 
        self.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.newToolStripMenuItem, self.openToolStripMenuItem, self.saveToolStripMenuItem, self.exitToolStripMenuItem));
        self.fileToolStripMenuItem.Name := 'fileToolStripMenuItem';
        self.fileToolStripMenuItem.Size := new System.Drawing.Size(37, 20);
        self.fileToolStripMenuItem.Text := 'File';
        // 
        // settingsToolStripMenuItem
        // 
        self.settingsToolStripMenuItem.Name := 'settingsToolStripMenuItem';
        self.settingsToolStripMenuItem.Size := new System.Drawing.Size(61, 20);
        self.settingsToolStripMenuItem.Text := 'Settings';
        // 
        // projectToolStripMenuItem
        // 
        self.projectToolStripMenuItem.Name := 'projectToolStripMenuItem';
        self.projectToolStripMenuItem.Size := new System.Drawing.Size(56, 20);
        self.projectToolStripMenuItem.Text := 'Project';
        // 
        // programToolStripMenuItem
        // 
        self.programToolStripMenuItem.Name := 'programToolStripMenuItem';
        self.programToolStripMenuItem.Size := new System.Drawing.Size(65, 20);
        self.programToolStripMenuItem.Text := 'Program';
        // 
        // helpToolStripMenuItem
        // 
        self.helpToolStripMenuItem.Name := 'helpToolStripMenuItem';
        self.helpToolStripMenuItem.Size := new System.Drawing.Size(44, 20);
        self.helpToolStripMenuItem.Text := 'Help';
        // 
        // newToolStripMenuItem
        // 
        self.newToolStripMenuItem.Name := 'newToolStripMenuItem';
        self.newToolStripMenuItem.Size := new System.Drawing.Size(152, 22);
        self.newToolStripMenuItem.Text := 'New';
        self.newToolStripMenuItem.Click += newToolStripMenuItem_Click;
        // 
        // openToolStripMenuItem
        // 
        self.openToolStripMenuItem.Name := 'openToolStripMenuItem';
        self.openToolStripMenuItem.Size := new System.Drawing.Size(152, 22);
        self.openToolStripMenuItem.Text := 'Open';
        self.openToolStripMenuItem.Click += openToolStripMenuItem_Click;
        // 
        // saveToolStripMenuItem
        // 
        self.saveToolStripMenuItem.Name := 'saveToolStripMenuItem';
        self.saveToolStripMenuItem.Size := new System.Drawing.Size(152, 22);
        self.saveToolStripMenuItem.Text := 'Save';
        self.saveToolStripMenuItem.Click += saveToolStripMenuItem_Click;
        // 
        // exitToolStripMenuItem
        // 
        self.exitToolStripMenuItem.Name := 'exitToolStripMenuItem';
        self.exitToolStripMenuItem.Size := new System.Drawing.Size(152, 22);
        self.exitToolStripMenuItem.Text := 'Exit';
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.Color.CornflowerBlue;
        self.ClientSize := new System.Drawing.Size(534, 407);
        self.Controls.Add(self.monthCalendar1);
        self.Controls.Add(self.pictureBox1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.menuStrip1);
        self.Font := new System.Drawing.Font('Marlett', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.ForeColor := System.Drawing.Color.Coral;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Notepad';
        self.FormClosing += Form1_FormClosing;
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
