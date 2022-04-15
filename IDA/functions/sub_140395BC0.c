//----- (0000000140395BC0) ----------------------------------------------------
_OWORD* __fastcall sub_140395BC0(__int64* a1, _OWORD* a2, unsigned int a3)
{
	__int64 v3; // rax
	_OWORD* v7; // rax
	__int128 v8; // xmm0
	_OWORD* result; // rax
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 40))(a1, v10);
	if (a3 > 2)
	{
		*a2 = xmmword_140C798A0;
		v8 = xmmword_140C798B0;
	}
	else
	{
		v7 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 256i64))(a1[2]);
		*a2 = *v7;
		v8 = v7[1];
	}
	result = a2;
	a2[1] = v8;
	return result;
}
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;
// 140395BC0: using guessed type int var_18[6];

