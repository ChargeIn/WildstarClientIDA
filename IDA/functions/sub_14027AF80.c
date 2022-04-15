//----- (000000014027AF80) ----------------------------------------------------
__int64 __fastcall sub_14027AF80(__int64 a1, __m128i* a2, __int64* a3)
{
	__m128i* v4; // rbx
	unsigned __int64 v6; // rbp
	_QWORD* v7; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	__int64* v10; // rbx
	int v11; // esi
	__int64 v12; // rcx
	__int64 v14; // rbx
	HANDLE EventW; // rcx
	__int64 v16; // [rsp+20h] [rbp-268h] BYREF
	__m128i* v17; // [rsp+28h] [rbp-260h] BYREF
	__int64 v18; // [rsp+30h] [rbp-258h]
	__m128i v19[33]; // [rsp+40h] [rbp-248h] BYREF

	v4 = a2;
	v17 = a2;
	if (!a2 || !a2->m128i_i16[0] || !a3)
		return 2147942487i64;
	if (sub_1401B5110(*(__int64*)&qword_140C63788, v19, (__int64)a3, (__int64)a2))
		v4 = (__m128i*)sub_140263F30(v19, (__int64)v4);
	v17 = v4;
	sub_14003D8F0(&v16, a1 + 24);
	v6 = (*(__int64(__fastcall**)(__m128i**))(a1 + 6184))(&v17);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 6176) + 8 * (v6 % *(_QWORD*)(a1 + 6168)));
	if (!v7)
		goto LABEL_10;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__m128i**, _QWORD*))(a1 + 6192))(&v17, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			goto LABEL_10;
	}
	v10 = v7 + 3;
	if (v10)
	{
		v9 = *v10;
		v18 = v9;
		(**(void(__fastcall***)(__int64))v9)(v9);
	}
	else
	{
	LABEL_10:
		v8 = sub_14018B280(160i64, 0);
		v9 = (__int64)v8;
		if (v8)
		{
			*(_QWORD*)v8 = off_140B61B70;
			*((_QWORD*)v8 + 8) = 0i64;
			v8[18] = 1;
			*((_QWORD*)v8 + 10) = 0i64;
			*((_QWORD*)v8 + 14) = 0i64;
			*((_QWORD*)v8 + 15) = 0i64;
			*((_QWORD*)v8 + 16) = 0i64;
			*((_QWORD*)v8 + 17) = 0i64;
			*((_QWORD*)v8 + 12) = 0i64;
			v8[26] = 0;
			*((_QWORD*)v8 + 18) = 0i64;
			*((_QWORD*)v8 + 19) = 0i64;
			v8[2] = 1;
			*((_QWORD*)v8 + 2) = a1;
			*((_QWORD*)v8 + 6) = 0i64;
			*(_QWORD*)v8 = off_140B62360;
		}
		else
		{
			v9 = 0i64;
		}
		v18 = v9;
		v11 = sub_14029B9F0(v9, v17);
		if (v11 < 0)
		{
			if (v9)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 48i64))(v9, 1i64);
			goto LABEL_15;
		}
	}
	*a3 = v9;
	v11 = 0;
LABEL_15:
	v12 = v16;
	if (*(_QWORD*)(v16 + 8) <= 1ui64)
	{
		*(_DWORD*)v16 = 0;
		_InterlockedExchange64((volatile __int64*)(v12 + 8), 0i64);
		if (*(_QWORD*)(v16 + 16))
		{
			v14 = v16;
			if (!*(_QWORD*)(v16 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v14 + 24));
		}
		return (unsigned int)v11;
	}
	else
	{
		--* (_QWORD*)(v16 + 8);
		return (unsigned int)v11;
	}
}
// 140B61B70: using guessed type __int64 (__fastcall *off_140B61B70[7])();
// 140B62360: using guessed type __int64 (__fastcall *off_140B62360[15])();
// 14027AF80: using guessed type __m128i var_248[33];

