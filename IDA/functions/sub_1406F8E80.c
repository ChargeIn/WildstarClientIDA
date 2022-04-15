#include "../winhttp.h"

//----- (00000001406F8E80) ----------------------------------------------------
__int64 __fastcall sub_1406F8E80(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rsi
	unsigned __int64 v4; // rbp
	__int64 v5; // rdi
	unsigned __int64 i; // rbx
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v13; // [rsp+28h] [rbp-10h]

	v1 = qword_140C65898;
	v3 = 0i64;
	v13 = 0i64;
	v12 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, &v12);
	sub_1403D6710(v1 + 184, &v12);
	sub_1403D6710(v1 + 280, &v12);
	sub_1403D6710(v1 + 304, &v12);
	v4 = v13;
	v5 = v12;
	for (i = 0i64; i < v4; ++i)
	{
		if ((unsigned int)sub_140569F10(*(_QWORD*)(v5 + 8 * i)))
		{
			v8 = *(_QWORD*)(v5 + 8 * i);
			v9 = *(_QWORD*)(v8 + 72);
			if (!v9)
				v9 = *(_QWORD*)(v8 + 64) + 8i64;
			v3 += sub_1403B54A0(v7, *(_QWORD*)(v8 + 64), v9, *(float*)(v8 + 132));
		}
	}
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)(int)v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return 1i64;
}
// 1406F8F2F: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

