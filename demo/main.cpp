#include "../ext/AudioPlayback/include/Sound.h"

int main()
{
    Homemade::Sound sound;

    sound.Init();

    sound.Play("assets/jump.wav");

    sound.Uninit();
}