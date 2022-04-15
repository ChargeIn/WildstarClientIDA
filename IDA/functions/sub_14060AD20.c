#include "../winhttp.h"

//----- (000000014060AD20) ----------------------------------------------------
_QWORD* __fastcall sub_14060AD20(_QWORD* a1, _DWORD* a2, __int64 a3, unsigned int* a4)
{
	_DWORD* v4; // r10
	__int64 v6; // r8
	unsigned int v7; // r9d
	unsigned int* v8; // r11
	_DWORD* v10; // rbx
	__int64 v11; // rcx
	_DWORD* v12; // r11
	__int64 v13; // rcx

	v4 = a2;
	v6 = (a3 - (__int64)a2) >> 2;
	if (v6 <= 0)
	{
	LABEL_8:
		*a1 = v4;
		a1[1] = v4;
		return a1;
	}
	v7 = *a4;
	while (1)
	{
		v8 = &v4[v6 >> 1];
		if (v7 <= *v8)
			break;
		v4 = v8 + 1;
		v6 += -1 - (v6 >> 1);
	LABEL_7:
		if (v6 <= 0)
			goto LABEL_8;
	}
	if (v7 < *v8)
	{
		v6 >>= 1;
		goto LABEL_7;
	}
	v10 = v4;
	v11 = (4 * (v6 >> 1)) >> 2;
	while (v11 > 0)
	{
		if (v10[v11 >> 1] >= v7)
		{
			v11 >>= 1;
		}
		else
		{
			v10 += (v11 >> 1) + 1;
			v11 += -1 - (v11 >> 1);
		}
	}
	v12 = v8 + 1;
	v13 = ((__int64)v4 + 4 * v6 - (__int64)v12) >> 2;
	while (v13 > 0)
	{
		if (v7 >= v12[v13 >> 1])
		{
			v12 += (v13 >> 1) + 1;
			v13 += -1 - (v13 >> 1);
		}
		else
		{
			v13 >>= 1;
		}
	}
	*a1 = v10;
	a1[1] = v12;
	return a1;
}

