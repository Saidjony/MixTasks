Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure listBox2_SelectedIndexChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    textBox1: TextBox;
    label1: &Label;
    label2: &Label;
    textBox2: TextBox;
    label3: &Label;
    label4: &Label;
    listBox2: ListBox;
    label5: &Label;
    label6: &Label;
    label7: &Label;
    textBox3: TextBox;
    label8: &Label;
    textBox4: TextBox;
    button2: Button;
    textBox5: TextBox;
    label9: &Label;
    listBox1: ListBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

type 
    dicty = class
  
    static author : array[1..50] of string;
    static n:integer;
    static bookname: array[1..50] of string;
    static username: array[1..50] of string;
    static uselong: array[1..50] of integer;
  public 
    static procedure addname(auth,bname:string);
    begin
      n:=n+1;
      author[n] :=auth; 
      bookname[n]:=bname;
    end;
    static procedure addone(i,j:integer; st:string); begin
      uselong[i] := uselong[i] +j;
      username[i]:=username[i]+' '+ st+' ';
    end;
    
end; 
procedure Form1.listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);

begin
if(textBox3.Text = '') then begin
  textBox3.Text:=listBox1.SelectedItem.ToString();
end;
  label4.Text:=dicty.uselong[listBox1.SelectedIndex+1].ToString();
  label4.Text:=label4.Text+dicty.username[listbox1.SelectedIndex+1].ToString();
end;  

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin 
  listBox1.Items.Add(textBox1.Text);
  listBox2.Items.Add(textBox2.Text);
  dicty.addname(textBox1.Text,textBox2.Text);
   
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
var i:integer;
begin
   for i:=1 to listBox1.Items.Count do
  begin 
     if(textBox3.Text=listBox2.Items[i-1].ToString()) then begin
       dicty.addone(i,StrToInt(textBox5.Text),textBox4.Text);
     end;
  end;
  
end;

procedure Form1.listBox2_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  if(textBox3.Text = '') then begin
  textBox3.Text:=listBox1.SelectedItem.ToString();
end;
  label4.Text:=dicty.uselong[listBox2.SelectedIndex+1].ToString();
  label4.Text:=label4.Text+dicty.username[listbox2.SelectedIndex+1].ToString();
end; 

 
end.
