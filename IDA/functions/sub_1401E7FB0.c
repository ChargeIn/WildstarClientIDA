//----- (00000001401E7FB0) ----------------------------------------------------
__m128 __fastcall sub_1401E7FB0(_QWORD* a1, unsigned int a2)
{
	__int128 v2; // xmm8
	__int64 v4; // rcx
	__int128 v6; // xmm7
	float v7; // xmm6_4
	__int64 v8; // rcx
	__int128 v9; // xmm7
	__int64 v10; // rcx
	__int128 v11; // xmm7
	__int64 v12; // rcx
	__int128 v13; // xmm7
	__int64 v14; // rcx
	__int128 v15; // xmm7

	v2 = (unsigned int)dword_140C3F648;
	v4 = a1[11];
	if (v4)
	{
		v6 = 0i64;
		v7 = *(float*)&dword_140C3F648;
		*(float*)&v6 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v4 + 792i64))(v4);
		v2 = v6;
		*(float*)&v2 = fminf(*(float*)&v6, v7);
	}
	v8 = a1[7];
	if (v8)
	{
		v9 = 0i64;
		*(float*)&v9 = fminf((*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 792i64))(v8, a2), *(float*)&v2);
		v2 = v9;
	}
	v10 = a1[6];
	if (v10)
	{
		v11 = 0i64;
		*(float*)&v11 = fminf((*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 792i64))(v10, a2), *(float*)&v2);
		v2 = v11;
	}
	v12 = a1[10];
	if (v12)
	{
		v13 = 0i64;
		*(float*)&v13 = fminf((*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 792i64))(v12, a2), *(float*)&v2);
		v2 = v13;
	}
	v14 = a1[9];
	if (v14)
	{
		v15 = 0i64;
		*(float*)&v15 = fminf((*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v14 + 792i64))(v14, a2), *(float*)&v2);
		return (__m128)v15;
	}
	else
	{
		return (__m128)v2;
	}
}
// 140C3F648: using guessed type int dword_140C3F648;

