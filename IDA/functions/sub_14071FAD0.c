#include "../winhttp.h"

//----- (000000014071FAD0) ----------------------------------------------------
__int64 __fastcall sub_14071FAD0(__int64 a1, int* a2)
{
	int* v2; // rdi
	_OWORD* v4; // r8
	__int64 v5; // rax
	__int128 v6; // xmm0

	v2 = (int*)(a1 + 232);
	v4 = (_OWORD*)(a1 + 232);
	if ((((unsigned __int8)(a1 - 24) | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)(a1 + 232), a2, 0xA0ui64);
	}
	else
	{
		v5 = 1i64;
		do
		{
			v6 = *(_OWORD*)a2;
			v4 += 8;
			a2 += 32;
			*(v4 - 8) = v6;
			*(v4 - 7) = *((_OWORD*)a2 - 7);
			*(v4 - 6) = *((_OWORD*)a2 - 6);
			*(v4 - 5) = *((_OWORD*)a2 - 5);
			*(v4 - 4) = *((_OWORD*)a2 - 4);
			*(v4 - 3) = *((_OWORD*)a2 - 3);
			*(v4 - 2) = *((_OWORD*)a2 - 2);
			*(v4 - 1) = *((_OWORD*)a2 - 1);
			--v5;
		} while (v5);
		*v4 = *(_OWORD*)a2;
		v4[1] = *((_OWORD*)a2 + 1);
	}
	if (*(_DWORD*)(a1 + 384))
		return sub_140719EF0((__int64*)a1, v2);
	else
		return 2147500037i64;
}

