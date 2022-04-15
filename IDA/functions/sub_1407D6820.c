#include "../winhttp.h"

//----- (00000001407D6820) ----------------------------------------------------
void** __fastcall sub_1407D6820(__int64 a1, unsigned int* a2)
{
	void** result; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	__m128 v7; // xmm3
	__m128 v8; // xmm3
	__int128 v9[4]; // [rsp+20h] [rbp-58h] BYREF
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = &retaddr;
	if (*(float*)(a1 + 256) > 0.0)
	{
		v4 = (_QWORD*)(a1 + 328);
		v5 = 4i64;
		do
		{
			v6 = *v4;
			if (*v4)
			{
				v7 = (__m128) * a2;
				v9[0] = xmmword_140C78410;
				v9[1] = xmmword_140C78420;
				v8 = _mm_unpacklo_ps(v7, (__m128)a2[2]);
				v9[2] = xmmword_140C78430;
				v9[3] = (__int128)_mm_unpacklo_ps(v8, _mm_unpacklo_ps((__m128)a2[1], (__m128)0x3F800000u));
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v6 + 72i64))(v6, v9);
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 112i64))(*v4);
				(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v4 + 296i64))(*v4, 1i64);
				result = (void**)(*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v4 + 320i64))(*v4, 1i64);
			}
			++v4;
			--v5;
		} while (v5);
	}
	return result;
}
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

