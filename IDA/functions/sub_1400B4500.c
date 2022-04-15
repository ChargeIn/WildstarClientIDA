//----- (00000001400B4500) ----------------------------------------------------
__int64 __fastcall sub_1400B4500(__int64 a1, int* a2, unsigned __int16* a3)
{
	__int64 v6; // rdi
	int* v7; // rax
	int* v8; // rbx
	unsigned __int64 v9; // rdi
	__int64 v10; // rdi
	int* v11; // rax
	unsigned __int16* v12; // rsi
	_QWORD* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rbx
	_QWORD* v18; // rax
	int* v19; // [rsp+20h] [rbp-38h] BYREF
	__int64 v20; // [rsp+28h] [rbp-30h]

	dword_140C67254 = dword_140C67250;
	dword_140C67250 = 0;
	if (!(_QWORD)xmmword_140C67080)
		return 2147500037i64;
	if (a2)
	{
		v6 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v6;
			while (*((_WORD*)a2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, a2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
	}
	else
	{
		v8 = 0i64;
	}
	v10 = *((_QWORD*)v8 - 1);
	v19 = v8;
	v20 = v10;
	v11 = sub_14018B280(2 * v10 + 18, 0);
	if (v11)
	{
		*(_QWORD*)v11 = off_140B55060;
		*((_QWORD*)v11 + 1) = v10;
	}
	else
	{
		v11 = 0i64;
	}
	v12 = (unsigned __int16*)(v11 + 4);
	sub_1401B2410(&v19, (__int64)(v11 + 4));
	v12[v10] = 0;
	(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	v13 = sub_14018F0E0(&v19, v12);
	v14 = xmmword_140C67180;
	*(_QWORD*)&xmmword_140C67180 = v13[1];
	v13[1] = v14;
	v15 = *((_QWORD*)&xmmword_140C67180 + 1);
	*((_QWORD*)&xmmword_140C67180 + 1) = v13[2];
	v13[2] = v15;
	v16 = qword_140C67190;
	qword_140C67190 = v13[3];
	v13[3] = v16;
	if (v20)
		sub_14018B900(v20, 0);
	sub_14001B1A0((__int64)&unk_140C67198, (int*)xmmword_140C67180, *((int**)&xmmword_140C67180 + 1));
	v17 = (*(__int64(__fastcall**)(_QWORD, __int64*))(*(_QWORD*)xmmword_140C67080 + 64i64))(
		xmmword_140C67080,
		&qword_140C67118);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 48i64))(v17, xmmword_140C67180);
	v18 = sub_14018F0E0(&v19, a3);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 56i64))(v17, v18[1]);
	if (v20)
		sub_14018B900(v20, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 64i64))(v17, xmmword_140C66FF0);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	dword_140C66FB0 = 8;
	if (v12)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 8);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C66FB0: using guessed type int dword_140C66FB0;
// 140C66FF0: using guessed type __int128 xmmword_140C66FF0;
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C67118: using guessed type __int64 qword_140C67118;
// 140C67180: using guessed type __int128 xmmword_140C67180;
// 140C67190: using guessed type __int64 qword_140C67190;
// 140C67250: using guessed type int dword_140C67250;
// 140C67254: using guessed type int dword_140C67254;

