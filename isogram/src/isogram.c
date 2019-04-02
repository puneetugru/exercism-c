#include "isogram.h"

bool is_isogram(const char phrase[])
{
    bool isIsogram = true;

    char a;
    char b;

    for(a=*phrase;a!='\0'; ++phrase) {
        for(b=*(phrase+1);b!='\0';++phrase) {
            if(a == b) {
                isIsogram = false;
                break;
            }
        }
    }

    return isIsogram;
}
