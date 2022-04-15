#include "../winhttp.h"

//----- (00000001408794E0) ----------------------------------------------------
__int64 __fastcall sub_1408794E0(__int64 a1)
{
	__int64 v1; // r9
	float v3; // xmm0_4
	__int64 v4; // rdx
	unsigned __int64 v5; // r8

	v1 = *(_QWORD*)(a1 + 24);
	if ((*(_BYTE*)(v1 + 383) & 4) != 0)
	{
		v3 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
		v1 = *(_QWORD*)(a1 + 24);
		v4 = (unsigned int)(int)(float)((float)((float)(v3 * *(float*)(v1 + 372)) * (float)*(int*)(v1 + 192)) * 0.001);
	}
	else
	{
		v5 = (unsigned int)dword_140C110B4;
		if (*(char*)(v1 + 382) < 0)
			v5 = 375i64;
		v4 = (unsigned int)(*(unsigned int*)(v1 + 192) * (unsigned __int64)*(unsigned int*)(v1 + 372) / v5);
	}
	*(_BYTE*)(v1 + 383) &= 0xF1u;
	*(_DWORD*)(v1 + 372) = 0;
	return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 80i64))(*(_QWORD*)(a1 + 56), v4);
}
// 140C110B4: using guessed type int dword_140C110B4;

