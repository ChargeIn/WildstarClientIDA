#include "../winhttp.h"

//----- (0000000140926650) ----------------------------------------------------
_QWORD* __fastcall sub_140926650(unsigned int** a1, _QWORD* a2)
{
	unsigned int* v2; // rbx
	_QWORD* v5; // rax
	__int64* j; // r8
	__int64 v7; // rcx
	char* v8; // rax
	__int64 v9; // rsi
	_QWORD* result; // rax
	__int64 v11; // rbp
	_QWORD* v12; // rax
	_QWORD* v13; // rax
	__int64* i; // rdx
	__int64 v15; // rcx

	v2 = *a1;
	if ((*(_BYTE*)(a2[4] + 4i64) & 1) != 0)
	{
		if (!*v2)
		{
			v2[26] = 0;
			sub_14092AA10(v2, 6, 0i64, 258, -8i64);
		}
		v11 = a2[5];
		v12 = sub_140931B80(v2, 1, 6, 0i64, 512, 0i64);
		if (v12 && v11)
		{
			v12[2] &= ~2ui64;
			v12[2] |= 1ui64;
			v12[3] = v11;
		}
		v13 = sub_140932570((__int64)v2);
		for (i = (__int64*)a2[3]; i; i = (__int64*)i[1])
		{
			v15 = *i;
			if (*i && v13)
			{
				*(_QWORD*)(v15 + 16) &= ~2ui64;
				*(_QWORD*)(v15 + 16) |= 1ui64;
				*(_QWORD*)(v15 + 24) = v13;
			}
		}
		return (_QWORD*)sub_140932A90(*a1, 27, 2, 0i64, 2, 0i64, 512, 16i64);
	}
	else
	{
		v5 = sub_140932570((__int64)*a1);
		for (j = (__int64*)a2[3]; j; j = (__int64*)j[1])
		{
			v7 = *j;
			if (*j && v5)
			{
				*(_QWORD*)(v7 + 16) &= ~2ui64;
				*(_QWORD*)(v7 + 16) |= 1ui64;
				*(_QWORD*)(v7 + 24) = v5;
			}
		}
		if (!*v2)
		{
			v2[26] = 0;
			v8 = sub_14092D140((__int64)v2, 1, 6, 0i64, 258, -8i64);
			if (v8)
				*v8 = -117;
		}
		sub_140932A90(*a1, 27, 2, 0i64, 2, 0i64, 512, 8i64);
		v9 = a2[5];
		result = sub_140931B80(v2, 1, 6, 0i64, 512, 0i64);
		if (result)
		{
			if (v9)
			{
				result[2] &= ~2ui64;
				result[2] |= 1ui64;
				result[3] = v9;
			}
		}
	}
	return result;
}

