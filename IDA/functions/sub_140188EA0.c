#include "../winhttp.h"

//----- (0000000140188EA0) ----------------------------------------------------
char* __fastcall sub_140188EA0(_QWORD* a1, __int64 a2, __int128* a3)
{
	__int64 v3; // r9
	__int128 v7; // xmm1
	int v8; // xmm2_4
	char* result; // rax
	char* v10; // rcx
	char* v11; // rdx
	__int64 j; // r8
	__int128 v13; // xmm0
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r14
	int* v17; // rax
	__int64 v18; // rcx
	int* v19; // rbp
	int* i; // rdx
	_OWORD* v21; // r9
	_OWORD* v22; // rbx
	__int64 v23; // r10
	_OWORD* v24; // r8
	char* v25; // rdx
	__int64 v26; // rcx

	v3 = a1[2];
	if (v3 == a1[3])
	{
		v14 = (v3 - a1[1]) >> 5;
		v15 = 2 * v14;
		if (!v14)
			v15 = 1i64;
		v16 = sub_14018A3E0(32 * v15) & 0xFFFFFFFFFFFFFFE0ui64;
		v17 = sub_14018B280(v16, 0);
		v18 = a1[1];
		v19 = v17;
		for (i = v17; v18 != a2; i += 8)
		{
			if (i)
			{
				*(_OWORD*)i = *(_OWORD*)v18;
				i[4] = *(_DWORD*)(v18 + 16);
			}
			v18 += 32i64;
		}
		if (i)
		{
			*(_OWORD*)i = *a3;
			i[4] = *((_DWORD*)a3 + 4);
		}
		v21 = (_OWORD*)a1[2];
		v22 = i + 8;
		if ((_OWORD*)a2 != v21)
		{
			v23 = a2 - (_QWORD)i;
			v24 = (_OWORD*)a2;
			v25 = (char*)i - a2;
			do
			{
				if (v22)
				{
					*v22 = *v24;
					*(_DWORD*)((char*)v24 + (_QWORD)v25 + 48) = *(_DWORD*)((char*)v24 + (_QWORD)v25 + v23 + 16);
				}
				v24 += 2;
				v22 += 2;
			} while (v24 != v21);
		}
		v26 = a1[1];
		if (v26)
			sub_14018B900(v26, 0);
		result = (char*)v19 + v16;
		a1[1] = v19;
		a1[2] = v22;
		a1[3] = (char*)v19 + v16;
	}
	else
	{
		if (v3)
		{
			*(_OWORD*)v3 = *(_OWORD*)(v3 - 32);
			*(_DWORD*)(v3 + 16) = *(_DWORD*)(v3 - 16);
		}
		a1[2] += 32i64;
		v7 = *a3;
		v8 = *((_DWORD*)a3 + 4);
		result = (char*)a1[2];
		v10 = result - 64;
		v11 = result - 32;
		for (j = (__int64)&result[-a2 - 64] >> 5; j > 0; *((_DWORD*)v11 + 4) = (_DWORD)result)
		{
			v13 = *((_OWORD*)v10 - 2);
			v10 -= 32;
			v11 -= 32;
			*(_OWORD*)v11 = v13;
			result = (char*)*((unsigned int*)v10 + 4);
			--j;
		}
		*(_OWORD*)a2 = v7;
		*(_DWORD*)(a2 + 16) = v8;
	}
	return result;
}

