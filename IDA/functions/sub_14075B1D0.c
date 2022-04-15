#include "../winhttp.h"

//----- (000000014075B1D0) ----------------------------------------------------
__int64 __fastcall sub_14075B1D0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4)
{
	__int64 v4; // rax
	__int64 i; // rbx
	__int64 v10; // rdx
	__int64 v11; // rcx
	_DWORD* v12; // r8
	__int64 v13; // rcx
	_DWORD* v14; // r8
	__int64 v15; // r8
	unsigned int v16; // r9d
	_DWORD* v17; // rdx
	__int64 v18; // rax
	_DWORD* v19; // rcx
	_DWORD* v20; // rcx
	__int64 result; // rax

	v4 = 2 * a2 + 2;
	for (i = a2; v4 < a3; v12[4] = *(_DWORD*)(a1 + 4 * v10 + 16))
	{
		if (*(_DWORD*)(a1 + 20 * v4 + 4) < *(_DWORD*)(a1 + 20 * v4 - 16))
			--v4;
		v10 = 5 * v4;
		v11 = 5 * i;
		i = v4;
		v12 = (_DWORD*)(a1 + 4 * v11);
		LODWORD(v11) = *(_DWORD*)(a1 + 20 * v4);
		v4 = 2 * v4 + 2;
		*v12 = v11;
		v12[1] = *(_DWORD*)(a1 + 4 * v10 + 4);
		v12[2] = *(_DWORD*)(a1 + 4 * v10 + 8);
		v12[3] = *(_DWORD*)(a1 + 4 * v10 + 12);
	}
	if (v4 == a3)
	{
		v13 = 5 * i;
		i = v4 - 1;
		v14 = (_DWORD*)(a1 + 4 * v13);
		*v14 = *(_DWORD*)(a1 + 20 * v4 - 20);
		v14[1] = *(_DWORD*)(a1 + 20 * v4 - 16);
		v14[2] = *(_DWORD*)(a1 + 20 * v4 - 12);
		v14[3] = *(_DWORD*)(a1 + 20 * v4 - 8);
		v14[4] = *(_DWORD*)(a1 + 20 * v4 - 4);
	}
	v15 = (i - 1) / 2;
	if (i > a2)
	{
		v16 = a4[1];
		do
		{
			v17 = (_DWORD*)(a1 + 20 * v15);
			if (v17[1] >= v16)
				break;
			v18 = 5 * i;
			i = v15;
			v19 = (_DWORD*)(a1 + 4 * v18);
			*v19 = *v17;
			v19[1] = v17[1];
			v19[2] = v17[2];
			v19[3] = v17[3];
			v19[4] = v17[4];
			v15 = (v15 - 1) / 2;
		} while (i > a2);
	}
	v20 = (_DWORD*)(a1 + 20 * i);
	*v20 = *a4;
	v20[1] = a4[1];
	v20[2] = a4[2];
	v20[3] = a4[3];
	result = (unsigned int)a4[4];
	v20[4] = result;
	return result;
}

