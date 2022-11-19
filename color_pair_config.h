#define MAX_COLORPAIR_NAME_CHARS  16

typedef enum 
{
    WHITE, 
    RED, 
    BLACK, 
    YELLOW, 
    VIOLET
}MajorColor;

typedef enum 
{
    BLUE, 
    ORANGE, 
    GREEN,
    BROWN, 
    SLATE
}MinorColor;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;
