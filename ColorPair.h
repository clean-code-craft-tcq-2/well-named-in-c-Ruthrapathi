#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS  16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;


const char* MajorColorNames[] ;
const char* MinorColorNames[] ;

int numberOfMajorColors;
int numberOfMinorColors;

extern void testPairToNumber ( enum MajorColor major,  enum MinorColor minor,  int expectedPairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair) ;
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void testNumberToPair( int pairNumber,  enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void PrintManual();
