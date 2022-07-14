object F_Lotto: TF_Lotto
  Left = 269
  Top = 256
  Width = 1305
  Height = 594
  Caption = 'F_Lotto'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 115
  TextHeight = 13
  object generator: TButton
    Left = 120
    Top = 200
    Width = 161
    Height = 41
    Caption = 'generator'
    TabOrder = 0
    OnClick = generatorClick
  end
  object Memo1: TMemo
    Left = 360
    Top = 120
    Width = 185
    Height = 57
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
end
