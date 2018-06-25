#include <iostream>
#include "SoundSource.h"
#include "SoundEffect.h"
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ ) 

using namespace std;

int main()
{
	// ÉÅÉÇÉäÉäÅ[ÉNåüèo
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	SoundEngine::SoundSource s;
	s.Load("se.wav", true);
	SoundEngine::SoundEffect ef;
	ef.eq.Gain0 = 0.2f;
	ef.eq.Gain1 = 0.2f;
	ef.AttachDelay(s);
	s.PlayBGM();
	Vec3 pos;
	Vec3 lis;
	while (1)
	{
		if (GetKeyState(VK_ESCAPE) & 0x8000)
		{
			break;
		}
		if (GetKeyState(VK_UP) & 0x8000)
		{
			lis.x += 0.05f;
		}
		if (GetKeyState(VK_DOWN) & 0x8000)
		{
			lis.x -= 0.05f;
		}
		std::cout << lis.x << std::endl;
		s.UpDate3DSound(Vec3(pos), Vec3(lis));
	}

}