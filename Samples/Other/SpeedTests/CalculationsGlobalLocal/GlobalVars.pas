﻿// Сравнение скорости работы глобальных и внутриблочных переменных.
// См. также файл BlockVars.pas
var 
  s: real := 0; 
  i: real := 1;

begin
  while i<1000000000 do
  begin
    s += 1/i;
    i += 1;
  end;  
  writeln(s);
  writeln('Время расчета = ',Milliseconds/1000,' с');
end.
