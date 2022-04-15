#include "../winhttp.h"

//----- (0000000140846320) ----------------------------------------------------
char __fastcall sub_140846320(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rsi
	unsigned __int16 v7; // bp
	int* v8; // r14
	_QWORD* v9; // rbx

	if (*(_BYTE*)(a2 + 88))
	{
		LOBYTE(v4) = 0;
	}
	else
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a2 + 64) + 16i64);
		if (v5)
			v5 = *(_QWORD*)(v5 + 24);
		if ((*(_BYTE*)(v5 + 382) & 0x40) == 0)
			sub_1408605D0(v5);
		v6 = *(_QWORD*)(v5 + 496);
		if (v6 && *(_BYTE*)(a1 + 137) && (unsigned int)sub_140845ED0(a1, v5))
		{
			v7 = *(_WORD*)(a2 + 16);
			v8 = *(int**)a2;
			v4 = (_QWORD*)sub_1408819F0(dword_140C10F28, 24i64);
			v9 = v4;
			if (v4)
			{
				*v4 = 0i64;
				if (*(float*)(v6 + 16) > 0.1
					&& (unsigned int)sub_140868400((__int64)v4, v7, *(unsigned __int16*)(v6 + 52)) == 1)
				{
					sub_1407DB590((int*)*v9, v8, 4 * v7 * (unsigned __int64)(*(_WORD*)(v6 + 54) & 7));
					*((_WORD*)v9 + 9) = *(_WORD*)(a2 + 18);
				}
				*(_QWORD*)(a2 + 80) = v9;
				LOBYTE(v4) = 1;
			}
		}
		else
		{
			LOBYTE(v4) = 0;
		}
	}
	return (char)v4;
}
// 140C10F28: using guessed type int dword_140C10F28;

