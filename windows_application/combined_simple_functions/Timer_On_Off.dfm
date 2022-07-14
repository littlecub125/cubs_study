object F_TimerTest: TF_TimerTest
  Left = 192
  Top = 143
  Width = 1305
  Height = 675
  Caption = 'F_TimerTest'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 115
  TextHeight = 13
  object Label1: TLabel
    Left = 176
    Top = 48
    Width = 41
    Height = 13
    Caption = 'Label1'
  end
  object Button1: TButton
    Left = 176
    Top = 168
    Width = 81
    Height = 41
    Caption = 'ON'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 360
    Top = 112
  end
end
