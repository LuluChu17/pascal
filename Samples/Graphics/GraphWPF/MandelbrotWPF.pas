﻿// Демонстрация фрактальной графики. Множество Мандельброта
// Для каждой точки комплексной плоскости z=(x,y) выполняем итерационный процесс z=z*2+c, c=(cx,cy)
// Считаем количество итераций i до тех пор пока не выполнится условие |z|>max
// После этого рисуем точку z=(x,y) с насыщенностью красного цвета, пропорциональной i 
uses GraphWPF;

const
  max = 10;
  coef1 = 0.5;
  coef2 = 0.88;
  scalex = 0.0035;
  scaley = 0.0035;
  dx = 430;
  dy = 300;

begin
  Window.Title := 'Фракталы: множество Мандельброта';
  Window.SetSize(600,600);
  Window.CenterOnScreen;
  var m := Window.Width.Round;
  var n := Window.Height.Round;
  var a := new Color[m,n];
  for var ix:=0 to m-1 do
  for var iy:=0 to n-1 do
  begin
    var cx := scalex * (ix - dx);
    var cy := scaley * (iy - dy);
    var c := Cplx(cx,cy);
    var z := Cplx(0,0);

    var i := 1;
    while i<255 do
    begin
      z := z*z+c; 
      if z.Magnitude>max then break;
      i += 1;
    end;
    if i>=255 then a[ix,iy] := Colors.Red
      else a[ix,iy] := RGB(255,255-i,255-i);
  end;
  DrawPixels(0,0,a);
  Writeln('Время расчета = ',Milliseconds/1000,' с');
end.

