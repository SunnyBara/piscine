int fonction1(int n1)
{
  return(n1+1);
}
int main(int argc, char **argv)
{
  char n1 = 40;
  char n2 = 51;
  char n3= n1 + n2;
  while (n1 < n3)
    {
      n1 = fonction1(n1);
    }
  return(n1);
}
