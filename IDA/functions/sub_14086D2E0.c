#include "../winhttp.h"

//----- (000000014086D2E0) ----------------------------------------------------
char __fastcall sub_14086D2E0(__int64 a1, int a2)
{
	__int64 v3; // r13
	__int64 v4; // rax
	__int64 v5; // r15
	__int64 v6; // rdx
	__int64 v7; // r12
	__int64 v8; // rdi
	__int64 v9; // rbp

	v3 = (unsigned int)(a2 + *(_DWORD*)(a1 + 16));
	v4 = sub_1408819F0(dword_140C10F20, 40 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 40i64;
		v7 = (unsigned int)v6;
		if (*(_QWORD*)a1)
		{
			if ((_DWORD)v6)
			{
				v8 = v4;
				v9 = (unsigned int)v6;
				do
				{
					if (v8)
						sub_140865E70(v8);
					sub_140865EF0(v8, (__int64*)(v8 - v5 + *(_QWORD*)a1));
					sub_140865E90((_QWORD*)(v8 - v5 + *(_QWORD*)a1));
					v8 += 40i64;
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		}
		*(_QWORD*)a1 = v5;
		*(_DWORD*)(a1 + 16) = v3;
		LOBYTE(v4) = 1;
		*(_QWORD*)(a1 + 8) = v5 + 40 * v7;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

