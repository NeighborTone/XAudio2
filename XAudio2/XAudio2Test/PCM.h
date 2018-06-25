#pragma once
#include "WavDecoder.h"
namespace SoundEngine 
{
	//仮
	class PCM
	{
	public:
		PCM() {};
		virtual ~PCM() {};
		virtual bool Load(const std::string &path) = 0;
		virtual const WAVEFORMATEX& GetWaveFmtEx()const = 0;	//WAVE フォーマットを取得
		virtual const BYTE* GetWaveData()const = 0;						//Wave データを取得
		virtual const size_t	GetWaveByteSize()const = 0;					//Wave データのサイズを取得
	};

	class Wav : public PCM
	{
	private:
		WavDecoder wav;
	public:
		Wav(const std::string &path);
		bool Load(const std::string &path);
		const WAVEFORMATEX& GetWaveFmtEx()const;
		const BYTE* GetWaveData()const;
		const size_t GetWaveByteSize()const;
	};
}