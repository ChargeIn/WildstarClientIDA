#include "../winhttp.h"

//----- (00000001406185A0) ----------------------------------------------------
__int64 __fastcall sub_1406185A0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rbx
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rsi
	int v8; // [rsp+20h] [rbp-18h]
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v9 = a1;
	v3 = sub_140432960(qword_140C65960, *a2);
	if (v3)
	{
		if (*(_DWORD*)(qword_140C65898 + 26180) == 30)
			v4 = *(_DWORD*)(qword_140C65898 + 26176);
		else
			v4 = 0;
		v5 = sub_1403D90D0(qword_140C65898, v4);
		LODWORD(v9) = 0;
		v6 = v5;
		sub_1406187E0(v3, a2 + 1, v5, &v9);
		if (v6 && (_DWORD)v9)
		{
			v8 = *(_DWORD*)(v6 + 8);
			Apollo_LUAEvent(
				*(_QWORD*)(qword_140C65898 + 29504),
				"SettlerBuildStatusUpdate",
				"iU",
				**(unsigned int**)(v3 + 8),
				v8);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65960: using guessed type __int64 qword_140C65960;

