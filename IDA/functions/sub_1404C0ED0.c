//----- (00000001404C0ED0) ----------------------------------------------------
__int64 __fastcall sub_1404C0ED0(__int64 a1)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm2
	int v4; // xmm0_4
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	__int64 result; // rax
	__m128 v8; // [rsp+20h] [rbp-E0h] BYREF
	_QWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v10; // [rsp+40h] [rbp-C0h]
	__m128 v11[4]; // [rsp+50h] [rbp-B0h] BYREF
	char v12[64]; // [rsp+90h] [rbp-70h] BYREF
	char v13[64]; // [rsp+D0h] [rbp-30h] BYREF
	__m128* v14[2]; // [rsp+110h] [rbp+10h] BYREF
	__m128 v15[4]; // [rsp+120h] [rbp+20h] BYREF
	__int128 v16[6]; // [rsp+160h] [rbp+60h] BYREF

	*(_QWORD*)&v10 = a1 + 256;
	v9[1] = 0i64;
	v2 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 272), (__m128) * (unsigned int*)(a1 + 280));
	v3 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 276), (__m128)0i64);
	v4 = *(_DWORD*)(a1 + 284);
	*((_QWORD*)&v10 + 1) = &v8;
	LODWORD(v9[0]) = v4;
	v8 = _mm_unpacklo_ps(v2, v3);
	v16[0] = v9[0];
	v16[1] = v10;
	sub_1401B0590((int*)v16, (__int64)v12);
	v8.m128_u64[0] = a1 + 544;
	v14[0] = (__m128*)(a1 + 544);
	v8.m128_u64[1] = (unsigned __int64)v12;
	v14[1] = (__m128*)v12;
	sub_1404C27A0(a1, (__int64)v13);
	sub_1401AFB10(v14, v15);
	v8.m128_u64[1] = v5;
	*((_QWORD*)&v16[0] + 1) = v5;
	v8.m128_u64[0] = (unsigned __int64)v15;
	*(_QWORD*)&v16[0] = v15;
	sub_1401AFB10((__m128**)v16, v11);
	v6 = sub_1404BD000((__int64)v9, v11);
	*(_OWORD*)(a1 + 144) = *(_OWORD*)v6;
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(v6 + 16);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(v6 + 20);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(v6 + 24);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(v6 + 28);
	*(_OWORD*)(a1 + 512) = *(_OWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 528) = *(_DWORD*)(a1 + 160);
	*(_DWORD*)(a1 + 532) = *(_DWORD*)(a1 + 164);
	*(_DWORD*)(a1 + 536) = *(_DWORD*)(a1 + 168);
	result = *(unsigned int*)(a1 + 172);
	*(_DWORD*)(a1 + 540) = result;
	return result;
}
// 1404C0FAD: variable 'v5' is possibly undefined
// 1404C0ED0: using guessed type char var_100[64];
// 1404C0ED0: using guessed type __m128 var_B0[4];
// 1404C0ED0: using guessed type __m128 var_180[4];

