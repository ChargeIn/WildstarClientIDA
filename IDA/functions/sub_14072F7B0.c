//----- (000000014072F7B0) ----------------------------------------------------
__int64 __fastcall sub_14072F7B0(_QWORD* a1)
{
	__int64 v2; // rax
	int* v3; // rax
	__int64 v4; // rax
	int* v6; // rax
	_QWORD* v7; // rax
	unsigned __int16* v8; // rdx
	__int64 v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-E0h] BYREF
	int* v14; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *v15)(); // [rsp+40h] [rbp-C0h] BYREF
	char v16[8]; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v17; // [rsp+50h] [rbp-B0h]
	char v18[8]; // [rsp+98h] [rbp-68h] BYREF
	unsigned __int16* v19; // [rsp+A0h] [rbp-60h]
	unsigned __int16* v20; // [rsp+A8h] [rbp-58h]
	__int128 v21; // [rsp+100h] [rbp+0h]
	int* v22; // [rsp+110h] [rbp+10h]
	__int64 v23; // [rsp+120h] [rbp+20h] BYREF
	__int64 v24; // [rsp+128h] [rbp+28h]
	int* v25; // [rsp+158h] [rbp+58h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D160D, 0i64);
		return 1i64;
	}
	sub_14018F2D0(&v13, *(char**)(*(_QWORD*)v2 + 32i64));
	sub_1400B6F30((__int64)&v15);
	v22 = 0i64;
	v21 = 0i64;
	v15 = off_140B69230;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v21 = v3;
	*((_QWORD*)&v21 + 1) = v3;
	v22 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = 0i64;
	while (a1n_16[++v4] != 0)
		;
	sub_14001C480((__int64)v16, (int*)L"$1n", (int*)&a1n_16[v4]);
	v6 = sub_14018B280(96i64, 0);
	if (v6)
		v7 = (_QWORD*)sub_1404DDB40((__int64)v6, v14);
	else
		v7 = 0i64;
	sub_1400B7480((__int64)&v15, v7);
	v8 = v19;
	if (v19 == v20 && qword_140C63648)
	{
		v25 = 0i64;
		(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), int**))qword_140C63648)(
			qword_140C63648,
			v17,
			&v15,
			&v25);
		if (v25)
		{
			v9 = 0i64;
			if (*(_WORD*)v25)
			{
				do
					++v9;
				while (*((_WORD*)v25 + v9));
			}
			sub_14001C480((__int64)v18, v25, (int*)((char*)v25 + 2 * v9));
			v8 = v19;
			goto LABEL_18;
		}
		v8 = v19;
		if (v19 != v20)
		{
			*v19 = 0;
			v8 = v19;
			v20 = v19;
		LABEL_18:
			if (v25)
			{
				(*(void(__fastcall**)(int*, unsigned __int16*))(*((_QWORD*)v25 - 2) + 8i64))(v25 - 4, v8);
				v8 = v19;
			}
		}
	}
	v10 = (unsigned __int64*)sub_14018F0E0(&v23, v8)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710((__int64)a1, v10, v11);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v24)
		sub_14018B900(v24, 0);
	if ((_QWORD)v21)
		sub_14018B900(v21, 0);
	sub_1400B7390(&v15);
	if (v14)
		sub_14018B900((__int64)v14, 0);
	return 1i64;
}
// 140B46CC8: using guessed type wchar_t a1n_16[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 14072F7B0: using guessed type char var_F8[8];
// 14072F7B0: using guessed type char var_A8[8];

