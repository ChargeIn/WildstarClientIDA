#include "../winhttp.h"

//----- (0000000140529FF0) ----------------------------------------------------
__int64 __fastcall sub_140529FF0(__int64 a1)
{
	__m128* v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	unsigned int v8; // eax
	__int64 v9; // rax
	unsigned int(__fastcall * **v10)(_QWORD); // rdi
	int v11; // ebx
	__m128 v12; // [rsp+20h] [rbp-18h] BYREF

	if (!*(_QWORD*)(a1 + 1152))
		return 1i64;
	v3 = *(__m128**)(qword_140C65898 + 25744);
	if (!v3)
	{
		v3 = *(__m128**)(qword_140C65898 + 120);
		if (!v3)
			return 0i64;
	}
	v4 = *(_QWORD*)(qword_140C65898 + 29256);
	v12 = _mm_add_ps((__m128)xmmword_140B7A450, v3[286]);
	v5 = (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v4 + 456i64))(v4, &v12);
	v6 = v5;
	if (!v5 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5))
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 32i64))(*(_QWORD*)(a1 + 1152)))
			return 1i64;
		v10 = *(unsigned int(__fastcall****)(_QWORD))(a1 + 1152);
		v11 = sub_14052B8D0(a1, (__int64)v3);
		if (v11 == (**v10)(v10))
			return 1i64;
	}
	else if (*(_DWORD*)(a1 + 1264) != 4)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 216i64))(v7);
		v9 = sub_14024DB80(v8);
		if (!v9
			|| (*(_BYTE*)(v9 + 28) & 2) != 0
			|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 32i64))(*(_QWORD*)(a1 + 1152)))
		{
			return 1i64;
		}
	}
	return 0i64;
}
// 140B7A450: using guessed type __int128 xmmword_140B7A450;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140529FF0: using guessed type __m128 var_18;

