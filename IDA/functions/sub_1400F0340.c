#include "../winhttp.h"

//----- (00000001400F0340) ----------------------------------------------------
void __fastcall sub_1400F0340(__int64 a1)
{
	wchar_t** v2; // rsi
	__int64 v3; // r14
	__m128i v4; // xmm0
	__int64 v5; // rax
	int* v6; // rax
	int* v7; // rbx
	bool v8; // zf
	_BYTE* v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // rbp
	unsigned __int64* v12; // rbx
	unsigned __int64 v13; // r8
	__int64 v14; // rax
	unsigned int* v15; // r9
	__int64 v16; // [rsp+20h] [rbp-58h] BYREF
	int v17; // [rsp+28h] [rbp-50h]
	__int64 v18; // [rsp+30h] [rbp-48h] BYREF
	unsigned __int64* v19; // [rsp+38h] [rbp-40h]
	_BYTE* v20; // [rsp+40h] [rbp-38h]
	__int64 v21; // [rsp+48h] [rbp-30h]
	__int64 v22; // [rsp+50h] [rbp-28h] BYREF
	__int64 v23; // [rsp+58h] [rbp-20h]

	v2 = &off_140C30DD0;
	v3 = 128i64;
	do
	{
		v4 = _mm_cvtsi32_si128(*((_DWORD*)v2 + 2));
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
		v6 = sub_14018B280(13i64, 0);
		v21 = (__int64)v6 + 13;
		v7 = v6;
		v19 = (unsigned __int64*)v6;
		sub_1407DB590(v6, (int*)"GuildResult_", 0xCui64);
		v8 = v7 + 3 == 0i64;
		v9 = v7 + 3;
		v20 = v9;
		if (!v8)
			*v9 = 0;
		v10 = sub_14018F0E0(&v22, *v2);
		sub_14001B050(&v18, (int*)v10[1], (int*)v10[2]);
		if (v23)
			sub_14018B900(v23, 0);
		v11 = *(_QWORD*)(a1 + 16);
		v12 = v19;
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v19 + v13));
		v14 = sub_140062650(a1, v19, v13);
		v15 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
		v16 = v14;
		v17 = 4;
		sub_14005EA50(a1, (__int64*)(v11 - 32), (int*)&v16, v15);
		*(_QWORD*)(a1 + 16) -= 16i64;
		if (v12)
			sub_14018B900((__int64)v12, 0);
		v2 += 2;
		--v3;
	} while (v3);
}
// 140C30DD0: using guessed type wchar_t *off_140C30DD0;

