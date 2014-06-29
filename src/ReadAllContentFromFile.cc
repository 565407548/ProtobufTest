#include <iostream>
#include <fstream>

#include "../include/ReadAllContentFromFile.h"

using namespace std;

/*
note: If we want to read all the file, we should open the file by "ios:binary".
 */
long readAllContentFromFile(const char *fileName, char * &buffer)
{
  filebuf *pbuf;
  ifstream fileStream;

  long size;
  char *buf=new char[10];
  

  fileStream.open(fileName,ios::binary);
  pbuf=fileStream.rdbuf();

  size=pbuf->pubseekoff(0,ios::end,ios::in);

  pbuf->pubseekpos(0,ios::in);
  buffer=new char[100];
  pbuf->sgetn(buffer,size);
  
  fileStream.close();
  cout.write(buffer,size);
  
  
  return size;
  
}
