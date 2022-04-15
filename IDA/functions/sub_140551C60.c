#include "../winhttp.h"

//----- (0000000140551C60) ----------------------------------------------------
__int64 __fastcall sub_140551C60(__int64 a1, _DWORD* a2)
{
	int v2; // eax
	int* v4; // rax
	int* v5; // rbx
	__int64 v6; // rdx
	int v7; // ecx
	int v8; // r8d
	int v9; // ecx
	int v10; // edx

	v2 = a2[5];
	if ((v2 & 1) == 0 || (v2 & 2) != 0)
		return 1i64;
	if (a2[2] != 1)
		return 1i64;
	v4 = sub_1400B5DF0(qword_140C658F0, a2[3], 0i64);
	v5 = v4;
	if (v4)
	{
		if ((unsigned int)sub_1403CA2B0(qword_140C65898, v4[103]))
		{
			v6 = *(_QWORD*)(qword_140C65898 + 120);
			if (v6)
				v7 = *(_DWORD*)(v6 + 216);
			else
				LOBYTE(v7) = 17;
			v8 = v5[100];
			if (!v8 || (v8 & (1 << (v7 - 1))) != 0)
			{
				if (v6)
					v9 = *(_DWORD*)(v6 + 220);
				else
					LOBYTE(v9) = 23;
				v10 = v5[99];
				if (!v10 || (v10 & (1 << (v9 - 1))) != 0)
					return 1i64;
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

