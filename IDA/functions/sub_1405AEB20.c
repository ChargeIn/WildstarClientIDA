#include "../winhttp.h"

//----- (00000001405AEB20) ----------------------------------------------------
__int64 __fastcall sub_1405AEB20(__int64 a1, unsigned __int64 a2)
{
	__int64 v3; // rsi
	unsigned __int64 v5; // rbp
	_QWORD* v6; // rbx
	_DWORD** v7; // rbx
	_DWORD* v8; // rbx
	__m128* v9; // rax
	__m128* v10; // rdi
	__int32 v11; // edx
	__int16 v12; // cx
	unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

	v13 = a2;
	v3 = sub_1404C9E20(a1, *(_DWORD*)(a1 + 188), a2);
	if (!v3)
		return 1i64;
	v5 = (*(__int64(__fastcall**)(unsigned __int64*))(a1 + 392))(&v13);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 384) + 8 * (v5 % *(_QWORD*)(a1 + 376)));
	if (!v6)
		return 2147500037i64;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(unsigned __int64*, _QWORD*))(a1 + 400))(&v13, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			return 2147500037i64;
	}
	v7 = (_DWORD**)(v6 + 3);
	if (!v7)
		return 2147500037i64;
	v8 = *v7;
	if (*(_DWORD*)(v3 + 652))
		sub_1404C3B50((__int64*)v3);
	if (*(_DWORD*)(v3 + 656))
	{
		if (!v8[4] || v8[3])
		{
			v9 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 104));
			v10 = v9;
			if (v9)
			{
				v11 = v8[2];
				v12 = v11 ^ v9[2].m128_i32[2];
				v9[2].m128_i32[2] = v11;
				if ((v12 & 0x100) != 0)
					sub_14045BA00(v9);
				sub_14046C300(v10, 1, 0);
				v8[4] = 1;
			}
			return 0i64;
		}
		else
		{
			return 1i64;
		}
	}
	else
	{
		v8[3] = 1;
		return sub_1405AEA60(a1, (__int64)v8);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

