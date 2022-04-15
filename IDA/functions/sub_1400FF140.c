#include "../winhttp.h"

//----- (00000001400FF140) ----------------------------------------------------
__int64 __fastcall sub_1400FF140(_DWORD* a1, _DWORD* a2, int* a3, _DWORD* a4, int a5, int a6)
{
	int v6; // esi
	int v7; // edx
	int v8; // ebp
	int v9; // r8d
	int v10; // r14d
	int v11; // r10d
	unsigned int v12; // ebx
	unsigned int v13; // edx
	unsigned int v14; // r11d
	unsigned int v15; // edi
	int v16; // ecx
	unsigned int v17; // edx
	unsigned int v18; // edx
	unsigned int v19; // edx
	bool v20; // cf
	unsigned int v21; // edx
	unsigned int v22; // r8d
	unsigned int v23; // r10d
	unsigned int v24; // ecx
	unsigned int v25; // ecx
	__int64 result; // rax
	unsigned int v27; // ecx

	if (a5)
	{
		v6 = *a3;
		v7 = a3[2];
	}
	else
	{
		v6 = a3[1];
		a1 = a2;
		v7 = a3[3];
	}
	v8 = a1[1];
	v9 = a1[4];
	v10 = a1[3];
	v11 = a1[2];
	v12 = a1[5] - v9;
	v13 = v7 - v6;
	v14 = v8 - *a1;
	v15 = v10 - v11;
	if (v12 + v14 <= v13)
	{
		v14 = v13;
		if (a1[1] - *a1 < v13)
			v14 = a1[1] - *a1;
		v19 = v13 - v14;
		v20 = v12 < v19;
		v12 = v19;
		if (v20)
			v12 = a1[5] - v9;
		v21 = v19 - v12;
		v15 = v21;
		if (a1[3] - v11 < v21)
			v15 = a1[3] - v11;
		v18 = v21 - v15;
	}
	else
	{
		v16 = a1[1] - *a1;
		if (v13 >> 1 < v14)
			v16 = v13 >> 1;
		if (v13 - v16 < v12)
			v12 = v13 - v16;
		v17 = v13 - v12;
		if (v17 - v16 < v15)
			v15 = v17 - v16;
		v18 = v17 - v15 - v16;
		if (v16 + v18 < v14)
			v14 = v16 + v18;
	}
	v22 = v9 - v10;
	v23 = v11 - v8;
	if (v23)
	{
		v23 = v18;
		if (v22)
		{
			v23 = v18 >> 1;
			v22 = v18 - (v18 >> 1);
		}
	}
	else if (v22)
	{
		v22 = v18;
	}
	*a4 = v6;
	if (a6)
	{
		a4[1] = v12 + v6;
		v24 = v12 + v6 + v22;
		a4[2] = v24;
		a4[3] = v24 + v15;
		v25 = v24 + v15 + v23;
		result = v25 + v14;
	}
	else
	{
		a4[1] = v14 + v6;
		v27 = v14 + v6 + v23;
		a4[2] = v27;
		a4[3] = v27 + v15;
		v25 = v27 + v15 + v22;
		result = v25 + v12;
	}
	a4[5] = result;
	a4[4] = v25;
	return result;
}

