#include "../winhttp.h"

//----- (0000000140869CC0) ----------------------------------------------------
__int64 __fastcall sub_140869CC0(__int64 a1, unsigned int** a2)
{
	unsigned int v4; // edi
	unsigned int v5; // esi
	__int64 v6; // rax
	unsigned int v7; // ebx
	__int64 v9; // [rsp+48h] [rbp+10h]

	v4 = **a2;
	v5 = 1;
	++* a2;
	if (!v4)
		return v5;
	v6 = sub_1408819F0(dword_140C10F20, 8i64 * v4);
	*(_QWORD*)(a1 + 168) = v6;
	*(_QWORD*)(a1 + 176) = v6;
	if (v6)
	{
		v7 = 0;
		*(_DWORD*)(a1 + 184) = v4;
		do
		{
			BYTE4(v9) = 0;
			LODWORD(v9) = *(*a2)++;
			v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 80i64))(a1, v9);
			if (v5 != 1)
				break;
			++v7;
		} while (v7 < v4);
		return v5;
	}
	return 52i64;
}
// 140869D1D: conditional instruction was optimized away because edi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

