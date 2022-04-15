#include "../winhttp.h"

//----- (00000001406F8D90) ----------------------------------------------------
__int64 __fastcall sub_1406F8D90(__int64 a1)
{
	__int64 v1; // rbx
	int v3; // ebp
	unsigned __int64 v4; // rsi
	__int64 v5; // rdi
	int v6; // r15d
	__int64 v7; // rbx
	_DWORD* v8; // rcx
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v11; // [rsp+28h] [rbp-20h]

	v1 = qword_140C65898;
	v3 = 0;
	v11 = 0i64;
	v10 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, &v10);
	sub_1403D6710(v1 + 184, &v10);
	sub_1403D6710(v1 + 280, &v10);
	sub_1403D6710(v1 + 304, &v10);
	v4 = v11;
	v5 = v10;
	v6 = 0;
	v7 = 0i64;
	if (v11)
	{
		while (!(unsigned int)sub_140569F10(*(_QWORD*)(v5 + 8 * v7)))
		{
			if (++v7 >= v4)
				goto LABEL_6;
		}
		v6 = 1;
	}
LABEL_6:
	v8 = *(_DWORD**)(a1 + 16);
	LOBYTE(v3) = v6 != 0;
	v8[2] = 1;
	*v8 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

