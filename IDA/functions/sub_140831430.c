#include "../winhttp.h"

//----- (0000000140831430) ----------------------------------------------------
_BYTE* __fastcall sub_140831430(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE* a5)
{
	unsigned int v7; // r10d
	__int64 v8; // r8
	int v9; // ebx
	int v10; // xmm0_4
	__int64 v11; // rcx
	int v12; // eax
	unsigned int v13; // ebx
	int* v14; // r9
	int v15; // r8d
	unsigned int v16; // eax
	char* v17; // rcx
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	int v20; // eax
	_BYTE* result; // rax
	__int64 v22; // rdx
	__int64 v23; // rcx
	int v24; // eax
	char v25[24]; // [rsp+0h] [rbp-18h] BYREF

	v7 = 0;
	do
	{
		v8 = v7;
		v9 = *(_DWORD*)(a2 + 12i64 * v7);
		if (!v9)
			break;
		v10 = *(_DWORD*)(a2 + 12i64 * v7 + 4);
		v11 = 32i64 * v7;
		*(_DWORD*)(v11 + a3) = v10;
		*(_DWORD*)(v11 + a3 + 8) = v9;
		if (a4)
			v10 = 0;
		v12 = *(_DWORD*)(a2 + 12i64 * v7++ + 8);
		*(_DWORD*)(v11 + a3 + 4) = v10;
		*(_DWORD*)(v11 + a3 + 24) = v12;
		v25[v8] = 0;
	} while (v7 < 8);
	v13 = 0;
	v14 = (int*)(a1 + 4);
	do
	{
		v15 = *(v14 - 1);
		if (!v15)
			break;
		v16 = 0;
		if (v7)
		{
			v17 = v25;
			v18 = (_DWORD*)(a3 + 8);
			while (*v18 != v15 || *v17)
			{
				++v16;
				v18 += 8;
				++v17;
				if (v16 >= v7)
					goto LABEL_13;
			}
			v22 = v16;
			v23 = v16;
			v24 = *v14;
			v25[v22] = 1;
			*(_DWORD*)(32 * v23 + a3 + 4) = v24;
		}
		else
		{
		LABEL_13:
			if (v7 < 8)
			{
				v19 = 32i64 * v7++;
				*(_DWORD*)(v19 + a3 + 4) = *v14;
				v20 = v14[1];
				*(_DWORD*)(v19 + a3 + 8) = v15;
				*(_DWORD*)(v19 + a3 + 24) = v20;
				*(_DWORD*)(v19 + a3) = 0;
			}
		}
		++v13;
		v14 += 3;
	} while (v13 < 8);
	result = a5;
	*a5 = v7;
	return result;
}
// 140831430: using guessed type char var_18[24];

