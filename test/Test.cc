#include <iostream>

#include "../include/ReadAllContentFromFile.h"

using namespace std;

int main(int argc,char **argv)
{
  long size;
  char *buffer=NULL;

  if(argc<2)
  {
    cerr<<"error"<<endl;
    cout<<"usage: executefile filename"<<endl;
    return 1;
  }

  size=readAllContentFromFile(argv[1],buffer);

  if(buffer!=NULL)
  {
    delete buffer;
    
  }
  
  cout.write(buffer,size);

  return 0;
  
}
