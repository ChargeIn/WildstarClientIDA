#include "../winhttp.h"

//----- (000000014083CFC0) ----------------------------------------------------
char __fastcall sub_14083CFC0(__int64 a1, int a2)
{
	unsigned int v3; // ebp
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // r10
	__int64 v10; // r8
	_QWORD* v11; // r8

	v3 = a2 + *(_DWORD*)(a1 + 16);
	v4 = sub_1408819F0(dword_140C10F20, 16i64 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
		v7 = (unsigned int)v6;
		if (*(_QWORD*)a1)
		{
			if ((_DWORD)v6)
			{
				v8 = v5;
				v9 = (unsigned int)v7;
				do
				{
					if (v8)
						*(_QWORD*)(v8 + 8) = 1i64;
					v10 = v8 - v5;
					v8 += 16i64;
					v11 = (_QWORD*)(*(_QWORD*)a1 + v10);
					*(_QWORD*)(v8 - 16) = *v11;
					*(_QWORD*)(v8 - 8) = v11[1];
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		}
		*(_DWORD*)(a1 + 16) = v3;
		*(_QWORD*)a1 = v5;
		LOBYTE(v4) = 1;
		*(_QWORD*)(a1 + 8) = v5 + 16 * v7;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

