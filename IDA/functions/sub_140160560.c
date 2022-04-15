#include "../winhttp.h"

//----- (0000000140160560) ----------------------------------------------------
unsigned int* __fastcall sub_140160560(
	unsigned int* a1,
	unsigned int* a2,
	__int64* a3,
	unsigned int* a4,
	char a5,
	int a6)
{
	_DWORD* v9; // r10
	int v10; // r11d
	int v11; // ecx
	int v12; // eax
	unsigned int v13; // edi
	unsigned int v14; // ebp
	int v15; // r9d
	bool v16; // zf
	unsigned int v17; // edx
	int v18; // esi
	int v19; // eax
	int v20; // r8d
	unsigned int v21; // ecx
	unsigned __int64 v22; // r8
	__m128* v23; // r8
	int v25; // [rsp+40h] [rbp+8h] BYREF
	int v26; // [rsp+44h] [rbp+Ch]

	*a1 = *a2;
	a1[1] = a2[1];
	a1[2] = a2[2];
	a1[3] = a2[3];
	if (*a3)
	{
		sub_140101470((_QWORD*)*a3, &v25);
		v10 = v26;
		if (v26 > 0)
		{
			v11 = v25;
			if (v25 > 0 && v9[2] - *v9 > 0 && v9[3] - v9[1] > 0)
			{
				v12 = a6;
				*a1 += a6;
				a1[1] += v12;
				a1[3] -= v12;
				v13 = *a1;
				v14 = a1[1];
				v15 = v9[3] - v9[1];
				if (v10 > v15 || v11 > v9[2] - *v9)
				{
					v18 = v9[2] - *v9;
					if (v10 / v15 <= v11 / v18)
					{
						v20 = v10 * v18 / v11;
						v21 = (v15 - v20) / 2 + v14;
						a1[1] = v21;
						a1[3] = v21 + v20;
					}
					else
					{
						v19 = v11 * v15 / v10;
						if (a5)
							a1[2] = v13 + v19;
						else
							*a1 = a1[2] - v19;
					}
				}
				else
				{
					v16 = a5 == 0;
					v17 = (v15 - v10) / 2 + v14;
					a1[1] = v17;
					a1[3] = v17 + v10;
					if (v16)
						*a1 = a1[2] - v11;
					else
						a1[2] = v13 + v11;
				}
				v22 = *a4;
				if (v22 >= *(_QWORD*)(qword_140C63678 + 48))
					v23 = *(__m128**)(qword_140C63678 + 40);
				else
					v23 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v22);
				sub_140109A70(a3, a1, v23);
			}
		}
	}
	return a1;
}
// 1401605BD: variable 'v9' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;

