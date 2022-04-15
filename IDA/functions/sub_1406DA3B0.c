//----- (00000001406DA3B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406DA3B0(__int64 a1)
{
	bool v1; // zf
	unsigned int v2; // eax
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx
	unsigned int v7[4]; // [rsp+30h] [rbp-48h] BYREF
	__int128 v8; // [rsp+40h] [rbp-38h] BYREF
	__int128 v9; // [rsp+50h] [rbp-28h] BYREF

	v1 = *(_DWORD*)(a1 + 1032) == -1;
	v7[0] = *(_DWORD*)(a1 + 716);
	v2 = *(_DWORD*)(a1 + 720);
	v8 = xmmword_140B7B240;
	v7[1] = v2;
	v7[2] = *(_DWORD*)(a1 + 724);
	v7[3] = *(_DWORD*)(a1 + 728);
	if (v1 && (*(_BYTE*)(a1 + 664) & 1) == 0)
		v8 = xmmword_140B7B0C0;
	v4 = *(_QWORD**)(a1 + 1040);
	if (v4)
		sub_140103CF0(
			v4,
			v7,
			(__m128*) & v8,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1048)) * *(float*)(a1 + 1052)));
	if (*(_BYTE*)(a1 + 1024))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v5 = *(_QWORD**)(a1 + 1088);
		v9 = xmmword_140B7B240;
		if (v5)
			sub_140103CF0(
				v5,
				v7,
				(__m128*) & v9,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1096)) * *(float*)(a1 + 1100)));
	}
	return sub_1400CEB90(a1);
}
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

