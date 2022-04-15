#include "../winhttp.h"

//----- (000000014071B3B0) ----------------------------------------------------
__int64 __fastcall sub_14071B3B0(__int64 a1, int* a2)
{
	int* v2; // rbx
	__int64 v4; // r8
	__int64 v5; // rax
	__int128 v6; // xmm0

	v2 = (int*)(a1 + 240);
	v4 = a1 + 240;
	if ((((unsigned __int8)(a1 - 16) | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)(a1 + 240), a2, 0xB8ui64);
	}
	else
	{
		v5 = 1i64;
		do
		{
			v6 = *(_OWORD*)a2;
			v4 += 128i64;
			a2 += 32;
			*(_OWORD*)(v4 - 128) = v6;
			*(_OWORD*)(v4 - 112) = *((_OWORD*)a2 - 7);
			*(_OWORD*)(v4 - 96) = *((_OWORD*)a2 - 6);
			*(_OWORD*)(v4 - 80) = *((_OWORD*)a2 - 5);
			*(_OWORD*)(v4 - 64) = *((_OWORD*)a2 - 4);
			*(_OWORD*)(v4 - 48) = *((_OWORD*)a2 - 3);
			*(_OWORD*)(v4 - 32) = *((_OWORD*)a2 - 2);
			*(_OWORD*)(v4 - 16) = *((_OWORD*)a2 - 1);
			--v5;
		} while (v5);
		*(_OWORD*)v4 = *(_OWORD*)a2;
		*(_OWORD*)(v4 + 16) = *((_OWORD*)a2 + 1);
		*(_OWORD*)(v4 + 32) = *((_OWORD*)a2 + 2);
		*(_QWORD*)(v4 + 48) = *((_QWORD*)a2 + 6);
	}
	return sub_140719EF0((__int64*)a1, v2);
}

