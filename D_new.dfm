object Form2: TForm2
  Left = 427
  Top = 338
  Width = 199
  Height = 175
  Caption = #1053#1086#1074#1099#1081' '#1076#1085#1077#1074#1085#1080#1082
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 52
    Height = 26
    Caption = #1050#1091#1088#1089
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object CB_year: TComboBox
    Left = 8
    Top = 56
    Width = 145
    Height = 21
    ItemHeight = 13
    TabOrder = 0
    Text = 'CB_year'
    Items.Strings = (
      '2010/2011'
      '2011/2012'
      '2012/2013'
      '2013/2014'
      '2014/2015'
      '2015/2016'
      '2016/2017'
      '2017/2018'
      '2018/2019')
  end
  object B_create: TButton
    Left = 8
    Top = 88
    Width = 75
    Height = 25
    Caption = #1057#1086#1079#1076#1072#1090#1100
    TabOrder = 1
    OnClick = B_createClick
  end
  object B_cancel: TButton
    Left = 96
    Top = 88
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = B_cancelClick
  end
end
