int ft_atoi(char *str)
{
  int i;
  int res;
  int s;

  i = 0;
  res = 0;
  s = 1;
  while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
  if (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
      s *= -1;
    i++;
  }
  while (str[i])
  {
    if (!(str[i] >= '0' && str[i] <= '9'))
      return (res * s);
    res *= 10;
    res += str[i] - '0';
    i++;
  }
  return (res * s);
}