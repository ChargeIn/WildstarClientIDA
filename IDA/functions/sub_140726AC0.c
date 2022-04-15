//----- (0000000140726AC0) ----------------------------------------------------
void __fastcall sub_140726AC0(__int64* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	_QWORD* v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rdi
	__int64 v15; // rax
	__int64 v16; // rsi
	__int64 v17; // r14
	_QWORD* v18; // rdi
	int i; // esi
	__int64 v20; // rdi
	__int64 v21; // rdi
	__int64 v22; // rdi
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	int v29[196]; // [rsp+20h] [rbp-338h] BYREF

	v1 = a1[180];
	a1[153] = 0i64;
	a1[152] = 0i64;
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 16);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v1 + 16) = 0i64;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[180] + 8i64))(a1[180]);
		a1[180] = 0i64;
	}
	v4 = a1[181];
	if (v4)
	{
		v5 = *(_QWORD*)(v4 + 16);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(v4 + 16) = 0i64;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[181] + 8i64))(a1[181]);
		a1[181] = 0i64;
	}
	v6 = (_QWORD*)a1[174];
	if (v6)
		sub_140726DC0(v6);
	v7 = *a1;
	if (*a1)
	{
		v8 = qword_140C65C48;
		if (qword_140C65C48 == v7)
			v8 = 0i64;
		qword_140C65C48 = v8;
		sub_14018B900(v7, 0);
	}
	*a1 = 0i64;
	sub_1407E4830(v29, 0i64, 0x310ui64);
	sub_1402C8730((__int64)(a1 + 12), (__int64)v29);
	v9 = a1[156];
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		a1[156] = 0i64;
	}
	v10 = a1[155];
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		a1[155] = 0i64;
	}
	v11 = (_QWORD*)a1[175];
	if (v11)
		sub_140726E40(v11);
	v12 = (_QWORD*)a1[176];
	if (v12)
		sub_140726E40(v12);
	v13 = (_QWORD*)a1[177];
	if (v13)
		sub_140726E40(v13);
	v14 = a1[171];
	if (v14)
	{
		sub_140789320((_QWORD*)a1[171]);
		sub_14018B900(v14, 0);
	}
	v15 = a1[159];
	if (v15)
	{
		v16 = *(int*)(v15 - 8);
		v17 = v15 - 8;
		v18 = (_QWORD*)(v15 + 152 * v16);
		for (i = v16 - 1; i >= 0; --i)
		{
			v18 -= 19;
			sub_140789C40(v18);
		}
		sub_14018B900(v17, 0);
	}
	v20 = a1[148];
	if (v20)
	{
		sub_14078A5C0(a1[148]);
		sub_14018B900(v20, 0);
	}
	v21 = a1[147];
	if (v21)
	{
		sub_14078AA20(a1[147]);
		sub_14018B900(v21, 0);
	}
	v22 = a1[146];
	if (v22)
	{
		sub_14078ADF0(a1[146]);
		sub_14018B900(v22, 0);
	}
	v23 = a1[193];
	if (v23)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		a1[193] = 0i64;
	}
	v24 = a1[192];
	if (v24)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
		a1[192] = 0i64;
	}
	v25 = a1[144];
	if (v25)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		a1[144] = 0i64;
	}
	v26 = a1[145];
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		a1[145] = 0i64;
	}
	v27 = a1[143];
	if (v27)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
		a1[143] = 0i64;
	}
	v28 = a1[178];
	if (v28)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v28 + 8i64))(v28, 1i64);
		a1[178] = 0i64;
	}
}
// 140C65C48: using guessed type __int64 qword_140C65C48;
// 140726AC0: using guessed type int var_338[196];

