#include "../winhttp.h"

//----- (00000001403091C0) ----------------------------------------------------
void sub_1403091C0(unsigned __int16** a1, unsigned int a2, float* a3, ...)
{
	unsigned int v3; // r9d
	va_list v7; // r14
	__int64 v8; // rcx
	unsigned __int16* v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // r9
	float v12; // xmm3_4
	float v13; // xmm0_4
	int v14; // r11d
	int v15; // r10d
	__int64 v16; // r11
	unsigned __int16* v17; // rbx
	int v18; // r11d
	__int64 v19; // r9
	float v20; // xmm3_4
	float v21; // xmm0_4
	__int64 v22; // r11
	unsigned int v23; // r11d
	unsigned int v24; // edx
	__int64 v25; // rcx
	__int64 v26; // r15
	int v27; // r11d
	float v28; // xmm0_4
	unsigned int v29; // r11d
	__int64 v30; // rbx
	__int64 v31; // r10
	float v32; // xmm3_4
	float v33; // xmm0_4
	__int64 v34; // r11
	__int64 v35; // [rsp+58h] [rbp+20h] BYREF
	va_list va; // [rsp+58h] [rbp+20h]
	_DWORD* v37; // [rsp+60h] [rbp+28h]
	va_list va1; // [rsp+68h] [rbp+30h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v35 = va_arg(va1, _QWORD);
	v37 = va_arg(va1, _DWORD*);
	v3 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		sub_1401C96D0((__int64*)va, 0.0);
		*a3 = sub_1401C9770((unsigned __int16*)va);
		return;
	}
	if (v3 == 1)
	{
		*a3 = sub_1401C9770(a1[2]);
		return;
	}
	v7 = (va_list)v37;
	if (v37)
	{
		v8 = (unsigned int)*v37;
		v9 = a1[1];
		if (*(_DWORD*)&v9[2 * v8] <= a2)
		{
			v10 = (unsigned int)(v8 + 1);
			if (a2 < *(_DWORD*)&v9[2 * v10])
			{
				v12 = sub_1401C9770(&a1[2][v8]);
				v13 = sub_1401C9770((unsigned __int16*)(v11 + 2 * v10));
				*a3 = (float)((float)(v13 - v12) * (float)((float)(int)(a2 - v14) / (float)(v15 - v14))) + v12;
				return;
			}
		}
		v16 = (unsigned int)(v8 + 1);
		*v37 = v16;
		v3 = *(_DWORD*)a1;
		if ((unsigned int)v16 < *(_DWORD*)a1 - 1)
		{
			v17 = a1[1];
			if (*(_DWORD*)&v17[2 * v16] <= a2 && a2 < *(_DWORD*)&v17[2 * (unsigned int)(v8 + 2)])
			{
				v20 = sub_1401C9770(&a1[2][v16]);
				v21 = sub_1401C9770((unsigned __int16*)(v19 + 2i64 * (unsigned int)(v18 + 1)));
				*a3 = (float)((float)(v21 - v20)
					* (float)((float)(int)(a2 - *(_DWORD*)&v17[2 * v22])
						/ (float)(*(_DWORD*)&v17[2 * (unsigned int)(v22 + 1)] - *(_DWORD*)&v17[2 * v22])))
					+ v20;
				return;
			}
		}
	}
	else
	{
		va_copy(v7, va);
	}
	v23 = 0;
	v24 = v3;
	while (v23 < v24)
	{
		v25 = v23 + ((v24 - v23) >> 1);
		if (a2 >= *(_DWORD*)&a1[1][2 * v25])
			v23 = v25 + 1;
		else
			v24 = v23 + ((v24 - v23) >> 1);
	}
	v26 = v23 - 1;
	if (v23)
	{
		if (v3 == v23)
		{
			*a3 = sub_1401C9770(&a1[2][v26]);
			*(_DWORD*)v7 = *(_DWORD*)a1 - 2;
		}
		else
		{
			v28 = sub_1401C9770(&a1[2][v26]);
			v30 = v29;
			v32 = v28;
			v33 = sub_1401C9770((unsigned __int16*)(v31 + 2i64 * v29));
			*a3 = (float)((float)(v33 - v32)
				* (float)((float)(int)(a2 - *(_DWORD*)(v34 + 4 * v26))
					/ (float)(*(_DWORD*)(v34 + 4 * v30) - *(_DWORD*)(v34 + 4 * v26))))
				+ v32;
			*(_DWORD*)v7 = v26;
		}
	}
	else
	{
		*a3 = sub_1401C9770(a1[2]);
		*(_DWORD*)v7 = v27;
	}
}
// 140309264: variable 'v11' is possibly undefined
// 140309270: variable 'v14' is possibly undefined
// 140309275: variable 'v15' is possibly undefined
// 1403092DC: variable 'v19' is possibly undefined
// 1403092D8: variable 'v18' is possibly undefined
// 1403092E8: variable 'v22' is possibly undefined
// 140309374: variable 'v27' is possibly undefined
// 1403093A7: variable 'v29' is possibly undefined
// 1403093AE: variable 'v31' is possibly undefined
// 1403093BA: variable 'v34' is possibly undefined

