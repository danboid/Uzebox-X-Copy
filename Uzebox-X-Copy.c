// X-Copy for the Uzebox
// Not even alpha edition


#include <avr/io.h>
#include <avr/pgmspace.h>
//#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <uzebox.h>

#include "data/UpperUI.inc"

int main()
{
    SetSpritesTileTable(tileset);
    SetTileTable(tileset);
    ClearVram();
    DrawMap2(0,0,UpperUI);
    while (1)
    {
        // Main loop
    }
}
