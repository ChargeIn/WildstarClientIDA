#include "../winhttp.h"

//----- (00000001407F6DB0) ----------------------------------------------------
__int64 __fastcall sub_1407F6DB0(char* a1, int a2, __int64* a3)
{
	__int64 result; // rax
	int v5; // edi
	__int16 v7; // bx
	unsigned int v8; // r11d
	unsigned int v9; // r8d
	int v10; // r9d
	unsigned __int64 v11; // rsi
	int v12; // r15d
	int v13; // r9d
	unsigned int v14; // ecx
	unsigned int v15; // r8d
	int v16; // eax
	int v17; // r9d
	unsigned int v18; // ecx
	unsigned int v19; // r14d
	unsigned int v20; // eax
	int v21; // ecx
	unsigned __int64 v22; // rsi
	int v23; // eax
	unsigned int v24; // r11d
	unsigned int v25; // ecx
	int v26; // ecx
	unsigned int v27; // r8d
	int v28; // ecx
	unsigned int v29; // r9d
	int v30; // edx
	unsigned int v31; // r9d
	unsigned int v32; // r8d
	unsigned int v33; // ecx
	void* retaddr; // [rsp+28h] [rbp+0h] BYREF

	result = (__int64)&retaddr;
	*(_DWORD*)a3 = 0;
	*((_DWORD*)a3 + 1) = 0;
	*((_DWORD*)a3 + 2) = 0;
	v5 = a2;
	v7 = 16462;
	if (a2)
	{
		v8 = 0;
		v9 = 0;
		v10 = 0;
		do
		{
			v11 = *a3;
			v12 = *((_DWORD*)a3 + 2);
			v13 = 2 * ((v9 >> 31) | (2 * v10));
			v14 = (v8 >> 31) | (2 * v9);
			v15 = ((2 * v8) >> 31) | (2 * v14);
			v16 = 0;
			v17 = (v14 >> 31) | v13;
			v18 = *a3;
			*(_DWORD*)a3 = 4 * v8;
			v19 = 4 * v8 + v11;
			*((_DWORD*)a3 + 1) = v15;
			*((_DWORD*)a3 + 2) = v17;
			if (v19 < 4 * v8 || v19 < v18)
				v16 = 1;
			*(_DWORD*)a3 = v19;
			if (v16)
			{
				v20 = v15++;
				v21 = 0;
				if (v15 < v20 || !v15)
					v21 = 1;
				*((_DWORD*)a3 + 1) = v15;
				if (v21)
					*((_DWORD*)a3 + 2) = ++v17;
			}
			v22 = HIDWORD(v11);
			v23 = 0;
			v24 = v15 + v22;
			if (v15 + (unsigned int)v22 < v15 || v24 < (unsigned int)v22)
				v23 = 1;
			*((_DWORD*)a3 + 1) = v24;
			if (v23)
				*((_DWORD*)a3 + 2) = ++v17;
			v10 = (v24 >> 31) | (2 * (v12 + v17));
			*(_DWORD*)a3 = 2 * v19;
			*((_DWORD*)a3 + 2) = v10;
			v9 = (v19 >> 31) | (2 * v24);
			result = 0i64;
			*((_DWORD*)a3 + 1) = v9;
			v25 = *a1;
			v8 = 2 * v19 + v25;
			if (v8 < 2 * v19 || v8 < v25)
				result = 1i64;
			*(_DWORD*)a3 = v8;
			if ((_DWORD)result)
			{
				result = v9 + 1;
				v26 = 0;
				if ((unsigned int)result < v9 || v9 == -1)
					v26 = 1;
				++v9;
				*((_DWORD*)a3 + 1) = result;
				if (v26)
					*((_DWORD*)a3 + 2) = ++v10;
			}
			++a1;
			*((_DWORD*)a3 + 1) = v9;
			*((_DWORD*)a3 + 2) = v10;
			--v5;
		} while (v5);
	}
	if (!*((_DWORD*)a3 + 2))
	{
		v27 = *((_DWORD*)a3 + 1);
		do
		{
			v28 = HIWORD(*(_DWORD*)a3);
			v29 = HIWORD(v27);
			*(_DWORD*)a3 <<= 16;
			v27 = (v27 << 16) | v28;
			result = 65520i64;
			v7 -= 16;
		} while (!v29);
		*((_DWORD*)a3 + 1) = v27;
		*((_DWORD*)a3 + 2) = v29;
	}
	v30 = *((_DWORD*)a3 + 2);
	if ((v30 & 0x8000) == 0)
	{
		v31 = *(_DWORD*)a3;
		v32 = *((_DWORD*)a3 + 1);
		do
		{
			v33 = v32 >> 31;
			v32 = (v31 >> 31) | (2 * v32);
			result = 0xFFFFi64;
			v30 = v33 | (2 * v30);
			--v7;
			v31 *= 2;
		} while ((v30 & 0x8000) == 0);
		*(_DWORD*)a3 = v31;
		*((_DWORD*)a3 + 1) = v32;
		*((_DWORD*)a3 + 2) = v30;
	}
	*((_WORD*)a3 + 5) = v7;
	return result;
}

