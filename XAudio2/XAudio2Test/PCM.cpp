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

	Ogg::Ogg(const std::string& path)
	{
		Load(path);
	}
	bool Ogg::Load(const std::string& path)
	{
		return ogg.Load(path);
	}
	const WAVEFORMATEX& Ogg::GetWaveFmtEx() const
	{
		return ogg.GetWaveFmtEx();
	}
	const BYTE* Ogg::GetWaveData() const
	{
		return ogg.GetWaveData();
	}
	const size_t Ogg::GetWaveByteSize() const
	{
		return ogg.GetWaveByteSize();
	}
}