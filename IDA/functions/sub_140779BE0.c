#include "../winhttp.h"

//----- (0000000140779BE0) ----------------------------------------------------
_BOOL8 __fastcall sub_140779BE0(__int64 a1)
{
	__int64 v1; // rbx
	_BOOL8 result; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__m128* v6; // rbp
	__int64 v7; // rax
	__m128* v8; // rsi
	__int64 v9; // rdx
	float v10; // xmm7_4
	float v11; // xmm0_4
	unsigned int v12; // eax
	unsigned int v13; // eax

	v1 = *(_QWORD*)(a1 + 136);
	if (!v1)
		return 0i64;
	v4 = *(_QWORD*)(v1 + 312);
	if (!v4)
		return 1i64;
	v5 = *(_QWORD*)(v4 + 112);
	if (*(float*)(v5 + 112) <= 0.0 && *(float*)(v5 + 116) <= 0.0)
		return 1i64;
	v6 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 108));
	v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 112));
	v8 = (__m128*)v7;
	if (!v6 || !v7)
		return 1i64;
	v9 = *(_QWORD*)(v4 + 112);
	v10 = *(float*)(v9 + 108);
	v11 = *(float*)(v9 + 112);
	if (*(_DWORD*)(v1 + 188))
	{
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1);
		v10 = sub_1403AD860(qword_140C65B70, v12, (__int64)v8);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1);
		v11 = sub_1403AD8F0(qword_140C65B70, v13, (__int64)v8);
	}
	result = sub_1403AD690(v6, v8, v10, v11, 0.0);
	if (result)
		return 1i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

