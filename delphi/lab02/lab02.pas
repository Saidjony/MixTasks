unit lab02;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Button1: TButton;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
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
var inp,i,max0,min0,equal0,n:integer;
begin
   n:=StrToInt(InputBox('','input value','1'));
   for i:=1 to n do begin
       inp := StrToInt(InputBox('','input value',''));
       if(inp = 0) then begin
            equal0 :=equal0 +1;
       end;
        if(inp > 0) then begin max0 :=max0 +1; end;
        if(inp < 0) then begin min0 :=min0 +1; end;
   end;
   Label4.Caption :=IntToStr(equal0);
   Label5.Caption :=IntToStr(max0);
   Label6.Caption :=IntToStr(min0);
end;

end.
