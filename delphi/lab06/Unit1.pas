unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    Edit1: TEdit;
    Button1: TButton;
    Label2: TLabel;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
var msg:string;
var num:integer;
begin
   num:=StrToInt(Edit1.Text);
   msg:='����� ����������� ������ ��� ������!';
   if((num>0) and (num<8)) then
   case num of
    1:msg:='������� ����';
    2:msg:='������� ����';
    3:msg:='������� ����';
    4:msg:='������� ����';
    5:msg:='������� ����';
    6:msg:='�������� ���� - �������';
    7:msg:='�������� ���� - �����������';
  end;
  Label2.Visible:=True;
  Label2.Caption:=msg;
  end;
end.
