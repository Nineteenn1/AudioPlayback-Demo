#include "../ext/AudioPlayback/include/Sound.h"

int main()
{
    Homemade::Sound::Init();

    Homemade::Sound::Play("assets/jump.wav");

    Homemade::Sound::Uninit();
}
