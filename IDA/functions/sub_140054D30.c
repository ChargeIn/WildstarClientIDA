#include "../winhttp.h"

//----- (0000000140054D30) ----------------------------------------------------
_QWORD* __fastcall sub_140054D30(__int64 a1, _QWORD* a2, int a3)
{
	__int64 v4; // rax
	int* v5; // rdx
	unsigned __int64 v6; // r8

	v4 = sub_1407DB4B8(a3);
	a2[3] = 15i64;
	v5 = (int*)"unknown error";
	if (v4)
		v5 = (int*)v4;
	v6 = 0i64;
	a2[2] = 0i64;
	*(_BYTE*)a2 = 0;
	if (*(_BYTE*)v5)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)v5 + v6));
	}
	sub_14003ADD0(a2, v5, v6);
	return a2;
}

