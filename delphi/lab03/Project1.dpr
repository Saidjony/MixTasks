program Project1;

uses
  Forms,
  lab03 in 'lab03.pas' {Form1};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
