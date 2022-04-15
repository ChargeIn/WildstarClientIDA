#include "../winhttp.h"

//----- (0000000140538000) ----------------------------------------------------
int* __fastcall sub_140538000(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v11; // rdx
	__int64 v12; // rax
	wchar_t* v13; // rax
	int* result; // rax
	bool v15; // [rsp+40h] [rbp-B8h] BYREF
	_OWORD v16[6]; // [rsp+50h] [rbp-A8h] BYREF

	sub_1400D45E0((__int64)v16, a1, a2, a5, 0i64);
	v9 = 0i64;
	for (i = 0i64; i < 2; ++i)
	{
		v11 = off_140B13B68[i];
		v15 = 0;
		v12 = sub_1401A6B80(a5, v11);
		if (v12)
		{
			v13 = (wchar_t*)sub_1401A4F40(v12 + 32);
			sub_1401A52E0(v13, &v15);
			if (v15)
				v9 |= 1i64 << i;
		}
	}
	result = sub_14018B280(1632i64, 0);
	if (result)
		return (int*)sub_140528BD0((__int64)result, a1, a2, a3, v16, a4, v9);
	return result;
}
// 140B13B68: using guessed type wchar_t *off_140B13B68[2];
// 140538000: using guessed type _OWORD var_A8[6];

