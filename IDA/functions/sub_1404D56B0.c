#include "../winhttp.h"

//----- (00000001404D56B0) ----------------------------------------------------
__int64 __fastcall sub_1404D56B0(__int64 a1)
{
	__int64 v1; // rbx
	__int128 v3; // xmm1
	int v4; // eax
	__int128 v5; // xmm1
	int v6; // eax
	int v7; // eax
	__int128 v8; // xmm1
	__m128 v9; // xmm0
	__int64 result; // rax
	__int128 v11; // [rsp+48h] [rbp-C0h] BYREF
	__int128 v12; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v13; // [rsp+68h] [rbp-A0h] BYREF
	_OWORD v14[2]; // [rsp+78h] [rbp-90h] BYREF
	int v15; // [rsp+98h] [rbp-70h]
	__int128 v16; // [rsp+A8h] [rbp-60h]
	__int128 v17; // [rsp+B8h] [rbp-50h]
	int v18; // [rsp+C8h] [rbp-40h]
	__int128 v19; // [rsp+D8h] [rbp-30h]
	__int128 v20; // [rsp+E8h] [rbp-20h]
	int v21; // [rsp+F8h] [rbp-10h]
	__int64 v22[22]; // [rsp+108h] [rbp+0h] BYREF

	v1 = a1 + 208;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_DWORD*)(a1 + 72) = 0;
	*(_DWORD*)(a1 + 80) = 0;
	*(_DWORD*)(a1 + 84) = 1;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)a1 = off_140B690F0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_DWORD*)(a1 + 120) = -1;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)(a1 + 128) = 1414420037;
	*(_DWORD*)(a1 + 196) = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	sub_1407E4830((int*)(a1 + 208), 0i64, 0x310ui64);
	v11 = xmmword_140B7A4B0;
	*(_DWORD*)(a1 + 992) = 6;
	v12 = xmmword_140B7AFE0;
	v13 = xmmword_140B7B070;
	*(_QWORD*)(a1 + 1000) = 0i64;
	v22[0] = (__int64)&v13;
	v22[1] = (__int64)&v12;
	v22[2] = (__int64)&v11;
	sub_1401AEFA0((__int64)v22, (__int64)v14);
	v3 = v14[1];
	v4 = v15;
	*(_OWORD*)v1 = v14[0];
	*(_OWORD*)(v1 + 16) = v3;
	*(_DWORD*)(v1 + 32) = v4;
	v5 = v17;
	v6 = v18;
	*(_OWORD*)(v1 + 48) = v16;
	*(_OWORD*)(v1 + 64) = v5;
	*(_DWORD*)(v1 + 80) = v6;
	v7 = v21;
	v8 = v20;
	*(_OWORD*)(v1 + 96) = v19;
	v9 = (__m128)(unsigned int)dword_140C3B438;
	*(_OWORD*)(v1 + 112) = v8;
	*(_DWORD*)(v1 + 128) = v7;
	*(_OWORD*)(a1 + 352) = xmmword_140B7B180;
	*(_OWORD*)(a1 + 368) = xmmword_140B7B1A0;
	*(_DWORD*)(a1 + 896) = 1098907648;
	v9.m128_f32[0] = (float)(v9.m128_f32[0] * 0.0055555557) * 24.75;
	v9.m128_f32[0] = sub_1408FE3D0(*(double*)v9.m128_u64);
	result = a1;
	*(__m128*)(a1 + 384) = _mm_unpacklo_ps((__m128)xmmword_140B7A490, _mm_unpacklo_ps(v9, (__m128)0i64));
	*(_DWORD*)(a1 + 904) = 1120403456;
	*(_DWORD*)(a1 + 908) = 1125515264;
	return result;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B690F0: using guessed type __int64 (__fastcall *off_140B690F0[9])();
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AFE0: using guessed type __int128 xmmword_140B7AFE0;
// 140B7B070: using guessed type __int128 xmmword_140B7B070;
// 140B7B180: using guessed type __int128 xmmword_140B7B180;
// 140B7B1A0: using guessed type __int128 xmmword_140B7B1A0;
// 140C3B438: using guessed type int dword_140C3B438;

