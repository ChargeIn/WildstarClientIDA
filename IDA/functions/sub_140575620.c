#include "../winhttp.h"

//----- (0000000140575620) ----------------------------------------------------
__int64 __fastcall sub_140575620(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_DWORD* a4,
	unsigned __int8(__fastcall* a5)(_DWORD*, _DWORD*))
{
	__int64 v5; // rbx
	__int64 i; // rdi
	__int64 v11; // rdi
	_DWORD* v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // rcx

	v5 = 2 * a2 + 2;
	for (i = a2; v5 < a3; v5 = 2 * v5 + 2)
	{
		if (a5((_DWORD*)(a1 + 16 * v5), (_DWORD*)(a1 + 16 * v5 - 16)))
			--v5;
		v11 = 2 * i;
		v12 = (_DWORD*)(a1 + 16 * v5);
		*(_DWORD*)(a1 + 8 * v11) = *v12;
		*(_DWORD*)(a1 + 8 * v11 + 4) = v12[1];
		*(_DWORD*)(a1 + 8 * v11 + 8) = v12[2];
		*(_DWORD*)(a1 + 8 * v11 + 12) = v12[3];
		i = v5;
	}
	if (v5 == a3)
	{
		v13 = 2 * i;
		v14 = a1 + 16 * v5;
		*(_DWORD*)(a1 + 8 * v13) = *(_DWORD*)(v14 - 16);
		*(_DWORD*)(a1 + 8 * v13 + 4) = *(_DWORD*)(v14 - 12);
		*(_DWORD*)(a1 + 8 * v13 + 8) = *(_DWORD*)(v14 - 8);
		*(_DWORD*)(a1 + 8 * v13 + 12) = *(_DWORD*)(v14 - 4);
		i = v5 - 1;
	}
	return sub_140575720(a1, i, a2, a4, a5);
}

