#include "../winhttp.h"

//----- (000000014083A960) ----------------------------------------------------
__int64 __fastcall sub_14083A960(_DWORD* a1, __int64 a2, char a3, int a4)
{
	_DWORD* v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64* v9; // rax
	__int64* v10; // rdx
	float v11; // xmm1_4
	_QWORD* v12; // rcx
	_QWORD* i; // rax
	__int64* v14; // rcx
	__int64 result; // rax
	int v16; // edi

	v6 = a1 + 8;
	if (a4 != 1)
		v6 = a1 + 2;
	v7 = 0i64;
	if ((unsigned int)((__int64)(*((_QWORD*)v6 + 1) - *(_QWORD*)v6) >> 3) >= *a1
		|| (v8 = sub_1408819F0(dword_140C10F20, 80i64)) == 0
		|| (v7 = sub_140867FA0(v8)) == 0)
	{
		v9 = *(__int64**)v6;
		v10 = (__int64*)*((_QWORD*)v6 + 1);
		v11 = 0.0;
		if (*(__int64**)v6 == v10)
			return v7;
		do
		{
			if (*(float*)(*v9 + 28) > v11)
			{
				v7 = *v9;
				v11 = *(float*)(*v9 + 28);
			}
			++v9;
		} while (v9 != v10);
		if (!v7)
			return v7;
		*(_DWORD*)(v7 + 24) = 0;
		sub_140867FD0(v7, 0);
		sub_140868370(v7);
		v12 = (_QWORD*)*((_QWORD*)v6 + 1);
		for (i = *(_QWORD**)v6; i != v12; ++i)
		{
			if (*i == v7)
				break;
		}
		if (i != v12)
		{
			if ((unsigned int)(((__int64)v12 - *(_QWORD*)v6) >> 3) > 1)
				*i = *(v12 - 1);
			*((_QWORD*)v6 + 1) -= 8i64;
		}
	}
	if ((unsigned int)sub_140868140(v7, a2, qword_140C61B68[4].SpinCount) == 2
		|| (v14 = (__int64*)*((_QWORD*)v6 + 1), (unsigned int)(((__int64)v14 - *(_QWORD*)v6) >> 3) >= v6[4])
		|| (*((_QWORD*)v6 + 1) = v14 + 1, !v14))
	{
		sub_140868390(v7);
		v16 = dword_140C10F20;
		if (v7)
		{
			nullsub_1(v7);
			sub_140881720(v16, v7);
		}
		return 0i64;
	}
	else
	{
		*v14 = v7;
		result = v7;
		if (a3)
			*(_DWORD*)(v7 + 68) = 1;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

