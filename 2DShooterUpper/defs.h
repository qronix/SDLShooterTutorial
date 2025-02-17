#pragma once
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#define PLAYER_SPEED 4
#define PLAYER_BULLET_SPEED 20
#define ALIEN_BULLET_SPEED 8

#define MAX_KEYBOARD_KEYS 350

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define FPS 60

#define SIDE_PLAYER 0
#define SIDE_ALIEN 1

#define MAX_STARS 500

#define MAX_SND_CHANNELS 8

enum
{
    CH_ANY = -1,
    CH_PLAYER,
    CH_ALIEN_FIRE
};

enum
{
    SND_PLAYER_FIRE,
    SND_ALIEN_FIRE,
    SND_PLAYER_DIE,
    SND_ALIEN_DIE,
    SND_MAX
};
