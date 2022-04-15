#include "../winhttp.h"

//----- (00000001402C0600) ----------------------------------------------------
__int64 __fastcall sub_1402C0600(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
	int v4; // r11d
	char v5; // r10
	_BYTE* v7; // r8
	__int64 v8; // r9
	unsigned __int8 v9; // cl
	int v10; // edx
	char v11; // r8
	unsigned __int16 v12; // ax
	__int64 v13; // r9
	char v14; // r10
	__int64 v15; // r9
	__int64 v16; // r8
	_WORD* v17; // rdx
	__int64 v18; // r10
	__int64 result; // rax
	__int64 v20; // r11
	__int16 v21; // cx
	char v22[784]; // [rsp+0h] [rbp-328h]

	v4 = 0;
	v5 = 1;
	*a2 = a3;
	a2[1] = a4;
	v7 = (_BYTE*)(a3 + 1);
	v8 = 0i64;
	v9 = 1;
	do
	{
		v10 = (unsigned __int8)*v7;
		if (*v7)
		{
			do
			{
				++v9;
				v22[v8++] = v5;
			} while (v9 <= v10);
		}
		++v5;
		++v7;
		v9 = 1;
	} while ((unsigned __int8)v5 < 0x11u);
	v22[v8] = 0;
	v11 = v22[0];
	v12 = 0;
	v13 = 0i64;
	do
		LABEL_6:
	*(_WORD*)&v22[2 * v13++ + 272] = v12++;
	while (v22[v13] == v11);
	v14 = v22[v13];
	if (v14)
	{
		while (v12 < (unsigned int)(1 << v11))
		{
			++v11;
			v12 *= 2;
			if (v14 == v11)
				goto LABEL_6;
		}
	}
	v15 = 0i64;
	v16 = 0i64;
	v17 = a2 + 2;
	v18 = 17i64;
	do
	{
		result = *a2;
		if (*(_BYTE*)(v16 + *a2))
		{
			*((_BYTE*)a2 + v15 + 86) = v4;
			v17[18] = *(_WORD*)&v22[2 * v4 + 272];
			result = *a2;
			v20 = (unsigned int)*(unsigned __int8*)(v16 + *a2) + v4 - 1;
			v21 = *(_WORD*)&v22[2 * v20 + 272];
			v4 = v20 + 1;
			*v17 = v21;
		}
		else
		{
			*v17 = -1;
		}
		++v16;
		++v15;
		++v17;
		--v18;
	} while (v18);
	*((_WORD*)a2 + 25) = -1;
	return result;
}

