#include "../winhttp.h"

//----- (0000000140771A30) ----------------------------------------------------
__int64 __fastcall sub_140771A30(__int64 a1)
{
	int v2; // edi
	int** v3; // rbx
	int* v4; // rax
	int v5; // xmm0_4

	sub_1401095E0(a1 + 32);
	v2 = 5;
	v3 = (int**)(a1 + 112);
	do
	{
		*(v3 - 1) = 0i64;
		*v3 = 0i64;
		v3[1] = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(v3 - 1) = v4;
		*v3 = v4;
		v3[1] = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = dword_140C63664;
		*(v3 - 4) = 0i64;
		*((_DWORD*)v3 - 5) = 1065353216;
		*((_DWORD*)v3 - 6) = v5;
		v3 += 6;
		--v2;
	} while (v2 >= 0);
	return a1;
}
// 140C63664: using guessed type int dword_140C63664;

