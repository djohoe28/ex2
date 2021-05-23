#include <iostream>


void printMenu();
void checkInput(int argc,char *argv[]) throw();

void checkInput(int argc,char *argv[]) throw(){}
 
void printMenu()
{
  
  
  std::string input;
  std::string firstWord;
  std::string secondWord; 
  char c = ' '; // character of the first word

  while(1){
  std::cout<<"load,<filename> \n";
  std::cout<<"<port>,outbound \n"; 
  std::cout<<"<port>,inbound \n"; 
  std::cout<<"<port>,balance \n";
  std::cout<<"print, \n"; 
  std::cout<<"exit, \n";  

  std::getline(std::cin,firstWord,',');
  std::getline(std::cin,secondWord);
  
    
  

  std::cout<<firstWord<<" "<<secondWord<<"\n";
  
  if(firstWord == "load"){ std::cout<<"load\n";}
  else if(secondWord == "outbound"){std::cout<<"outbound\n";} 
  else if(secondWord == "inbound"){std::cout<<"inbound\n";}
  else if(secondWord == "balance"){std::cout<<"balance\n";}
  else if(firstWord == "print"){std::cout<<"print\n";}
  else if(firstWord == "exit"){exit(-1);}
  else{std::cout<<"USAGE: ‘load’ <file> *or* \n <node>,'inbound' *or* \n <node>,’outbound’ *or* \n <node>,’balance’,dd/mm HH:mm *or* \n ‘print’ *or* \n‘exit’ *to terminate*";}





  }
    
}