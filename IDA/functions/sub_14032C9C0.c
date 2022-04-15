#include "../winhttp.h"

//----- (000000014032C9C0) ----------------------------------------------------
__int64 sub_14032C9C0()
{
	int v0; // r9d
	int v1; // r10d
	int v2; // r8d
	int v3; // eax
	__int64 v4; // rdx
	__int64 result; // rax

	v0 = dword_140C425A0;
	v1 = dword_140C42540;
	v2 = *(_DWORD*)qword_140C63750;
	v3 = dword_140C425A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C425A0)
		v3 = *(_DWORD*)qword_140C63750;
	v4 = v3;
	result = (unsigned int)dword_140C42540;
	if (v2 < dword_140C42540)
		result = (unsigned int)v2;
	if ((float)(dword_140C425B0[v4] - dword_140C42550[(int)result]) == 0.0)
	{
		dword_140C79E08 = 0;
	}
	else
	{
		if (v2 < dword_140C425A0)
			v0 = *(_DWORD*)qword_140C63750;
		if (v2 < dword_140C42540)
			v1 = *(_DWORD*)qword_140C63750;
		result = v1;
		*(float*)&dword_140C79E08 = 1.0 / (float)(dword_140C425B0[v0] - dword_140C42550[v1]);
	}
	return result;
}
// 140C42540: using guessed type int dword_140C42540;
// 140C42550: using guessed type float dword_140C42550[12];
// 140C425A0: using guessed type int dword_140C425A0;
// 140C425B0: using guessed type float dword_140C425B0[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C79E08: using guessed type int dword_140C79E08;

