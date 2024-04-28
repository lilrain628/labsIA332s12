#include <stdio.h>
#include <ctype.h>
int main()
{
  // описание и инициализация
  FILE *file = fopen("lab.txt", "r+"); // открытие файла
  int num;
  int sum = 0;

  while (fscanf(file, "%d", &num) == 1)
  {
    sum += num;
  }

  fprintf(file, "\nСумма цифр в файле: %d\n", sum);
  fclose(file); // закрытие файла
  return 0;
}
