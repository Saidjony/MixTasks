unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, Math;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Button1: TButton;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
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
var a,b,c:real;
var st,sr:string;
begin
   a:=StrToFloat(Edit1.Text);
   b:=StrToFloat(Edit2.Text);
   c:=StrToFloat(Edit3.Text);
   if a>0 then    begin
    st:=st+FloatToStr(Power(a,2))+' ';
   end;
   if a<0 then    begin
    sr:=sr+FloatToStr(Power(a,4))+' ';
   end;
   if b>0 then   begin
    st:=st+FloatToStr(Power(b,2))+' ';
   end;
   if b<0 then    begin
    sr:=sr+FloatToStr(Power(b,4))+' ';
   end;
   if c>0 then   begin
    st:=st+FloatToStr(Power(c,2))+' ';
   end;
   if c<0 then    begin
    sr:=sr+FloatToStr(Power(c,4))+' ';
   end;
   Label6.Caption:=sr;
   Label7.Caption:=st ;
end;
end.
