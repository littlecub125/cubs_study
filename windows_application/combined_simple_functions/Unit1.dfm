object F_Main: TF_Main
  Left = -1629
  Top = 602
  Width = 399
  Height = 382
  Caption = 'F_Main'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 11
  object B_TimerTest: TButton
    Left = 88
    Top = 54
    Width = 150
    Height = 21
    Caption = 'Timer Test'
    TabOrder = 0
    OnClick = B_TimerTestClick
  end
  object B_Calculator: TButton
    Left = 88
    Top = 88
    Width = 150
    Height = 21
    Caption = 'Calculator'
    TabOrder = 1
    OnClick = B_CalculatorClick
  end
  object Lotto: TButton
    Left = 88
    Top = 122
    Width = 150
    Height = 21
    Caption = 'Lotto'
    TabOrder = 2
    OnClick = LottoClick
  end
  object Function: TButton
    Left = 88
    Top = 169
    Width = 143
    Height = 21
    Caption = 'ID/PW add'
    TabOrder = 3
    OnClick = FunctionClick
  end
  object Login: TButton
    Left = 88
    Top = 217
    Width = 143
    Height = 28
    Caption = 'Login'
    TabOrder = 4
    OnClick = LoginClick
  end
end
