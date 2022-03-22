#include "ColorPair.h"

void ColorNamesToString(const ColorPair* colorPair, char* MajorColorbuffer, char* MinorrColorbuffer)
 {
    sprintf(MajorColorbuffer, "%s", MajorColorNames[colorPair->majorColor]);
    sprintf(MinorrColorbuffer, "%s", MinorColorNames[colorPair->minorColor]);
 }


void PrintManual()
 {
  int TotalColorPairNum = numberOfMajorColors * numberOfMinorColors;
  printf("~~~~~~~~~~~~~COLOR CODE MANUAL~~~~~~~~~~~~~~~\n");
	for (int ColorNumber= 1 ; ColorNumber <= TotalColorPairNum ; ColorNumber++)
	{
	  ColorPair colorPair = GetColorFromPairNumber(ColorNumber);
	  char MajorColorName[MAX_COLORPAIR_NAME_CHARS/2];
	  char MinorColorName[MAX_COLORPAIR_NAME_CHARS/2];  
	  ColorNamesToString(&colorPair,MajorColorName,MinorColorName);
	  printf("Pair Number: %d Major and Minor Color Names: %s ,%s\n", ColorNumber, MajorColorName, MinorColorName);
	}
 }
