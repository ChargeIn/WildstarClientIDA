#include "../winhttp.h"

//----- (00000001408BDE80) ----------------------------------------------------
__int64 __fastcall sub_1408BDE80(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	int v4; // esi
	double v5; // xmm0_8
	double v6; // xmm0_8
	__int64 v7; // rcx
	BOOL v8; // eax
	int* v9; // rbx
	int v10; // eax
	int v11; // xmm0_4

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 4);
	v4 = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 24) = v4;
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 12) * 0.050000001);
	*(_DWORD*)(a1 + 16) = LODWORD(v5);
	v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 12) * 0.050000001);
	v7 = 0i64;
	*(_DWORD*)(a1 + 20) = LODWORD(v6);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(v2 + 16);
	v8 = *(_BYTE*)(v2 + 20) != 0;
	v9 = (int*)(v2 + 25);
	*(_DWORD*)(a1 + 32) = v8;
	v10 = *(v9 - 1);
	*(_DWORD*)(a1 + 36) = v10;
	if (v10 == 1 && v4)
	{
		do
		{
			v11 = *v9++;
			*(_DWORD*)(a1 + 4 * v7 + 40) = v11;
			v7 = (unsigned int)(v7 + 1);
		} while ((unsigned int)v7 < *(_DWORD*)(a1 + 24));
	}
	*(_BYTE*)(a1 + 104) = 1;
	return 1i64;
}

