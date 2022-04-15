#include "../winhttp.h"

//----- (00000001409308B0) ----------------------------------------------------
void __fastcall sub_1409308B0(__int64 a1)
{
	unsigned int* v1; // rdi
	char* v3; // rax
	_QWORD* v4; // rbx
	_QWORD* v5; // rbp
	_QWORD* v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rax

	v1 = *(unsigned int**)a1;
	if (!**(_DWORD**)a1)
	{
		v1[26] = 0;
		v3 = sub_14092D140((__int64)v1, 2, 1, 0i64, 262, 0i64);
		if (v3)
			*(_WORD*)v3 = -18673;
	}
	if (*(_DWORD*)(a1 + 316))
	{
		v4 = sub_140931B80(v1, 2, 1, 0i64, 512, 55296i64);
		v5 = sub_140932450((__int64)v1, 23);
		if (!*v1)
		{
			v6 = sub_14092D590((__int64)v1, 16i64);
			if (v6)
			{
				v7 = *(_QWORD*)(a1 + 320);
				*v6 = v5;
				v6[1] = v7;
				*(_QWORD*)(a1 + 320) = v6;
			}
		}
		sub_140932A90(v1, 27, 6, 0i64, 6, 0i64, 3, 0i64);
		v8 = sub_140932570((__int64)v1);
		if (v4)
		{
			if (v8)
			{
				v4[2] &= ~2ui64;
				v4[2] |= 1ui64;
				v4[3] = v8;
			}
		}
	}
}

