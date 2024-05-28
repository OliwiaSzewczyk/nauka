#include <LPC21xx.H>
#define NULL '\0'
#define LIMIT 254

void CopyString(char pcSource[], char pcDestination[]) {
  unsigned char ucCharacterCounter;
  for (ucCharacterCounter = 0; pcSource[ucCharacterCounter]!= NULL; ++ucCharacterCounter){
		pcDestination[ucCharacterCounter] = pcSource[ucCharacterCounter];
	}
	pcDestination[ucCharacterCounter] = NULL;
}


enum CompResult { DIFFERENT, EQUAL };

enum CompResult eCompareString(char pcStr1[], char pcStr2[]) {
	unsigned char ucCharacterCounter; 
  for (ucCharacterCounter = 0; pcStr1[ucCharacterCounter] != NULL; ++ucCharacterCounter){
    if (pcStr1[ucCharacterCounter] != pcStr2[ucCharacterCounter]) {
      return DIFFERENT;
    }
  }
  return EQUAL;
}


void AppendString(char pcSourceStr[], char pcDestinationStr[]) {
  unsigned char ucCharacterCounter;  
	for (ucCharacterCounter = 0; pcDestinationStr[ucCharacterCounter] != NULL; ++ucCharacterCounter){};
  CopyString(pcSourceStr, pcDestinationStr + ucCharacterCounter);
}


void ReplaceCharactersInString(char pcString[], char cOldChar, char cNewChar) {
  unsigned char ucCharacterCounter; 
	for (ucCharacterCounter = 0; pcString[ucCharacterCounter] != NULL; ++ucCharacterCounter) {
    if (pcString[ucCharacterCounter] == cOldChar) {
      pcString[ucCharacterCounter] = cNewChar;
    }
  }
}


int main()
{
	char source[] = "I want this work";
  char destination[LIMIT];
	
	CopyString(source, destination);
}
