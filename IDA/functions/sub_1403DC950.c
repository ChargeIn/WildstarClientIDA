#include "../winhttp.h"

//----- (00000001403DC950) ----------------------------------------------------
__int64 __fastcall sub_1403DC950(__int64 a1, int* a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rcx

	v4 = (_QWORD*)sub_1403D90D0(a1, *a2);
	if (v4)
	{
		v5 = v4[689];
		if (v5)
		{
			v6 = *(_QWORD*)(a1 + 120);
			if (v6)
			{
				if (a2[1] == *(_DWORD*)(v6 + 8))
				{
					v7 = v4[3];
					if (v7)
					{
						v8 = *(unsigned int*)(v7 + 272);
						if ((_DWORD)v8)
						{
						LABEL_10:
							(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v5 + 16i64))(
								v5,
								v8,
								0i64,
								0i64,
								0i64,
								0i64,
								0i64);
							return 0i64;
						}
						v9 = v4[26];
						if (v9)
						{
							v8 = *(unsigned int*)(v9 + 16);
							goto LABEL_10;
						}
					}
					v8 = 0i64;
					goto LABEL_10;
				}
			}
		}
	}
	return 0i64;
}

