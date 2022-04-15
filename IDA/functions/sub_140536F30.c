#include "../winhttp.h"

//----- (0000000140536F30) ----------------------------------------------------
__int64 __fastcall sub_140536F30(_QWORD* a1)
{
	__int64 v2; // rsi
	__int128 v4; // xmm6
	float v5; // xmm7_4
	__int128* v6; // rax
	int* v7; // r15
	int* v8; // rax
	__m128* v9; // rbx
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // r14
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	void(__fastcall * **v17)(_QWORD); // r14
	__int64 v18; // r8
	unsigned int v20; // edx
	__int64 v21; // r8
	int* v22; // rax
	__int64 v23; // rcx
	char* v24; // rax
	char* v25; // rax
	__int64 v26; // rdx
	__int64 v27; // r14
	__int64 v28; // rdx
	__int64 v29; // rbp
	__int64 v30; // rcx
	unsigned int v31; // ebx
	__int128 v32[2]; // [rsp+30h] [rbp-98h] BYREF
	__int128 v33[2]; // [rsp+50h] [rbp-78h] BYREF
	int* v34; // [rsp+D8h] [rbp+10h] BYREF
	int* v35; // [rsp+E0h] [rbp+18h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2 || !sub_1400F0960(a1, 2u, (float*)v32) || !sub_1400F0960(a1, 3u, (float*)v33))
		return 0i64;
	v4 = xmmword_140B7B240;
	v5 = sub_140058480((__int64)a1, 4);
	v6 = (__int128*)sub_140118290((__int64)a1, 5);
	if (v6)
		v4 = *v6;
	LODWORD(v34) = (***(__int64(__fastcall****)(_QWORD))(v2 + 1152))(*(_QWORD*)(v2 + 1152));
	v7 = sub_140538120(v2 + 1376, (int*)&v34);
	v8 = sub_14018B280(240i64, 0);
	v9 = (__m128*)v8;
	if (v8)
	{
		v10 = v32[0];
		v11 = v33[0];
		v12 = dword_140C8A07C + 1;
		*v8 = dword_140C8A07C + 1;
		dword_140C8A07C = v12;
		*((_OWORD*)v8 + 1) = v10;
		*((_OWORD*)v8 + 2) = v11;
		*((float*)v8 + 12) = v5;
		*((_OWORD*)v8 + 4) = v4;
		sub_1401095E0((__int64)(v8 + 20));
		sub_1401095E0((__int64)&v9[8]);
		sub_1401095E0((__int64)&v9[11]);
		v13 = qword_140C65898;
		v14 = 0i64;
		v15 = _mm_sub_ps(v9[2], v9[1]);
		v16 = _mm_mul_ps(v15, v15);
		v9[14].m128_f32[0] = fsqrt(
			(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
		if (v13)
			v14 = *(_QWORD*)(v13 + 29504);
		if (v14 && (!v9[5].m128_u64[0] || !sub_14002C740((__int64)&v9[6], L"LineFill")))
		{
			v17 = (void(__fastcall***)(_QWORD))sub_140108E80(v14 + 240, (const __m128i*)L"LineFill");
			if (v17)
			{
				v18 = 0i64;
				while (aLinefill_0[++v18] != 0)
					;
				sub_14001C480((__int64)&v9[6], (int*)L"LineFill", (int*)&aLinefill_0[v18]);
			}
			sub_1401097F0((__m128*)v9[5].m128_u64, v17);
		}
	}
	else
	{
		v9 = 0i64;
	}
	v20 = v9->m128_i32[0];
	v21 = *((_QWORD*)v7 + 103);
	v22 = (int*)v21;
	v23 = *(_QWORD*)(v21 + 8);
	while (v23)
	{
		if (*(_DWORD*)(v23 + 32) < v20)
		{
			v23 = *(_QWORD*)(v23 + 24);
		}
		else
		{
			v22 = (int*)v23;
			v23 = *(_QWORD*)(v23 + 16);
		}
	}
	if (v22 == (int*)v21 || v20 < v22[8])
	{
		LODWORD(v32[0]) = v9->m128_i32[0];
		*((_QWORD*)&v32[0] + 1) = 0i64;
		v34 = v22;
		sub_140055C60((__int64)(v7 + 204), &v35, (__int64*)&v34, v32);
		v22 = v35;
	}
	*((_QWORD*)v22 + 5) = v9;
	v24 = (char*)sub_140056BB0(a1, 6u, 0i64);
	sub_14018F2D0(v33, v24);
	v25 = (char*)sub_140056BB0(a1, 7u, 0i64);
	sub_14018F2D0(v32, v25);
	v26 = *(_QWORD*)(v2 + 32);
	v27 = *((_QWORD*)&v33[0] + 1);
	if (v26)
		sub_140109710((__int64*)&v9[8], v26 + 240, *((__m128i**) & v33[0] + 1), 0);
	v28 = *(_QWORD*)(v2 + 32);
	v29 = *((_QWORD*)&v32[0] + 1);
	if (v28)
		sub_140109710((__int64*)&v9[11], v28 + 240, *((__m128i**) & v32[0] + 1), 0);
	LODWORD(v34) = (***(__int64(__fastcall****)(_QWORD))(v2 + 1152))(*(_QWORD*)(v2 + 1152));
	sub_140538120(v2 + 1376, (int*)&v34);
	v31 = sub_140774A40(v30, a1, (__int64)v9);
	if (v29)
		sub_14018B900(v29, 0);
	if (v27)
		sub_14018B900(v27, 0);
	return v31;
}
// 140537282: variable 'v30' is possibly undefined
// 140B4F130: using guessed type wchar_t aLinefill_0[9];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8A07C: using guessed type int dword_140C8A07C;

