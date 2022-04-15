//----- (0000000140394760) ----------------------------------------------------
_OWORD* __fastcall sub_140394760(__int64* a1, _OWORD* a2, int a3)
{
	__int64 v3; // rax
	int v7; // ebx
	int v8; // ebx
	__int128 v9; // xmm0
	_OWORD* v10; // rax
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v12[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 40))(a1, v12);
	if (!a3)
	{
		v10 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1168i64))(a1[2]);
		goto LABEL_10;
	}
	v7 = a3 - 1;
	if (!v7)
	{
		v10 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1192i64))(a1[2]);
		goto LABEL_10;
	}
	v8 = v7 - 1;
	if (!v8)
	{
		v10 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1208i64))(a1[2]);
		goto LABEL_10;
	}
	if (v8 == 1)
	{
		v10 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1224i64))(a1[2]);
	LABEL_10:
		*a2 = *v10;
		v9 = v10[1];
		goto LABEL_11;
	}
	*a2 = xmmword_140C798A0;
	v9 = xmmword_140C798B0;
LABEL_11:
	a2[1] = v9;
	return a2;
}
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;
// 140394760: using guessed type int var_18[6];

