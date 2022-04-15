#include "../winhttp.h"

//----- (0000000140318430) ----------------------------------------------------
__m128i* __fastcall sub_140318430(__int64 a1, __m128i* a2, __m128i** a3)
{
	__m128i* result; // rax
	__m128i* v7; // rbx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx
	__m128i v10; // [rsp+20h] [rbp-18h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = sub_1401B2CE0(&v10, *(unsigned __int16**)(a1 + 16));
			*a2 = v10;
		}
		else
		{
			v9 = (_QWORD*)a2[1].m128i_i64[0];
			if (v9)
				sub_140317C90(v9);
			result = 0i64;
			a2->m128i_i64[0] = 0i64;
			a2->m128i_i64[1] = 0i64;
			a2[1].m128i_i64[0] = 0i64;
			a2[1].m128i_i64[1] = 0i64;
		}
	}
	else
	{
		result = (__m128i*)sub_14018B280(56i64, 0);
		v7 = result;
		if (result)
		{
			result = 0i64;
			v7->m128i_i64[1] = 0i64;
			v7[1].m128i_i64[0] = 0i64;
			v7->m128i_i64[0] = (__int64)off_140B64248;
			v7[1].m128i_i64[1] = (__int64)a2;
			v7[2].m128i_i64[0] = a1;
			*(__int64*)((char*)&v7[2].m128i_i64[1] + 4) = 0i64;
			v7[2].m128i_i32[2] = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = (_QWORD*)a2[1].m128i_i64[0];
		if (v8)
			result = (__m128i*)sub_140317C90(v8);
		a2[1].m128i_i64[0] = (__int64)v7;
		if (a3 && !v7->m128i_i64[1])
		{
			v7->m128i_i64[1] = (__int64)a3;
			v7[1].m128i_i64[0] = (__int64)*a3;
			*a3 = v7;
			result = (__m128i*)v7[1].m128i_i64[0];
			if (result)
				result->m128i_i64[1] = (__int64)v7[1].m128i_i64;
		}
	}
	return result;
}
// 140B64248: using guessed type __int64 (__fastcall *off_140B64248[2])();
// 140318430: using guessed type __m128i var_18;

