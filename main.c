#include <gb/gb.h>

unsigned char smilerTiles[] =
{
    0x7E,0x7E,0xFF,0x81,0xFF,0xA5,0xFF,0x81,0xFF,0x81,0xFF,0xBD,0xFF,0x81,0x7E,0x7E,
    0x7E,0x7E,0xFF,0x81,0xFF,0xA5,0xFF,0x81,0xFF,0xA5,0xFF,0x99,0xFF,0x81,0x7E,0x7E,
};

unsigned char smilerSpritesMap[] =
{
    0x00,
    0x01,
};

void main(void) {
  set_sprite_data(0, 2, smilerTiles);
}
