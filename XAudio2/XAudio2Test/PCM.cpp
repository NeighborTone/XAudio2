#include "PCM.h"
namespace SoundEngine
{
	Wav::Wav(const std::string & path)
	{
		wav.Load(path.c_str());
	}

	bool Wav::Load(const std::string& path)
	{
		return wav.Load(path.c_str());
	}

	const WAVEFORMATEX& Wav::GetWaveFmtEx() const
	{
		return wav.GetWaveFmtEx();
	}

	const BYTE* Wav::GetWaveData() const
	{
		return wav.GetWaveData();
	}

	const size_t Wav::GetWaveByteSize() const
	{
		return wav.GetWaveByteSize();
	}
}