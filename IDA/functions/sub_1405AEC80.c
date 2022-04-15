#include "../winhttp.h"

//----- (00000001405AEC80) ----------------------------------------------------
__int64 __fastcall sub_1405AEC80(__int64 a1)
{
	unsigned __int64** i; // r14
	int v3; // edx
	__int64 v4; // rbp
	unsigned __int64 v5; // rdi
	_QWORD* v6; // rbx
	_DWORD* v8; // rdi
	__m128* v9; // rbx
	__int32 v10; // eax
	__int16 v11; // cx
	unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF

	for (i = *(unsigned __int64***)(a1 + 416); i != *(unsigned __int64***)(a1 + 424); ++i)
	{
		v3 = *(_DWORD*)(a1 + 188);
		v12 = **i;
		v4 = sub_1404C9E20(a1, v3, v12);
		if (v4)
		{
			v5 = (*(__int64(__fastcall**)(unsigned __int64*))(a1 + 392))(&v12);
			v6 = *(_QWORD**)(*(_QWORD*)(a1 + 384) + 8 * (v5 % *(_QWORD*)(a1 + 376)));
			if (!v6)
				return 2147500037i64;
			while (v5 != *v6 || !(*(unsigned int(__fastcall**)(unsigned __int64*, _QWORD*))(a1 + 400))(&v12, v6 + 2))
			{
				v6 = (_QWORD*)v6[1];
				if (!v6)
					return 2147500037i64;
			}
			if (v6 == (_QWORD*)-24i64)
				return 2147500037i64;
			v8 = (_DWORD*)v6[3];
			if (*(_DWORD*)(v4 + 652))
				sub_1404C3B50((__int64*)v4);
			if (*(_DWORD*)(v4 + 656))
			{
				if (!v8[4] || v8[3])
				{
					v9 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 104));
					if (v9)
					{
						v10 = v8[2];
						v11 = v10 ^ v9[2].m128_i32[2];
						v9[2].m128_i32[2] = v10;
						if ((v11 & 0x100) != 0)
						{
							if ((v10 & 0x100) != 0)
							{
								v9[308].m128_i32[2] = 1;
								v9[4].m128_i32[0] = 0;
								sub_1407E4830(&v9[33].m128_i32[3], 0i64, 0x2Cui64);
							}
							else
							{
								v9[308].m128_i32[2] = 0;
							}
						}
						sub_14046C300(v9, 1, 0);
						v8[4] = 1;
					}
				}
			}
			else
			{
				v8[3] = 1;
				if ((int)sub_1405AEA60(a1, (__int64)v8) < 0)
					return 2147500037i64;
			}
		}
	}
	return 0i64;
}
// 1405AECC1: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

