#include "../winhttp.h"

//----- (000000014089F500) ----------------------------------------------------
__int64 __fastcall sub_14089F500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
	unsigned int v6; // eax
	float v7; // xmm6_4
	unsigned __int32 v8; // xmm0_4
	__int64 result; // rax

	*(_QWORD*)(a1 + 16) = a3;
	*(_QWORD*)(a1 + 8) = a4;
	if (qword_140C62AE8)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 56i64))(a3);
		qword_140C62AE8(v6, a5);
	}
	*(_QWORD*)(a1 + 48) = *a5;
	v7 = 1.0 / (float)((float)*(int*)a5 * 0.1);
	v8 = sub_14089F470(a1).m128_u32[0];
	*(float*)(a1 + 24) = v7;
	*(_DWORD*)(a1 + 40) = 0;
	*(_DWORD*)(a1 + 36) = v8;
	*(_DWORD*)(a1 + 32) = v8;
	*(_DWORD*)(a1 + 44) = (int)(float)(0.0 / v7);
	result = 1i64;
	*(float*)(a1 + 28) = -v7;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C62AE8: using guessed type __int64 (__fastcall *qword_140C62AE8)(_QWORD, _QWORD);

