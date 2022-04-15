#include "../winhttp.h"

//----- (000000014075AD80) ----------------------------------------------------
void __fastcall sub_14075AD80(_DWORD* a1, _DWORD* a2)
{
	_DWORD* i; // r8
	int v4; // r10d
	unsigned int v5; // r9d
	int v6; // ebx
	int v7; // edi
	int v8; // esi
	_DWORD* v9; // rax
	_DWORD* j; // rdx

	for (i = a1; i != a2; j[4] = v8)
	{
		v4 = *i;
		v5 = i[1];
		v6 = i[2];
		v7 = i[3];
		v8 = i[4];
		v9 = i - 5;
		for (j = i; v5 < v9[1]; v9 -= 5)
		{
			*j = *v9;
			j[1] = v9[1];
			j[2] = v9[2];
			j[3] = v9[3];
			j[4] = v9[4];
			j = v9;
		}
		*j = v4;
		j[1] = v5;
		j[2] = v6;
		i += 5;
		j[3] = v7;
	}
}

