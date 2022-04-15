//----- (00000001406C2550) ----------------------------------------------------
__int64 __fastcall sub_1406C2550(_QWORD* a1)
{
	__int64 v2; // r14
	__int128 v4; // xmm6
	float v5; // xmm7_4
	__int128* v6; // rax
	int* v7; // rbx
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rbp
	__m128 v13; // xmm2
	__m128 v14; // xmm1
	void(__fastcall * **v15)(_QWORD); // rbp
	__int64 v16; // r8
	__int64 v18; // r8
	unsigned int v19; // edx
	__int64 v20; // rcx
	int* v21; // rax
	char* v22; // rax
	char* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rdx
	__int64 v26; // rbp
	__int64 v27; // rdx
	__int64 v28; // rsi
	unsigned int v29; // ebx
	__int128 v30[2]; // [rsp+30h] [rbp-88h] BYREF
	__int128 v31[2]; // [rsp+50h] [rbp-68h] BYREF
	int* v32; // [rsp+C8h] [rbp+10h] BYREF
	int* v33; // [rsp+D0h] [rbp+18h] BYREF

	v2 = sub_1406C01C0(a1);
	if (!v2 || !sub_1400F0960(a1, 2u, (float*)v30) || !sub_1400F0960(a1, 3u, (float*)v31))
		return 0i64;
	v4 = xmmword_140B7B240;
	v5 = sub_140058480((__int64)a1, 4);
	v6 = (__int128*)sub_140118290((__int64)a1, 5);
	if (v6)
		v4 = *v6;
	v7 = sub_14018B280(240i64, 0);
	if (v7)
	{
		v8 = v30[0];
		v9 = v31[0];
		v10 = dword_140C8A07C + 1;
		*v7 = dword_140C8A07C + 1;
		dword_140C8A07C = v10;
		*((_OWORD*)v7 + 1) = v8;
		*((_OWORD*)v7 + 2) = v9;
		*((float*)v7 + 12) = v5;
		*((_OWORD*)v7 + 4) = v4;
		sub_1401095E0((__int64)(v7 + 20));
		sub_1401095E0((__int64)(v7 + 32));
		sub_1401095E0((__int64)(v7 + 44));
		v11 = qword_140C65898;
		v12 = 0i64;
		v13 = _mm_sub_ps(*((__m128*)v7 + 2), *((__m128*)v7 + 1));
		v14 = _mm_mul_ps(v13, v13);
		*((float*)v7 + 56) = fsqrt(
			(float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0]);
		if (v11)
			v12 = *(_QWORD*)(v11 + 29504);
		if (v12 && (!*((_QWORD*)v7 + 10) || !sub_14002C740((__int64)(v7 + 24), L"LineFill")))
		{
			v15 = (void(__fastcall***)(_QWORD))sub_140108E80(v12 + 240, (const __m128i*)L"LineFill");
			if (v15)
			{
				v16 = 0i64;
				while (aLinefill_0[++v16] != 0)
					;
				sub_14001C480((__int64)(v7 + 24), (int*)L"LineFill", (int*)&aLinefill_0[v16]);
			}
			sub_1401097F0((_QWORD*)v7 + 10, v15);
		}
	}
	else
	{
		v7 = 0i64;
	}
	v18 = *(_QWORD*)(v2 + 1848);
	v19 = *v7;
	v20 = *(_QWORD*)(v18 + 8);
	v21 = (int*)v18;
	while (v20)
	{
		if (*(_DWORD*)(v20 + 32) < v19)
		{
			v20 = *(_QWORD*)(v20 + 24);
		}
		else
		{
			v21 = (int*)v20;
			v20 = *(_QWORD*)(v20 + 16);
		}
	}
	if (v21 == (int*)v18 || v19 < v21[8])
	{
		LODWORD(v30[0]) = *v7;
		*((_QWORD*)&v30[0] + 1) = 0i64;
		v32 = v21;
		sub_140055C60(v2 + 1840, &v33, (__int64*)&v32, v30);
		v21 = v33;
	}
	*((_QWORD*)v21 + 5) = v7;
	v22 = (char*)sub_140056BB0(a1, 6u, 0i64);
	sub_14018F2D0(v31, v22);
	v23 = (char*)sub_140056BB0(a1, 7u, 0i64);
	sub_14018F2D0(v30, v23);
	v25 = *(_QWORD*)(v2 + 32);
	v26 = *((_QWORD*)&v31[0] + 1);
	if (v25)
		sub_140109710((__int64*)v7 + 16, v25 + 240, *((__m128i**) & v31[0] + 1), 0);
	v27 = *(_QWORD*)(v2 + 32);
	v28 = *((_QWORD*)&v30[0] + 1);
	if (v27)
		sub_140109710((__int64*)v7 + 22, v27 + 240, *((__m128i**) & v30[0] + 1), 0);
	v29 = sub_140774A40(v24, a1, (__int64)v7);
	if (v28)
		sub_14018B900(v28, 0);
	if (v26)
		sub_14018B900(v26, 0);
	return v29;
}
// 1406C2836: variable 'v24' is possibly undefined
// 140B4F130: using guessed type wchar_t aLinefill_0[9];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8A07C: using guessed type int dword_140C8A07C;

