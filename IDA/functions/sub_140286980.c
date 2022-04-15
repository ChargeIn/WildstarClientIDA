#include "../winhttp.h"

//----- (0000000140286980) ----------------------------------------------------
float __fastcall sub_140286980(
	__int64 a1,
	__int64 a2,
	unsigned __int64 a3,
	unsigned __int64 a4,
	__m128* a5,
	int a6,
	__int64 a7,
	int a8,
	__int64* a9)
{
	_QWORD* v13; // rdi
	_QWORD* v14; // rdx
	__m128 v15; // [rsp+60h] [rbp-18h] BYREF
	float v16; // [rsp+88h] [rbp+10h] BYREF

	if (!a2)
		return 0.0;
	v13 = (_QWORD*)(a2 + 64);
	if ((*(_QWORD*)(a2 + 64)
		|| (int)sub_140283D30(
			*(_QWORD*)(a2 + 16),
			*(void(__fastcall****)(_QWORD))(a2 + 24),
			*(int**)(a2 + 32),
			*(_QWORD*)(a2 + 40),
			*(_DWORD*)(a2 + 56),
			v13) >= 0)
		&& (v14 = (_QWORD*)*v13,
			v15 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)0i64, (__m128) * (unsigned int*)(a7 + 12))),
			(int)sub_1402B98B0(*(_QWORD*)(a2 + 24), v14, a3, a4, a5, a6, a7, (__int64)&v15, a8, &v16, a9) >= 0))
	{
		return v16;
	}
	else
	{
		return 0.0;
	}
}

