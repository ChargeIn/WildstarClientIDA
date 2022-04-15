#include "../winhttp.h"

//----- (000000014087E8F0) ----------------------------------------------------
__int64 __fastcall sub_14087E8F0(__int64* a1, __int64 a2)
{
	int v2; // edi
	int v3; // ebp
	unsigned int v4; // ebx
	int i; // r8d
	__int64 result; // rax
	unsigned int v7; // r10d
	_DWORD* v8; // rsi
	__int64 v9; // r12
	__int64 v10; // r15
	unsigned int v11; // r8d
	unsigned int v12; // edx
	int v13; // ecx
	int v14; // edx
	int j; // ecx
	unsigned int v16; // r11d
	_DWORD* v17; // rcx
	unsigned int* v18; // rdx
	__int64 v19; // r8
	unsigned int v20; // eax
	__int64 v21; // r9
	int v22; // eax
	_DWORD* v23; // rcx
	_DWORD* v24; // rcx
	_DWORD* v25; // rcx
	__int64 v26; // r8

	v2 = *((_DWORD*)a1 + 2);
	v3 = *(unsigned __int16*)(a2 + 18);
	v4 = 0;
	for (i = v2; i; i &= result)
	{
		result = (unsigned int)(i - 1);
		++v4;
	}
	v7 = 0;
	if (v4)
	{
		v8 = *(_DWORD**)a2;
		v9 = *a1;
		v10 = *((unsigned __int16*)a1 + 8);
		do
		{
			v11 = v7;
			if ((v2 & 8) != 0)
			{
				v12 = 0;
				v13 = v2 & 7;
				if ((v2 & 7) != 0)
				{
					do
					{
						++v12;
						v13 &= v13 - 1;
					} while (v13);
				}
				if (v7 == v12)
				{
					v14 = 0;
					for (j = v2; j; j &= j - 1)
						++v14;
					v11 = v14 - 1;
				}
				else if (v7 > v12)
				{
					v11 = v7 - 1;
				}
			}
			v16 = 0;
			v17 = v8;
			result = v10 * v11;
			v18 = (unsigned int*)(v9 + 4 * result);
			if (v3 >= 4)
			{
				v19 = v4;
				v20 = ((unsigned int)(v3 - 4) >> 2) + 1;
				v21 = v20;
				v16 = 4 * v20;
				do
				{
					v22 = *v18;
					v18 += 4;
					*v17 = v22;
					v23 = &v17[v19];
					*v23 = *(v18 - 3);
					v24 = &v23[v19];
					*v24 = *(v18 - 2);
					result = *(v18 - 1);
					v25 = &v24[v19];
					*v25 = result;
					v17 = &v25[v19];
					--v21;
				} while (v21);
			}
			if (v16 < v3)
			{
				v26 = v3 - v16;
				do
				{
					result = *v18++;
					*v17 = result;
					v17 += v4;
					--v26;
				} while (v26);
			}
			++v7;
			++v8;
		} while (v7 < v4);
	}
	return result;
}

