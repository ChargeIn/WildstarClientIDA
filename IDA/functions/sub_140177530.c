//----- (0000000140177530) ----------------------------------------------------
__int64 __fastcall sub_140177530(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rdi
	__int64 v9; // rsi
	unsigned __int64 i; // rbx
	wchar_t* v11; // rdx
	__int64 v12; // rax
	wchar_t* v13; // rax
	int* v14; // rax
	__int64 v15; // rsi
	unsigned __int64 j; // rbx
	wchar_t* v17; // rdx
	__int64 v18; // rax
	wchar_t* v19; // rax
	__int64 v20; // rax
	int* v21; // rax
	__int64* v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	bool v26; // [rsp+40h] [rbp-C8h] BYREF
	_QWORD* v27; // [rsp+48h] [rbp-C0h]
	_OWORD v28[6]; // [rsp+50h] [rbp-B8h] BYREF

	v27 = a3;
	v8 = 0i64;
	sub_1400D45E0((__int64)v28, a1, a2, a5, 0i64);
	v9 = 0i64;
	for (i = 0i64; i < 3; ++i)
	{
		v11 = off_140A3A4E0[i];
		v26 = 0;
		v12 = sub_1401A6B80(a5, v11);
		if (v12)
		{
			v13 = (wchar_t*)sub_1401A4F40(v12 + 32);
			sub_1401A52E0(v13, &v26);
			if (v26)
				v9 |= 1i64 << i;
		}
	}
	v14 = sub_14018B280(1088i64, 0);
	if (v14)
		v15 = sub_140176BA0((__int64)v14, a1, a2, v27, v28, a4, v9);
	else
		v15 = 0i64;
	for (j = 0i64; j < 6; ++j)
	{
		v17 = off_140A3A978[j];
		v26 = 0;
		v18 = sub_1401A6B80(a5, v17);
		if (v18)
		{
			v19 = (wchar_t*)sub_1401A4F40(v18 + 32);
			sub_1401A52E0(v19, &v26);
			if (v26)
				v8 |= 1i64 << j;
		}
	}
	*(_DWORD*)(*(_QWORD*)(v15 + 1024) + 704i64) = v8;
	v20 = sub_1401A6B80(a5, L"Font");
	if (v20)
	{
		v21 = (int*)sub_1401A4F40(v20 + 32);
		if (v21)
		{
			v22 = *(__int64**)(v15 + 1024);
			v23 = sub_1400E58C0(v22[4], v21);
			v24 = v22[86];
			v22[87] = v23;
			if (v24)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v24 + 40i64))(v24, *(_QWORD*)(v23 + 96));
		}
	}
	return v15;
}
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A3A4E0: using guessed type wchar_t *off_140A3A4E0[3];
// 140A3A978: using guessed type wchar_t *off_140A3A978[6];
// 140177530: using guessed type _OWORD var_B8[6];

