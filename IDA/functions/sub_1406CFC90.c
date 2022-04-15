#include "../winhttp.h"

//----- (00000001406CFC90) ----------------------------------------------------
__int64 __fastcall sub_1406CFC90(_QWORD* a1)
{
	__int64 v2; // rbx
	_DWORD* v3; // rax
	__int64* v4; // rax
	__int64 v5; // rax
	int* v6; // rcx
	int v7; // esi
	unsigned int v8; // eax
	char v9; // dl

	v2 = sub_1406CFB40(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		{
			v4 = (__int64*)sub_140056AB0(a1, 2u);
			if (v4)
			{
				v5 = *v4;
				if (v5)
				{
					if (*(_DWORD*)(v5 + 1184) && *(_QWORD*)(v5 + 8))
					{
						if (*(_DWORD*)(v5 + 1184))
							v6 = *(int**)(v5 + 8);
						else
							v6 = 0i64;
						v7 = *v6;
						v8 = sub_140056D60(a1, 3u);
						*(_QWORD*)(v2 + 2216) = 15i64;
						*(_QWORD*)(v2 + 2232) = 0i64;
						*(_DWORD*)(v2 + 2248) = 0;
						*(_DWORD*)(v2 + 2260) = 0;
						*(_DWORD*)(v2 + 2252) = 1;
						if (v8)
						{
							*(_DWORD*)(v2 + 2212) = 0;
							*(_DWORD*)(v2 + 2208) = v7;
							*(_QWORD*)(v2 + 2240) = v8;
							v9 = 1;
						}
						else
						{
							*(_QWORD*)(v2 + 2208) = 0i64;
							*(_QWORD*)(v2 + 2240) = 0i64;
							v9 = 0;
						}
						sub_1400D42F0(v2, v9, 0, 4.0);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

