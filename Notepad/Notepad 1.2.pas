Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure monthCalendar1_DateChanged(sender: Object; e: DateRangeEventArgs);
    procedure newToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure openToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure saveToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
    procedure exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
  {$region FormDesigner}
  internal
    {$resource Notepad 1.2.Form1.resources}
    textBox1: TextBox;
    monthCalendar1: MonthCalendar;
    openFileDialog1: OpenFileDialog;
    saveFileDialog1: SaveFileDialog;
    colorDialog1: ColorDialog;
    fontDialog1: FontDialog;
    menuStrip1: MenuStrip;
    fileToolStripMenuItem: ToolStripMenuItem;
    settingsToolStripMenuItem: ToolStripMenuItem;
    projectToolStripMenuItem: ToolStripMenuItem;
    programToolStripMenuItem: ToolStripMenuItem;
    helpToolStripMenuItem: ToolStripMenuItem;
    newToolStripMenuItem: ToolStripMenuItem;
    openToolStripMenuItem: ToolStripMenuItem;
    saveToolStripMenuItem: ToolStripMenuItem;
    exitToolStripMenuItem: ToolStripMenuItem;
    pictureBox1: PictureBox;
    {$include Notepad 1.2.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.monthCalendar1_DateChanged(sender: Object; e: DateRangeEventArgs);
begin
  
end;

procedure Form1.newToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  textBox1.Clear;
end;

procedure Form1.openToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  var o:string;
  openFileDialog1.ShowDialog();
  o:=openFileDialog1.FileName;
  textbox1.Lines:=ReadAllLines(o);
end;

procedure Form1.saveToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  var s:string;
  saveFileDialog1.ShowDialog();
  s:=saveFileDialog1.FileName;
  WriteAllLines(s,textbox1.Lines);
  text:='Блокнот' +s;
end;

procedure Form1.exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
  saveFileDialog1.ShowDialog();
  s:=saveFileDialog1.FileName;
  WriteAllLines(s,textbox1.Lines);
  text:='Блокнот' +s;
end;

end.
