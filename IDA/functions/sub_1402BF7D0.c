#include "../winhttp.h"

//----- (00000001402BF7D0) ----------------------------------------------------
__int64 __fastcall sub_1402BF7D0(__int64 a1, _BYTE* a2, __int64 a3, __int64 a4, int a5, int a6, int** a7, _DWORD* a8)
{
	unsigned int v10; // ebp
	int* v13; // rsi
	unsigned int v14; // r13d
	unsigned int v15; // ebx
	int* v16; // rdi
	__int64 result; // rax
	int* v18; // r8
	unsigned __int8* v19; // rax
	__int64 v20; // r9
	int v21; // ecx
	int v22; // edx
	int v23; // ecx
	int v24; // edx
	int v25; // ecx
	int v26; // edx
	int v27; // ecx
	int v28; // edx
	int v29; // ecx
	int v30; // edx
	int v31; // ecx
	int v32; // edx
	int v33; // ecx
	int v34; // edx
	int v35; // ecx
	unsigned int v36; // [rsp+20h] [rbp-4C8h]
	__int64 v37[5]; // [rsp+28h] [rbp-4C0h] BYREF
	char v38[193]; // [rsp+50h] [rbp-498h] BYREF
	char v39; // [rsp+111h] [rbp-3D7h] BYREF
	__int64 v40[106]; // [rsp+150h] [rbp-398h] BYREF

	v36 = (unsigned int)(a6 + 7) >> 3;
	v10 = (unsigned int)(a5 + 7) >> 3;
	*a7 = sub_14018B280(4i64 * ((v10 * v36) << 6), 8u);
	v37[0] = a3;
	v37[1] = a4;
	v37[2] = a3;
	*a8 = 32 * v10;
	v37[3] = 0i64;
	sub_1402C0750(v40, (__int64)v37);
	v13 = *a7;
	v14 = 0;
	if (!v36)
		return 0i64;
	while (1)
	{
		v15 = 0;
		v16 = v13;
		if (v10)
			break;
	LABEL_7:
		++v14;
		v13 = (int*)((char*)v13 + (unsigned int)(8 * *a8));
		if (v14 >= v36)
			return 0i64;
	}
	while (1)
	{
		result = sub_1402BD370(v38, (__int64)v40, a2, a1);
		if ((int)result < 0)
			return result;
		v18 = v16;
		v19 = (unsigned __int8*)&v39;
		v20 = 8i64;
		do
		{
			v21 = *v19;
			*v18 = *(v19 - 65) | ((*(v19 - 129) | ((*(v19 - 1) | (*(v19 - 193) << 8)) << 8)) << 8);
			v22 = *(v19 - 64) | ((*(v19 - 128) | ((v21 | (*(v19 - 192) << 8)) << 8)) << 8);
			v23 = v19[1];
			v18[1] = v22;
			v24 = *(v19 - 63) | ((*(v19 - 127) | ((v23 | (*(v19 - 191) << 8)) << 8)) << 8);
			v25 = v19[2];
			v18[2] = v24;
			v26 = *(v19 - 62) | ((*(v19 - 126) | ((v25 | (*(v19 - 190) << 8)) << 8)) << 8);
			v27 = v19[3];
			v18[3] = v26;
			v28 = *(v19 - 61) | ((*(v19 - 125) | ((v27 | (*(v19 - 189) << 8)) << 8)) << 8);
			v29 = v19[4];
			v18[4] = v28;
			v30 = *(v19 - 60) | ((*(v19 - 124) | ((v29 | (*(v19 - 188) << 8)) << 8)) << 8);
			v31 = v19[5];
			v18[5] = v30;
			v32 = *(v19 - 59) | ((*(v19 - 123) | ((v31 | (*(v19 - 187) << 8)) << 8)) << 8);
			v33 = v19[6];
			v18[6] = v32;
			v34 = v33 | (*(v19 - 186) << 8);
			v35 = *(v19 - 122);
			v19 += 8;
			v18[7] = *(v19 - 66) | ((v35 | (v34 << 8)) << 8);
			v18 = (int*)((char*)v18 + (unsigned int)*a8);
			--v20;
		} while (v20);
		++v15;
		v16 += 8;
		if (v15 >= v10)
			goto LABEL_7;
	}
}
// 1402BF7D0: using guessed type __int64 var_398[106];
// 1402BF7D0: using guessed type char var_498[193];

