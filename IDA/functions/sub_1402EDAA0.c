#include "../winhttp.h"

//----- (00000001402EDAA0) ----------------------------------------------------
int** __fastcall sub_1402EDAA0(__int64 a1, int** a2, _QWORD* a3)
{
	__int64 v3; // r9
	__int64 v6; // r8

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	while (v6)
	{
		v3 = v6;
		if (*(_DWORD*)a3 >= *(_DWORD*)(v6 + 32))
			v6 = *(_QWORD*)(v6 + 24);
		else
			v6 = *(_QWORD*)(v6 + 16);
	}
	sub_140055E80(a1, a2, v6, v3, a3);
	return a2;
}

