//equivalente do exemplo pascal em c
int main()
{
  int x=2,y=-2;
  while (y < -1)
  {
    x = y;
    x = x + 45;
    y = y + 1;
  }
  if (x > 3 )
  {
    x = 2*y + 4;
    y = 7;
  }
  else
  {
  y = 5;
  x = 4;
  }
}

/*
var x, y : integer;
begin
    x := 2;
    y := -2;
  while y < -1 do
    begin
    x := y;
    x := x + 45;
    y := y + 1
    end;
  if x > 3 then
    begin
      x := 2 * y + 4;
      y :=  7;
    end
  else
    begin
    y := 5;
    x := 4;
    end;
end.

*/
