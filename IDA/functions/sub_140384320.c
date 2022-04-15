#include "../winhttp.h"

//----- (0000000140384320) ----------------------------------------------------
__int64 __fastcall sub_140384320(__m128* a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	__m128* v8; // rax
	_OWORD* v9; // rdi

	v8 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			16i64,
			1i64,
			9i64,
			0);
	if (v8)
	{
		*v8 = _mm_shuffle_ps(a1[12], a1[12], 136);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v9 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		16i64,
		0i64);
	if (v9)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[26].m128_u64[0] + 32) + 16i64) + 32i64),
			0i64,
			0i64);
		*v9 = *(_OWORD*)(*(_QWORD*)(a1[26].m128_u64[0] + 32) + 32i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			*(_QWORD*)(a1->m128_u64[0] + 800));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 128i64),
		1i64);
	sub_140384480((__int64)a1, a2, a3, a4);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

