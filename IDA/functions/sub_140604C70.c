#include "../winhttp.h"

//----- (0000000140604C70) ----------------------------------------------------
void __fastcall sub_140604C70(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v7; // rax
	unsigned __int64 v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rax
	int v11; // ebx
	__int64 v12; // rcx
	unsigned int v13; // eax
	__int64 v14; // rcx
	int v15; // [rsp+20h] [rbp-28h]

	v4 = *(_QWORD*)(a1 + 64);
	if (v4
		&& a2
		&& a3
		&& *(_DWORD*)(a2 + 120) >= *(_DWORD*)(a3 + 120)
		&& (!*(_DWORD*)(a3 + 272) || !*(_QWORD*)(a3 + 280)))
	{
		if (*(_DWORD*)(a2 + 272) && *(_QWORD*)(a2 + 280))
		{
			v7 = sub_14079EE20(v4, a2 + 272);
			if (v7)
				sub_1406075F0((__int64*)(v7 + 288), a2 + 16);
		}
		else if (*(_QWORD*)(a2 + 296))
		{
			v8 = 0i64;
			v9 = 0i64;
			do
			{
				v10 = sub_14079EE20(*(_QWORD*)(a1 + 64), v9 + *(_QWORD*)(a2 + 288));
				if (v10)
				{
					*(_DWORD*)(v10 + 272) = 0;
					*(_QWORD*)(v10 + 280) = 0i64;
					if (*(_DWORD*)(v10 + 16) == *(_DWORD*)(a1 + 80) && *(_QWORD*)(v10 + 24) == *(_QWORD*)(a1 + 88))
						sub_140604F10(a1, 0, 0);
				}
				++v8;
				v9 += 16i64;
			} while (v8 < *(_QWORD*)(a2 + 296));
			*(_QWORD*)(a2 + 296) = 0i64;
		}
		*(_QWORD*)(a2 + 272) = *(_QWORD*)(a3 + 16);
		*(_QWORD*)(a2 + 280) = *(_QWORD*)(a3 + 24);
		sub_140573D10((__int64*)(a3 + 288), (_QWORD*)(a2 + 16));
		v11 = sub_1403D9500(qword_140C65898, (int*)(a3 + 16));
		v13 = sub_1403D9500(v12, (int*)(a2 + 16));
		v15 = v11;
		sub_1400EA3E0(*(_QWORD*)(v14 + 29504), "Group_MentorRelationship", byte_1409EA454, v13, v15);
	}
}
// 140604D2A: conditional instruction was optimized away because rax.8!=0
// 140604DE7: variable 'v12' is possibly undefined
// 140604DEC: variable 'v14' is possibly undefined
// 1409EA454: using guessed type _BYTE byte_1409EA454[80];
// 140C65898: using guessed type __int64 qword_140C65898;

