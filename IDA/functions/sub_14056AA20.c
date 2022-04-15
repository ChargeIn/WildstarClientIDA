#include "../winhttp.h"

//----- (000000014056AA20) ----------------------------------------------------
__int64 __fastcall sub_14056AA20(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64 v6; // rsi
	int* v9; // rax
	unsigned int v10; // r8d
	__int64 v11; // r9
	__int64 v12; // rcx
	__int64 v13; // rdx
	unsigned int v14; // eax
	__int64 v15; // rdi
	int v16; // eax
	int* v17; // rcx
	__int64 v18; // rdx
	int v19; // eax
	_DWORD* v20; // rdi
	__int64 i; // rcx
	__int64 result; // rax

	v6 = a3;
	if (!*(_QWORD*)(a1 + 72))
	{
		v9 = sub_14018B280(312i64, 0);
		if (v9)
			v9 = (int*)sub_1400B52A0((__int64)v9);
		*(_QWORD*)(a1 + 72) = v9;
		sub_1407E4830(v9, 0i64, 0x138ui64);
	}
	v10 = 0;
	v11 = 0i64;
	*(_DWORD*)(a1 + 144) = a2;
	*(_DWORD*)(a1 + 148) = v6;
	*(_QWORD*)(a1 + 176) = a5;
	if ((int)v6 >= 4)
	{
		v12 = a4 + 4;
		v13 = a1 - a4;
		v14 = ((unsigned int)(v6 - 4) >> 2) + 1;
		v15 = v14;
		v10 = 4 * v14;
		v11 = 4i64 * v14;
		do
		{
			v16 = *(_DWORD*)(v12 - 4);
			v12 += 16i64;
			*(_DWORD*)(v13 + v12 + 132) = v16;
			*(_DWORD*)(v13 + v12 + 136) = *(_DWORD*)(v12 - 16);
			*(_DWORD*)(v13 + v12 + 140) = *(_DWORD*)(v12 - 12);
			*(_DWORD*)(v13 + v12 + 144) = *(_DWORD*)(v12 - 8);
			--v15;
		} while (v15);
	}
	if (v10 < (unsigned int)v6)
	{
		v17 = (int*)(a4 + 4 * v11);
		v18 = (unsigned int)v6 - v10;
		do
		{
			v19 = *v17++;
			*(int*)((char*)v17 + a1 - a4 + 148) = v19;
			--v18;
		} while (v18);
	}
	if ((unsigned int)v6 < 5)
	{
		v20 = (_DWORD*)(a1 + 4 * (v6 + 38));
		for (i = (unsigned int)(5 - v6); i; --i)
			*v20++ = 1065353216;
	}
	*(_DWORD*)(a1 + 292) = 1;
	result = sub_14056A430(a1);
	if ((int)result >= 0)
		return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemModified", byte_1409EAD24, a1);
	*(_QWORD*)(a1 + 144) = 0i64;
	return result;
}
// 1409EAD24: using guessed type _BYTE byte_1409EAD24[24];
// 140C65898: using guessed type __int64 qword_140C65898;

