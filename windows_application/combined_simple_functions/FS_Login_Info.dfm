object F_Login_Info: TF_Login_Info
  Left = -1367
  Top = 280
  Width = 800
  Height = 553
  Caption = 'F_Login_Info'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 11
  object Label1: TLabel
    Left = 81
    Top = 108
    Width = 14
    Height = 16
    Caption = 'ID'
    Font.Charset = HANGEUL_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = '@HY'#54756#46300#46972#51064'M'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 81
    Top = 156
    Width = 79
    Height = 16
    Caption = 'PASSWORD'
    Font.Charset = HANGEUL_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = '@HY'#54756#46300#46972#51064'M'
    Font.Style = []
    ParentFont = False
  end
  object Key_Input: TButton
    Left = 230
    Top = 176
    Width = 75
    Height = 21
    Caption = 'Insert'
    TabOrder = 0
    OnClick = Key_InputClick
  end
  object StringGrid1: TStringGrid
    Left = 399
    Top = 74
    Width = 211
    Height = 204
    ColCount = 3
    TabOrder = 1
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object ID: TEdit
    Left = 81
    Top = 129
    Width = 130
    Height = 19
    TabOrder = 2
  end
  object PW: TEdit
    Left = 81
    Top = 176
    Width = 130
    Height = 19
    TabOrder = 3
  end
  object ComboBox1: TComboBox
    Left = 81
    Top = 68
    Width = 123
    Height = 19
    ItemHeight = 11
    TabOrder = 4
    Text = 'ComboBox1'
  end
  object Save_file: TButton
    Left = 521
    Top = 291
    Width = 89
    Height = 28
    Caption = 'Save'
    TabOrder = 5
    OnClick = Save_fileClick
  end
end
