#include "../winhttp.h"

//----- (00000001402064A0) ----------------------------------------------------
__int64 sub_1402064A0(void(__fastcall*** a1)(_QWORD), __int64* a2, unsigned __int16* a3, ...)
{
	int v5; // eax
	int* v6; // rax
	__int64 v7; // r8
	__int64 v8; // rbx
	__int64 result; // rax
	unsigned int v10; // edi
	__m128i v11[127]; // [rsp+20h] [rbp-838h] BYREF
	__int16 v12; // [rsp+81Eh] [rbp-3Ah]
	va_list va; // [rsp+878h] [rbp+20h] BYREF

	va_start(va, a3);
	if (a3)
	{
		v5 = sub_1407DDA14(v11, 0x3FFui64, a3, (__int64)va);
		if (v5 < 0 || (unsigned __int64)v5 > 0x3FF)
			return 2147942522i64;
		if (v5 == 1023i64)
			v12 = 0;
	}
	else
	{
		v11[0].m128i_i16[0] = 0;
	}
	v6 = sub_14018B280(80i64, 0);
	v8 = (__int64)v6;
	if (v6)
	{
		v6[2] = 1;
		*((_QWORD*)v6 + 2) = a1;
		*(_QWORD*)v6 = off_140B79650;
		v6[8] = 0;
		*((_QWORD*)v6 + 5) = 0i64;
		v6[12] = 0;
		*((_QWORD*)v6 + 7) = 0i64;
		*((_QWORD*)v6 + 3) = &off_140ACFDC8;
		*((_QWORD*)v6 + 8) = 0i64;
		v6[18] = 0;
		(**a1)(a1);
	}
	else
	{
		v8 = 0i64;
	}
	result = sub_1407BEFC0(v8, v11, v7);
	v10 = result;
	if ((int)result >= 0)
	{
		*a2 = v8;
	}
	else
	{
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		return v10;
	}
	return result;
}
// 140206575: variable 'v7' is possibly undefined
// 140ACFDC8: using guessed type wchar_t *off_140ACFDC8;
// 140B79650: using guessed type __int64 (__fastcall *off_140B79650[12])();
// 1402064A0: using guessed type __m128i var_838[127];

