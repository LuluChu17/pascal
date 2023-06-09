﻿// Пример иллюстрирует возможности оператора foreach
var 
  a: array [1..5] of integer := (1,3,5,7,9);
  s: set of integer;
  l: List<integer>;

begin
  Write('foreach по обычному массиву: ':35);
  foreach x: integer in a do
    Print(x);
  Println;  
  
  s := [2..5,10..14];
  Write('foreach по множеству: ':35);
  foreach var x in s do
    Print(x);
  Println;  
  
  l := new List<integer>;
  l.Add(7); l.Add(2); l.Add(5);
  Write('foreach по динамическому массиву: ':35);
  foreach var x in l do
    Print(x);
  Println;  

  Write('foreach по диапазону: ':35);
  foreach var x in 1..10 do
    Print(x);
  Println;  
end.