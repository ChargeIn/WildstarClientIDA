#include "../winhttp.h"

//----- (00000001408A76E0) ----------------------------------------------------
__int64 __fastcall sub_1408A76E0(__int64 a1, __int64 a2)
{
	int* v2; // rbx
	int* v5; // rdx
	__int64 v6; // rax
	__int128 v7; // xmm0
	__int64 result; // rax

	v2 = (int*)(a1 + 8);
	*(_QWORD*)a1 = off_1409A9ED0;
	sub_1408A7540(a1 + 8);
	v5 = (int*)(a2 + 8);
	if ((((unsigned __int8)v2 | (unsigned __int8)(a2 + 8)) & 0xF) != 0)
	{
		sub_1407DB590(v2, v5, 0x94ui64);
	}
	else
	{
		v6 = 1i64;
		do
		{
			v7 = *(_OWORD*)v5;
			v2 += 32;
			v5 += 32;
			*((_OWORD*)v2 - 8) = v7;
			*((_OWORD*)v2 - 7) = *((_OWORD*)v5 - 7);
			*((_OWORD*)v2 - 6) = *((_OWORD*)v5 - 6);
			*((_OWORD*)v2 - 5) = *((_OWORD*)v5 - 5);
			*((_OWORD*)v2 - 4) = *((_OWORD*)v5 - 4);
			*((_OWORD*)v2 - 3) = *((_OWORD*)v5 - 3);
			*((_OWORD*)v2 - 2) = *((_OWORD*)v5 - 2);
			*((_OWORD*)v2 - 1) = *((_OWORD*)v5 - 1);
			--v6;
		} while (v6);
		*(_OWORD*)v2 = *(_OWORD*)v5;
		v2[4] = v5[4];
	}
	*(_BYTE*)(a1 + 25) = 1;
	*(_BYTE*)(a1 + 45) = 1;
	*(_BYTE*)(a1 + 65) = 1;
	*(_BYTE*)(a1 + 85) = 1;
	*(_BYTE*)(a1 + 105) = 1;
	*(_BYTE*)(a1 + 125) = 1;
	result = a1;
	*(_BYTE*)(a1 + 144) = 1;
	return result;
}
// 1409A9ED0: using guessed type __int64 (__fastcall *off_1409A9ED0[6])();

