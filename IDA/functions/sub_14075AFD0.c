#include "../winhttp.h"

//----- (000000014075AFD0) ----------------------------------------------------
__int64 __fastcall sub_14075AFD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // r11
	__int64 v7; // rbp
	int* i; // rbx
	int v9; // r14d
	unsigned int v10; // esi
	int v11; // r15d
	int v12; // r12d
	int v13; // r13d
	__int64 v14; // r10
	__int64 j; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	_DWORD* v18; // r8
	__int64 v19; // rcx
	_DWORD* v20; // r8
	__int64 k; // r8
	_DWORD* v22; // rdx
	__int64 v23; // rcx

	v3 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	result = (unsigned __int64)v3 >> 63;
	v5 = ((unsigned __int64)v3 >> 63) + (v3 >> 3);
	if (v5 >= 2)
	{
		v6 = (v5 - 2) / 2;
		v7 = 2 * v6 + 2;
		for (i = (int*)(a1 + 20 * v6); ; i -= 5)
		{
			v9 = *i;
			v10 = i[1];
			v11 = i[2];
			v12 = i[3];
			v13 = i[4];
			v14 = v6;
			for (j = v7; j < v5; v18[4] = *(_DWORD*)(a1 + 4 * v16 + 16))
			{
				if (*(_DWORD*)(a1 + 20 * j + 4) < *(_DWORD*)(a1 + 20 * j - 16))
					--j;
				v16 = 5 * j;
				v17 = 5 * v14;
				v14 = j;
				v18 = (_DWORD*)(a1 + 4 * v17);
				LODWORD(v17) = *(_DWORD*)(a1 + 20 * j);
				j = 2 * j + 2;
				*v18 = v17;
				v18[1] = *(_DWORD*)(a1 + 4 * v16 + 4);
				v18[2] = *(_DWORD*)(a1 + 4 * v16 + 8);
				v18[3] = *(_DWORD*)(a1 + 4 * v16 + 12);
			}
			if (j == v5)
			{
				v19 = 5 * v14;
				v14 = j - 1;
				v20 = (_DWORD*)(a1 + 4 * v19);
				*v20 = *(_DWORD*)(a1 + 20 * j - 20);
				v20[1] = *(_DWORD*)(a1 + 20 * j - 16);
				v20[2] = *(_DWORD*)(a1 + 20 * j - 12);
				v20[3] = *(_DWORD*)(a1 + 20 * j - 8);
				v20[4] = *(_DWORD*)(a1 + 20 * j - 4);
			}
			for (k = (v14 - 1) / 2; v14 > v6; k = (k - 1) / 2)
			{
				v22 = (_DWORD*)(a1 + 20 * k);
				if (v22[1] >= v10)
					break;
				v23 = 5 * v14;
				v14 = k;
				*(_DWORD*)(a1 + 4 * v23) = *v22;
				*(_DWORD*)(a1 + 4 * v23 + 4) = v22[1];
				*(_DWORD*)(a1 + 4 * v23 + 8) = v22[2];
				*(_DWORD*)(a1 + 4 * v23 + 12) = v22[3];
				*(_DWORD*)(a1 + 4 * v23 + 16) = v22[4];
			}
			result = 5 * v14;
			*(_DWORD*)(a1 + 4 * result) = v9;
			*(_DWORD*)(a1 + 4 * result + 4) = v10;
			*(_DWORD*)(a1 + 4 * result + 8) = v11;
			*(_DWORD*)(a1 + 4 * result + 12) = v12;
			*(_DWORD*)(a1 + 4 * result + 16) = v13;
			if (!v6)
				break;
			--v6;
			v7 -= 2i64;
		}
	}
	return result;
}

