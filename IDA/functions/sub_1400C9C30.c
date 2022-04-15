//----- (00000001400C9C30) ----------------------------------------------------
float __fastcall sub_1400C9C30(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rdx
	_DWORD* v4; // rax
	__int64(__fastcall * **v5)(); // rcx
	double v6; // xmm0_8
	__m128* v7; // rax
	bool v8; // zf
	__int128 v10; // [rsp+20h] [rbp-48h] BYREF
	int v11; // [rsp+30h] [rbp-38h]
	char v12; // [rsp+34h] [rbp-34h]
	int v13; // [rsp+38h] [rbp-30h]
	int v14; // [rsp+3Ch] [rbp-2Ch]
	__int64(__fastcall * *v15)(); // [rsp+40h] [rbp-28h] BYREF
	int v16; // [rsp+48h] [rbp-20h]
	int v17; // [rsp+50h] [rbp-18h]
	char v18; // [rsp+54h] [rbp-14h]
	int v19; // [rsp+58h] [rbp-10h]
	int v20; // [rsp+5Ch] [rbp-Ch]

	v1 = *(_QWORD*)(a1 + 608);
	if (v1)
	{
		v3 = v1 + 80;
		if (v3)
			v4 = (_DWORD*)(v3 + 8);
		else
			v4 = 0i64;
		v5 = (__int64(__fastcall***)()) & v10;
		DWORD2(v10) = *v4;
		*(_QWORD*)&v10 = off_140B54E00;
		v11 = *(_DWORD*)(v3 + 16);
		v12 = *(_BYTE*)(v3 + 20);
		v13 = *(_DWORD*)(v3 + 24);
		v14 = *(_DWORD*)(v3 + 28);
	}
	else
	{
		v19 = 1065353216;
		v16 = dword_140C636A8;
		v17 = 1065353216;
		v20 = 0;
		v18 = 0;
		v5 = &v15;
		v15 = off_140B54E00;
	}
	v6 = ((double(__fastcall*)(__int64(__fastcall***)())) * *v5)(v5);
	v7 = *(__m128**)(a1 + 448);
	if (v7)
	{
		v8 = (v7[4].m128_i8[8] & 4) == 0;
		v10 = xmmword_140B7B240;
		if (!v8)
			*(float*)&v6 = _mm_shuffle_ps(v7[7], v7[7], 255).m128_f32[0] * *(float*)&v6;
	}
	return *(float*)&v6;
}
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C636A8: using guessed type int dword_140C636A8;

