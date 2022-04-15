//----- (00000001402633E0) ----------------------------------------------------
__int64 __fastcall sub_1402633E0(__int64 a1, __m128i* a2, __int64 a3, int a4, int a5, int a6, __int64* a7)
{
	int v8; // r13d
	__m128i* v9; // rsi
	unsigned __int64 v11; // r14
	_QWORD* v12; // rbx
	int* v13; // rbx
	int** v14; // rbx
	int* v15; // rbx
	int* v16; // rax
	int v17; // esi
	int* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rbx
	HANDLE EventW; // rcx
	__int64 v24; // [rsp+30h] [rbp-288h] BYREF
	int* v25; // [rsp+38h] [rbp-280h]
	int v26[6]; // [rsp+40h] [rbp-278h] BYREF
	__m128i* v27; // [rsp+58h] [rbp-260h]
	__m128i v28[33]; // [rsp+60h] [rbp-258h] BYREF

	v8 = a3;
	v9 = a2;
	if (!a7 || !a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	if (sub_1401B5110(*(__int64*)&qword_140C63788, v28, a3, (__int64)a2))
		v9 = (__m128i*)sub_140263F30(v28, (__int64)v9);
	sub_14003D8F0(&v24, a1 + 24);
	v26[4] = a5;
	v26[0] = 0;
	v26[1] = 1;
	v26[2] = v8;
	v26[5] = a6;
	v26[3] = a4;
	v27 = v9;
	v11 = (*(__int64(__fastcall**)(int*))(a1 + 6224))(v26);
	v12 = *(_QWORD**)(*(_QWORD*)(a1 + 6216) + 8 * (v11 % *(_QWORD*)(a1 + 6208)));
	if (v12)
	{
		while (v11 != *v12 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 6232))(v26, v12 + 2))
		{
			v12 = (_QWORD*)v12[1];
			if (!v12)
				goto LABEL_10;
		}
		v14 = (int**)(v12 + 6);
		if (v14)
		{
			v15 = *v14;
			v25 = v15;
			v16 = sub_14018B280(40i64, 0);
			if (v16)
				*a7 = sub_140288FF0((__int64)v16, (void(__fastcall***)(_QWORD))v15);
			else
				*a7 = 0i64;
		LABEL_23:
			v17 = 0;
			goto LABEL_24;
		}
	}
LABEL_10:
	v13 = sub_14018B280(112i64, 0);
	if (v13)
	{
		v13[2] = 1;
		*((_QWORD*)v13 + 2) = a1;
		*((_QWORD*)v13 + 5) = 0i64;
		v13[12] = 0;
		v13[19] = 0;
		*(_QWORD*)v13 = off_140B61748;
		*((_QWORD*)v13 + 10) = 0i64;
		*((_QWORD*)v13 + 7) = 0i64;
		*((_QWORD*)v13 + 12) = 0i64;
		*((_QWORD*)v13 + 13) = 0i64;
	}
	else
	{
		v13 = 0i64;
	}
	v25 = v13;
	v17 = sub_140288650((__int64)v13, v9->m128i_i32, v8, a4, a5, a6);
	if (v17 >= 0)
	{
		v18 = sub_14018B280(40i64, 0);
		if (v18)
			v19 = sub_140288FF0((__int64)v18, (void(__fastcall***)(_QWORD))v13);
		else
			v19 = 0i64;
		*a7 = v19;
		(*(void(__fastcall**)(int*))(*(_QWORD*)v13 + 8i64))(v13);
		goto LABEL_23;
	}
	(*(void(__fastcall**)(int*))(*(_QWORD*)v13 + 8i64))(v13);
LABEL_24:
	v20 = v24;
	if (*(_QWORD*)(v24 + 8) <= 1ui64)
	{
		*(_DWORD*)v24 = 0;
		_InterlockedExchange64((volatile __int64*)(v20 + 8), 0i64);
		if (*(_QWORD*)(v24 + 16))
		{
			v21 = v24;
			if (!*(_QWORD*)(v24 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v21 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v21 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v24 + 8);
	}
	return (unsigned int)v17;
}
// 140B61748: using guessed type __int64 (__fastcall *off_140B61748[8])();
// 1402633E0: using guessed type __m128i var_258[33];

