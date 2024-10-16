#include <gb/gb.h>

unsigned char smilerTiles[] = {
    // frowning tile
    0x7E,
    0x7E,
    0xFF,
    0x81,
    0xFF,
    0xA5,
    0xFF,
    0x81,
    0xFF,
    0x81,
    0xFF,
    0xBD,
    0xFF,
    0x81,
    0x7E,
    0x7E,
    // smiling tile
    0x7E,
    0x7E,
    0xFF,
    0x81,
    0xFF,
    0xA5,
    0xFF,
    0x81,
    0xFF,
    0xA5,
    0xFF,
    0x99,
    0xFF,
    0x81,
    0x7E,
    0x7E,
};

unsigned char smilerSpritesMap[] = {
    0x00,
    0x01,
};

void main(void) {
  UINT8 frowning_sprite_index = 0;
  UINT8 smiling_sprite_index = 1;

  // read all tiles into 0th position at VRAM
  set_sprite_data(0, 2, smilerTiles);

  // write frowning_sprite_index and smiling_sprite_index to 0th and 1st
  // positions in the OAM resp.
  set_sprite_tile(frowning_sprite_index, frowning_sprite_index);
  set_sprite_tile(smiling_sprite_index, smiling_sprite_index);

  // place sprites
  move_sprite(frowning_sprite_index, 50, 50);
  move_sprite(smiling_sprite_index, 70, 70);
  SHOW_SPRITES;

  // while (1) {
  //   sprite_index = 1 ? sprite_index == 0 : 0;
  //   set_sprite_tile(0, sprite_index);
  // }
}
