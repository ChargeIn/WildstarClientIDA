#include "../winhttp.h"

//----- (0000000140540B30) ----------------------------------------------------
__int64 __fastcall sub_140540B30(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // r11
	_QWORD* v4; // rcx
	__int64 v5; // r10
	unsigned int v6; // edx
	int v7; // r8d
	int v8; // r9d
	unsigned __int64 v9; // rbx
	_DWORD* v10; // rax
	unsigned __int64 v11; // rcx
	__int64 result; // rax
	__int64 v13; // rcx
	unsigned int v14; // ecx

	v2 = a2;
	v4 = *(_QWORD**)(a1 + 312);
	if (*(_DWORD*)(v4[14] + 24i64) != 1 && *(_DWORD*)(v4[14] + 24i64) != 3)
	{
		if (*(_DWORD*)(v4[14] + 24i64) == 8)
		{
			v5 = v4[11];
			if (v5)
			{
				if ((unsigned int)v2 < *(_DWORD*)(a1 + 416))
				{
					v6 = 0;
					if (v2 < *(_QWORD*)(v5 + 8))
					{
						v7 = 0;
						v8 = 0;
						v9 = 0i64;
						if ((__int64)(v2 + 1) < 2)
							goto LABEL_11;
						v10 = *(_DWORD**)v5;
						v11 = (v2 + 1) >> 1;
						v9 = 2 * v11;
						do
						{
							v7 += *v10;
							v8 += v10[1];
							v10 += 2;
							--v11;
						} while (v11);
						if (v9 <= v2)
							LABEL_11:
						v6 = *(_DWORD*)(*(_QWORD*)v5 + 4 * v9);
						v6 += v8 + v7;
					}
					return v6;
				}
			}
		}
		return 0i64;
	}
	v13 = v4[10];
	if (!v13 || (*(_BYTE*)(v13 + 12) & 1) == 0)
		return 0i64;
	result = (unsigned int)(*(_DWORD*)v13 + v2 * *(_DWORD*)(v13 + 8));
	v14 = *(_DWORD*)(v13 + 4);
	if ((unsigned int)result > v14)
		return v14;
	return result;
}

