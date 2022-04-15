#include "../winhttp.h"

//----- (00000001405090D0) ----------------------------------------------------
__int64 sub_1405090D0()
{
	__int64 v0; // rax
	float v1; // xmm1_4
	int v2; // eax
	__int64 v3; // rcx
	int v4; // eax
	int v5; // ebx

	if ((dword_140DC3288 & 1) != 0)
	{
		v1 = *(float*)&dword_140DC328C;
	}
	else
	{
		dword_140DC3288 |= 1u;
		v0 = sub_140200220(0x465u);
		if (v0)
		{
			v1 = *(float*)(v0 + 24);
			dword_140DC328C = LODWORD(v1);
		}
		else
		{
			v1 = 0.5;
			dword_140DC328C = 1056964608;
		}
	}
	v2 = dword_140C3B950;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B950)
		v2 = *(_DWORD*)qword_140C63750;
	v3 = v2;
	v4 = dword_140C3B6F0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B6F0)
		v4 = *(_DWORD*)qword_140C63750;
	v5 = (int)(float)((float)((float)(*((float*)&xmmword_140C3B960 + v3) * *((float*)&xmmword_140C3B700 + v4)) * v1)
		* 32768.0);
	if (v5 >= 0)
	{
		if (v5 > 0x10000)
			v5 = 0x10000;
	}
	else
	{
		v5 = 0;
	}
	if (!(**(unsigned int(__fastcall***)(__int64, _QWORD, unsigned __int64))qword_140C65848)(
		qword_140C65848,
		*(_QWORD*)qword_140C65848,
		0x140000000ui64))
		return 0;
	return (unsigned int)v5;
}
// 140C3B6F0: using guessed type int dword_140C3B6F0;
// 140C3B700: using guessed type __int128 xmmword_140C3B700;
// 140C3B950: using guessed type int dword_140C3B950;
// 140C3B960: using guessed type __int128 xmmword_140C3B960;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140DC3288: using guessed type int dword_140DC3288;
// 140DC328C: using guessed type int dword_140DC328C;

