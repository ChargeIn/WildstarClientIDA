#include "../winhttp.h"

//----- (00000001405B4520) ----------------------------------------------------
__int64 __fastcall sub_1405B4520(__int64 a1, __int64 a2)
{
	double v2; // xmm0_8
	double v4; // xmm6_8
	float v5; // xmm7_4
	float v6; // xmm0_4
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 4956))
	{
		*(float*)&v2 = sub_1405B42D0(a1);
		v4 = v2;
		v5 = sub_1408FE3D0(v2);
		v6 = sub_1408FC950(v4);
		*(float*)(a2 + 32) = v5;
		*(_DWORD*)(a2 + 4) = 0;
		*(_QWORD*)(a2 + 12) = 0i64;
		*(float*)a2 = v6;
		*(float*)(a2 + 40) = v6;
		*(_DWORD*)(a2 + 28) = 0;
		*(_DWORD*)(a2 + 36) = 0;
		*(_DWORD*)(a2 + 44) = 0;
		*(float*)(a2 + 8) = -v5;
		*(_QWORD*)(a2 + 20) = 1065353216i64;
		result = a2;
		*(_OWORD*)(a2 + 48) = xmmword_140C78440;
	}
	else
	{
		result = a2;
		*(_OWORD*)a2 = *(_OWORD*)(a1 + 4528);
		*(_OWORD*)(a2 + 16) = *(_OWORD*)(a1 + 4544);
		*(_OWORD*)(a2 + 32) = *(_OWORD*)(a1 + 4560);
		*(_OWORD*)(a2 + 48) = *(_OWORD*)(a1 + 4576);
	}
	return result;
}
// 1405B4541: variable 'v2' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78440: using guessed type __int128 xmmword_140C78440;

