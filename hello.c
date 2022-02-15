#include "types.h"
#include "stat.h"
#include "user.h"

int my_strlen(char* data)
{
  char * tmp = data;
  if(tmp == 0)
    return 0;
  int i = 0;
  while(tmp[i++] != 0);
  return i;
}


int
main(int argc, char **argv)
{
  char* data = "Sent";
  int size = my_strlen(data);
  complexData cData;
  cData.aInt = 10;
  cData.aChar = 'a';
  cData.aStr = (char*)malloc(size + 1);
  for (int i = 0; i < size ; i++)
  {
    cData.aStr[i] = data[i];
  }
  cData.aStr[size] = '\0';
  if( demo( &cData ) == -1)
    printf(2, "complexData send failed");
  
  printf(2 , "cData.aInt %d \n" , cData.aInt);
  printf(2 , "cData.aChar %c \n" , cData.aChar);
  printf(2 , "cData.aString %s \n" , cData.aStr);
  
  exit();
}
