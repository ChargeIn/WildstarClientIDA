#include "../winhttp.h"

//----- (00000001404D8A00) ----------------------------------------------------
void __fastcall sub_1404D8A00(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // rdx
	__int16* v5; // rax
	__int64 v6; // rax
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx

	v4 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v4)
	{
		if (*(_DWORD*)(v4 + 268) == 2)
		{
			v6 = *(_QWORD*)(a1 + 25744);
			if (v6 && (v7 = *(_DWORD*)(v6 + 264)) != 0)
			{
				v8 = sub_1403D90D0(a1, v7);
				sub_14055B8B0(v9, v8, a3, a4);
			}
			else
			{
				sub_14055B8B0(a1, 0i64, a3, a4);
			}
		}
		else
		{
			v5 = sub_14034BDD0(a1, 363959);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v5, 0, 0i64);
		}
	}
}
// 1404D8A72: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

