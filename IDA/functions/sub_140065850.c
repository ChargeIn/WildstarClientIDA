#include "../winhttp.h"

//----- (0000000140065850) ----------------------------------------------------
__int64 __fastcall sub_140065850(__int64 a1, __int64 a2)
{
	__int16* v2; // r14
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // rcx
	char v8; // dl
	__int64 v9; // rcx

	v2 = *(__int16**)(a1 + 48);
	v5 = *(_QWORD*)v2;
	v6 = *(int*)(*(_QWORD*)v2 + 92i64);
	if (v2[36] + 1 > (int)v6)
		*(_QWORD*)(v5 + 48) = sub_140064690(
			*(_QWORD*)(a1 + 56),
			*(_QWORD*)(v5 + 48),
			(int*)(v5 + 92),
			0x10ui64,
			0x7FFF,
			aTooManyLocalVa);
	if ((int)v6 < *(_DWORD*)(v5 + 92))
	{
		v7 = 16 * v6;
		do
		{
			LODWORD(v6) = v6 + 1;
			v7 += 16i64;
			*(_QWORD*)(v7 + *(_QWORD*)(v5 + 48) - 16) = 0i64;
		} while ((int)v6 < *(_DWORD*)(v5 + 92));
	}
	*(_QWORD*)(*(_QWORD*)(v5 + 48) + 16i64 * v2[36]) = a2;
	if ((*(_BYTE*)(a2 + 9) & 3) != 0)
	{
		v8 = *(_BYTE*)(v5 + 9);
		if ((v8 & 4) != 0)
		{
			v9 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 32i64);
			if (*(_BYTE*)(v9 + 33) == 1)
				sub_14005C960(v9, a2);
			else
				*(_BYTE*)(v5 + 9) = v8 & 0xF8 | *(_BYTE*)(v9 + 32) & 3;
		}
	}
	return (unsigned int)v2[36]++;
}

