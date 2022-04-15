#include "../winhttp.h"

//----- (00000001406119E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406119E0(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // rcx
	__int64 v4; // rdi
	unsigned __int64 v5; // rsi
	__int64 v6; // r15
	unsigned __int64 i; // rdi
	unsigned int v8; // esi
	__int64 v9; // rdi
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	unsigned __int64 v11; // rcx
	unsigned __int64 result; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v14; // [rsp+28h] [rbp-20h]

	v2 = 0;
	if (*(_QWORD*)(a1 + 16))
	{
		v3 = 0i64;
		do
		{
			++v2;
			**(_BYTE**)(*(_QWORD*)(a1 + 8) + 8 * v3) = 0;
			v3 = v2;
		} while ((unsigned __int64)v2 < *(_QWORD*)(a1 + 16));
	}
	v4 = qword_140C65898;
	v14 = 0i64;
	v13 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, &v13);
	sub_1403D6710(v4 + 184, &v13);
	sub_1403D6710(v4 + 280, &v13);
	sub_1403D6710(v4 + 304, &v13);
	v5 = v14;
	v6 = v13;
	for (i = 0i64; i < v5; ++i)
		sub_140611B80(a1, *(_DWORD***)(v6 + 8 * i));
	v8 = 0;
	while ((unsigned __int64)v8 < *(_QWORD*)(a1 + 16))
	{
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64 * v8);
		if (*(_BYTE*)v9)
		{
			++v8;
		}
		else
		{
			if (v9)
			{
				v10 = *(void(__fastcall****)(_QWORD, __int64))(v9 + 16);
				if (v10)
					(**v10)(v10, 1i64);
				*(_QWORD*)(v9 + 16) = 0i64;
				sub_14018B900(v9, 0);
			}
			sub_140007270(a1 + 8, v8);
			*(_BYTE*)(a1 + 24) = 1;
		}
	}
	v11 = *(_QWORD*)(a1 + 16);
	result = *(_QWORD*)a1;
	if (v11)
	{
		if (result >= v11)
			*(_QWORD*)a1 = 0i64;
	}
	else
	{
		*(_QWORD*)a1 = -1i64;
	}
	if (result != *(_QWORD*)a1)
		*(_BYTE*)(a1 + 24) = 1;
	if (v6)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

