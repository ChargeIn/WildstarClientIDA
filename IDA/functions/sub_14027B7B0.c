//----- (000000014027B7B0) ----------------------------------------------------
__int64 __fastcall sub_14027B7B0(
	__int64 a1,
	__m128i* a2,
	__int64 a3,
	unsigned int a4,
	int a5,
	int a6,
	unsigned int a7,
	__int64 a8)
{
	unsigned int v9; // r12d
	__m128i* v10; // rsi
	int v12; // ebx
	int v14; // r15d
	int v15; // ebx
	unsigned __int64 v16; // r12
	_QWORD* v17; // rbx
	int* v18; // rax
	__int64 v19; // rbx
	void(__fastcall * **v20)(_QWORD); // rcx
	int v21; // esi
	__int64 v22; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v23; // [rsp+50h] [rbp-B8h]
	__int64(__fastcall * *v24)(); // [rsp+58h] [rbp-B0h] BYREF
	__int128 v25; // [rsp+60h] [rbp-A8h]
	__m128i* v26; // [rsp+70h] [rbp-98h]
	__int64(__fastcall * *TlsValue)(); // [rsp+78h] [rbp-90h] BYREF
	__int128 v28; // [rsp+80h] [rbp-88h]
	__int64 v29; // [rsp+90h] [rbp-78h] BYREF
	__m128i v30[33]; // [rsp+98h] [rbp-70h] BYREF

	v9 = a3;
	LODWORD(v23) = a3;
	v10 = a2;
	v22 = a8;
	if (!a8 || !a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	if (a4)
	{
		if (((a4 - 3) & 0xFFFFFFFD) == 0)
		{
			*(_QWORD*)&v28 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v28 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v24 = TlsValue;
			v22 = 0x141DDFF20i64;
			v25 = v28;
			v12 = sub_1401971E0(&dword_140C8A2C8, 14, &v22, &v24);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v28 + 1));
			if (v12)
				DebugBreak();
			return 2147500037i64;
		}
		v14 = a6;
		v15 = a5;
	}
	else
	{
		v15 = 0;
		v14 = a6 & 0xFFFFFF40;
		a5 = 0;
	}
	if (sub_1401B5110(*(__int64*)&qword_140C63788, v30, a3, (__int64)a2))
		v10 = (__m128i*)sub_140263F30(v30, (__int64)v10);
	sub_14003D8F0(&v29, a1 + 24);
	*((_QWORD*)&v25 + 1) = a7;
	v24 = (__int64(__fastcall**)())__PAIR64__(a4, v9);
	*(_QWORD*)&v25 = __PAIR64__(v14, v15);
	v26 = v10;
	v16 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(a1 + 7000))(&v24);
	v17 = *(_QWORD**)(*(_QWORD*)(a1 + 6992) + 8 * (v16 % *(_QWORD*)(a1 + 6984)));
	if (!v17)
		goto LABEL_18;
	while (v16 != *v17
		|| !(*(unsigned int(__fastcall**)(__int64(__fastcall***)(), _QWORD*))(a1 + 7008))(&v24, v17 + 2))
	{
		v17 = (_QWORD*)v17[1];
		if (!v17)
			goto LABEL_18;
	}
	if (v17 == (_QWORD*)-48i64)
	{
	LABEL_18:
		v18 = sub_14018B280(296i64, 0);
		if (v18)
			v19 = sub_1402A3490((__int64)v18, a1);
		else
			v19 = 0i64;
		v21 = sub_1402A3A60(v19, v10->m128i_i32, v23, a4, a5, v14, a7);
		if (v21 >= 0)
		{
			*(_QWORD*)v22 = v19;
			sub_14003D880(&v29);
			return 0i64;
		}
		else
		{
			if (v19)
			{
				sub_1402A3570(v19);
				sub_14018B900(v19, 0);
			}
			sub_14003D880(&v29);
			return (unsigned int)v21;
		}
	}
	else
	{
		v20 = (void(__fastcall***)(_QWORD))v17[6];
		*(_QWORD*)v22 = v20;
		(**v20)(v20);
		sub_14003D880(&v29);
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A2C8: using guessed type _DWORD dword_140C8A2C8;
// 14027B7B0: using guessed type __m128i var_250[33];

