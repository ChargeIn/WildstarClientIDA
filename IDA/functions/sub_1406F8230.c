#include "../winhttp.h"

//----- (00000001406F8230) ----------------------------------------------------
__int64 __fastcall sub_1406F8230(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbp
	__int64 v4; // rcx
	unsigned int v5; // r14d
	__int64 v6; // r15
	unsigned int v7; // edi
	__int64 v8; // rsi
	_DWORD* v9; // rbx
	int v10; // eax
	__int64 v11; // rax
	__int64 v13; // r8

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, *v2);
		if (v3)
		{
			v4 = qword_140C65898;
			v5 = 2;
			v6 = 565i64;
		LABEL_4:
			v7 = 0;
			v8 = 0i64;
			while (1)
			{
				if (*(_QWORD*)(v4 + 120))
				{
					v9 = *(_DWORD**)(v4 + 8 * (v6 + v8));
					if (v9)
					{
						v10 = v9[128];
						if (v10 && v10 != *(_DWORD*)(v3 + 8))
						{
						LABEL_13:
							++v5;
							v6 += 12i64;
							if (v5 <= 6)
								goto LABEL_4;
							break;
						}
						if ((*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v9 + 8i64))(*(_QWORD*)(v4 + 8 * (v6 + v8))) == 11
							&& (*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v9 + 24i64))(v9) == 2)
						{
							v13 = *(_QWORD*)(a1 + 16);
							*(_DWORD*)(v13 + 8) = 3;
							*(double*)v13 = (double)(int)(v7 + 12 * v5);
							goto LABEL_15;
						}
						v4 = qword_140C65898;
					}
				}
				++v7;
				++v8;
				if (v7 >= 0xC)
					goto LABEL_13;
			}
		}
	}
	v11 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v11 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v11 + 8) = 3;
LABEL_15:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 1406F829F: conditional instruction was optimized away because edi.4<Cu
// 1406F82A5: conditional instruction was optimized away because r14d.4<7u
// 140C65898: using guessed type __int64 qword_140C65898;

