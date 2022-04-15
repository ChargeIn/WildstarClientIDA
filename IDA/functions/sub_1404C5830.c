//----- (00000001404C5830) ----------------------------------------------------
__int64 __fastcall sub_1404C5830(__int64* a1)
{
	int v2; // xmm0_4
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 result; // rax
	_QWORD v6[2]; // [rsp+20h] [rbp-C8h] BYREF
	__int128 v7; // [rsp+30h] [rbp-B8h]
	__m128 v8; // [rsp+60h] [rbp-88h] BYREF
	__int128 v9[6]; // [rsp+70h] [rbp-78h] BYREF

	v6[1] = 0i64;
	*(_QWORD*)&v7 = a1 + 64;
	*((_QWORD*)&v7 + 1) = &v8;
	v2 = *((_DWORD*)a1 + 135);
	v8 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * ((unsigned int*)a1 + 132), (__m128) * ((unsigned int*)a1 + 134)),
		_mm_unpacklo_ps((__m128) * ((unsigned int*)a1 + 133), (__m128)0i64));
	v9[1] = v7;
	LODWORD(v6[0]) = v2;
	v9[0] = v6[0];
	sub_1401B0590((int*)v9, (__int64)v6);
	*((_OWORD*)a1 + 9) = *(_OWORD*)v3;
	*((_DWORD*)a1 + 40) = *(_DWORD*)(v3 + 16);
	*((_DWORD*)a1 + 41) = *(_DWORD*)(v3 + 20);
	*((_DWORD*)a1 + 42) = *(_DWORD*)(v3 + 24);
	*((_DWORD*)a1 + 43) = *(_DWORD*)(v3 + 28);
	v4 = *a1;
	*((_DWORD*)a1 + 190) = 1;
	result = (*(__int64(__fastcall**)(__int64*, _QWORD*))(v4 + 280))(a1, v6);
	*((_DWORD*)a1 + 161) = result;
	return result;
}
// 1404C58C2: variable 'v3' is possibly undefined

