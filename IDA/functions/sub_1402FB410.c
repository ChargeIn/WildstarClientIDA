#include "../winhttp.h"

//----- (00000001402FB410) ----------------------------------------------------
__m128* __fastcall sub_1402FB410(_QWORD* a1, __int64 a2, __m128* a3, unsigned int a4)
{
	__m128* v5; // rbx
	__m128* v6; // rax
	__m128* v8[10]; // [rsp+30h] [rbp-78h] BYREF

	v5 = (__m128*)(a1[2] + 304i64);
	v6 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD))(*a1 + 880i64))(a1, a2, a4);
	v8[1] = v5;
	v8[0] = v6;
	return sub_1401AFB10(v8, a3);
}

