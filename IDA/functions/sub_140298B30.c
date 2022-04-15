//----- (0000000140298B30) ----------------------------------------------------
__int64 __fastcall sub_140298B30(__int64 a1, int a2, __m128i* a3, int a4, int a5, int a6, int a7)
{
	int v7; // eax
	int v9; // eax
	const __m128i* v11; // rsi
	__int64 v13; // rcx
	int v14; // eax
	int v15; // r14d
	__int64 v16; // rax
	const wchar_t* v17; // rcx
	unsigned int v18; // edx
	int v19; // esi
	__int64 v20; // rax
	const wchar_t* v21; // rcx
	unsigned int v22; // ebx
	__int64 v23; // [rsp+30h] [rbp-30h] BYREF
	int v24; // [rsp+38h] [rbp-28h] BYREF
	int v25; // [rsp+3Ch] [rbp-24h]
	__int64 v26; // [rsp+40h] [rbp-20h]
	__int64(__fastcall * v27)(__int64); // [rsp+48h] [rbp-18h]
	__int64 v28; // [rsp+50h] [rbp-10h]
	int v29; // [rsp+58h] [rbp-8h]
	void(__fastcall * **v30)(_QWORD); // [rsp+80h] [rbp+20h] BYREF

	v7 = a5;
	*(_DWORD*)(a1 + 64) = a2;
	*(_DWORD*)(a1 + 72) = v7;
	v9 = a6;
	*(_DWORD*)(a1 + 68) = a4;
	*(_DWORD*)(a1 + 76) = v9;
	*(_DWORD*)(a1 + 80) = a7;
	v11 = sub_1407DD8D8(a3, 0x2Eu);
	if (!v11)
		return sub_14029B080(a1, 0x80004005);
	if ((unsigned int)sub_14018E3E0((__int64)a3, L"http", 4ui64))
	{
		if (!(unsigned int)sub_14018E2C0((__int64)v11, L".tex"))
		{
			v14 = sub_1401B5B50(*(__int64*)&qword_140C63788, a3, 1i64, 3, (_QWORD*)(a1 + 96));
			if (v14 < 0)
				return sub_14029B080(a1, v14);
			if ((unsigned __int64)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 24i64))(*(_QWORD*)(a1 + 96)) >= 0x70)
				return sub_14029CEC0((_DWORD*)a1);
			return sub_14029B080(a1, 0x80004005);
		}
		v30 = 0i64;
		v15 = sub_1401B6DE0(v13, a3, (int**)(a1 + 104), (__int64)&v30, 0i64);
		if (v15 < 0)
		{
			v16 = 0x141DE3E88i64;
			v17 = L"na";
		LABEL_12:
			if (a3)
				v17 = (const wchar_t*)a3;
			v23 = v16;
			sub_1401A3130(14, 2, &v23, (unsigned int)v15, v17);
			v18 = v15;
		LABEL_26:
			v22 = sub_14029B080(a1, v18);
			if (v30)
				(*v30)[1](v30);
			return v22;
		}
		v27 = sub_14029AB30;
		v24 = 10;
		v25 = 2;
		v26 = a1;
		v28 = 0i64;
		v29 = 1;
		v19 = sub_14019DCA0((__int64)&v24, 0, v30, (int**)(a1 + 120));
		if (v19 < 0)
		{
			v20 = 0x141DE3D38i64;
			v21 = L"na";
		LABEL_23:
			if (a3)
				v21 = (const wchar_t*)a3;
			v23 = v20;
			sub_1401A3130(14, 2, &v23, (unsigned int)v19, v21);
			v18 = v19;
			goto LABEL_26;
		}
	}
	else
	{
		if (!(unsigned int)sub_14018E2C0((__int64)v11, L".tex"))
			return sub_14029B080(a1, 0x80004001);
		v30 = 0i64;
		v15 = sub_1407B01F0(a3->m128i_i32, 1, (int**)(a1 + 104), (__int64)&v30);
		if (v15 < 0)
		{
			v16 = 0x141DE40E8i64;
			v17 = L"na";
			goto LABEL_12;
		}
		v27 = sub_14029AB30;
		v24 = 10;
		v25 = 2;
		v26 = a1;
		v28 = 0i64;
		v29 = 1;
		v19 = sub_14019DCA0((__int64)&v24, 0, v30, (int**)(a1 + 120));
		if (v19 < 0)
		{
			v20 = 0x141DE4068i64;
			v21 = L"na";
			goto LABEL_23;
		}
	}
	if (v30)
		(*v30)[1](v30);
	return 0i64;
}
// 140298C38: variable 'v13' is possibly undefined
// 140AE5B54: using guessed type wchar_t aNa_2[3];
// 140AE6BE4: using guessed type wchar_t aNa_1[3];
// 140AE6D44: using guessed type wchar_t aNa_4[3];
// 140AE6DC4: using guessed type wchar_t aNa_3[3];
// 140AEAA58: using guessed type wchar_t aTex_6[5];
// 140AEAA68: using guessed type wchar_t aTex_5[5];
// 140AEAA78: using guessed type wchar_t aHttp_0[5];

