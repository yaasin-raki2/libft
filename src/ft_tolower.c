int ft_tolower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return (c - 'A' + 'a');
  else
    return (c);
}