//----- (00000001403F3820) ----------------------------------------------------
void __fastcall sub_1403F3820(__int64 a1)
{
	_QWORD* v1; // rax
	__int64 v2; // [rsp+30h] [rbp-28h] BYREF
	int v3; // [rsp+38h] [rbp-20h]
	int v4; // [rsp+3Ch] [rbp-1Ch]
	__m128 v5; // [rsp+40h] [rbp-18h] BYREF

	if (*(_QWORD*)(a1 + 31016) && dword_140C636A8 - *(_DWORD*)(a1 + 31564) - 7000 >= 0)
	{
		v3 = 64;
		v2 = 0i64;
		v1 = *(_QWORD**)(a1 + 31024);
		v5 = (__m128)xmmword_140B7B240;
		v4 = 64;
		if (v1)
			sub_140103CF0(
				v1,
				(unsigned int*)&v2,
				&v5,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 31032)) * *(float*)(a1 + 31036)));
	}
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C636A8: using guessed type int dword_140C636A8;
// 1403F3820: using guessed type __m128 var_18;

