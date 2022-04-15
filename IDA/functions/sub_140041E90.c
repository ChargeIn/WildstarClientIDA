#include "../winhttp.h"

//----- (0000000140041E90) ----------------------------------------------------
__int64 sub_140041E90()
{
	_QWORD* v0; // r15
	__int64 v1; // rsi
	__int64 v2; // r14
	__int64 v3; // rdi
	_QWORD* v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r8
	_QWORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // rax
	unsigned int* v11; // r9
	__int64 v12; // rcx
	__int64 v13; // rcx
	int v14; // eax
	__int64* v15; // rax
	__int64 v16; // rdx
	int v17; // edi
	__int64 v18; // rbx
	unsigned __int16 v19; // bx
	__int64 v20; // r8
	const wchar_t* v21; // rcx
	unsigned __int16 v22; // r9
	__int64 v23; // rax
	__int64 v24; // rax
	const wchar_t* v25; // rcx
	__int64 v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // rcx
	__int64 v30; // [rsp+30h] [rbp-D0h] BYREF
	int v31; // [rsp+38h] [rbp-C8h]
	char v32[92]; // [rsp+40h] [rbp-C0h] BYREF
	int v33; // [rsp+9Ch] [rbp-64h]
	__int64 v34; // [rsp+A8h] [rbp-58h]
	__int64 v35; // [rsp+B0h] [rbp-50h]
	char v36[24]; // [rsp+2C0h] [rbp+1C0h] BYREF
	__int64 v37[109]; // [rsp+2D8h] [rbp+1D8h] BYREF
	__int64 v38; // [rsp+658h] [rbp+558h] BYREF
	__int64 v39; // [rsp+660h] [rbp+560h] BYREF

	v0 = *(_QWORD**)(qword_140C66E38 + 72);
	v1 = 0i64;
	v2 = sub_1400E9080(v0, L"EULAFrame");
	if (v2)
		goto LABEL_11;
	v2 = (__int64)sub_1400F52E0(
		*(_QWORD*)(qword_140C66E38 + 72) + 2688i64,
		(__m128i*)L"UI\\PreGame\\EULA\\EULA.xml",
		(int*)L"EULAFrame",
		0i64,
		0i64,
		-2);
	sub_1400E7280(*(_QWORD*)(qword_140C66E38 + 72), (void(__fastcall***)(_QWORD))v2, L"Top");
	v3 = *(_QWORD*)(qword_140C66E38 + 72);
	v4 = *(_QWORD**)(v3 + 400);
	if (v4)
	{
		if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
			sub_14005E2C0(*(_QWORD*)(v3 + 400));
		v5 = v4[5];
		if (v5 == v4[10])
			v6 = v4[15];
		else
			v6 = *(_QWORD*)(**(_QWORD**)(v5 + 8) + 24i64);
		v7 = sub_140060AB0((__int64)v4, 0, v6);
		v7[4] = sub_140042260;
		v8 = v4[2];
		*(_QWORD*)v8 = v7;
		*(_DWORD*)(v8 + 8) = 6;
		v4[2] += 16i64;
		v9 = *(_QWORD*)(v3 + 400);
		v10 = sub_140062650(v9, (unsigned __int64*)"OnEULAClose", 0xBui64);
		v11 = (unsigned int*)(*(_QWORD*)(v9 + 16) - 16i64);
		v30 = v10;
		v31 = 4;
		sub_14005EA50(v9, (__int64*)(v9 + 120), (int*)&v30, v11);
		*(_QWORD*)(v9 + 16) -= 16i64;
	}
	if (v2)
	{
		sub_1400D42F0(v2, 0, 1, 4.0);
	LABEL_11:
		sub_1401A72E0((__int64)v32);
		sub_1401A59A0((__int64)v32);
		v12 = v34;
		v33 = 0;
		v34 = 0i64;
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		sub_14018B900(v35, 0);
		v35 = 0i64;
		v38 = 0i64;
		v14 = sub_1401B6D00(v13, (const __m128i*)L"UI\\EULA.xml", &v38);
		if (v14 >= 0)
		{
			v18 = v38;
			v17 = sub_1401A7C70((__int64)v32, v38);
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
		}
		else
		{
			if (v33 >= 0)
			{
				v33 = v14;
				v15 = sub_14018D540(&v39, (__int64)L"%0.8x %s", (unsigned int)v14, L"UI\\EULA.xml");
				v16 = v34;
				v34 = *v15;
				*v15 = v16;
				if (v39)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
			}
			v17 = v33;
			if (v38)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
		}
		if (v17 >= 0)
		{
			sub_14013FEB0((__int64)v36, (__int64)v0);
			(*(void(__fastcall**)(__int64*, _QWORD))(v37[0] + 120))(v37, 0i64);
			sub_1401A7460((__int64)v37, (__int64)v32);
			sub_1401411C0((__int64)v36);
			v19 = 69;
			v20 = 0i64;
			v21 = L"EULAText";
			v22 = 69;
			do
			{
				v23 = v22;
				v22 = v21[1];
				++v21;
				v20 = v23 + 2860486313i64 * v20;
			} while (v22);
			v24 = sub_1400D3940((_QWORD*)v2, L"EULAText", v20);
			sub_140116200(v24, (__int64)v37);
			v25 = L"EULAText";
			do
			{
				v26 = v19;
				v19 = v25[1];
				++v25;
				v1 = v26 + 2860486313i64 * v1;
			} while (v19);
			v27 = (_QWORD*)sub_1400D3940((_QWORD*)v2, L"EULAText", v1);
			sub_1400CAC30(v27, 0);
			sub_140140120((__int64)v36);
		}
		sub_1400D42F0(v2, 1, 0, 4.0);
		if ((*(_DWORD*)(v2 + 656) & 0x100000i64) != 0)
			sub_1400E8B00(*(_QWORD*)(v2 + 32), v2);
		v28 = *(_QWORD*)(v2 + 16);
		if (v28)
			sub_1400C7F10(v28);
		sub_1400E8BF0((__int64)v0);
		sub_1400E8B00((__int64)v0, v2);
		sub_1400EA3E0(*(_QWORD*)(qword_140C66E38 + 72), "HideCredits", &unk_1409D01F6);
		sub_1401A76A0((__int64)v32);
	}
	return 0i64;
}
// 140042051: variable 'v13' is possibly undefined
// 1409F7E18: using guessed type wchar_t aEulaframe_0[10];
// 1409F7E30: using guessed type wchar_t aEulaframe[10];
// 1409F7E48: using guessed type wchar_t aTop_1[4];
// 1409F7E50: using guessed type wchar_t aUiPregameEulaE[25];
// 1409F7E90: using guessed type wchar_t aEulatext[9];
// 1409F7ED8: using guessed type wchar_t aEulatext_0[9];
// 1409F7EF8: using guessed type wchar_t aUiEulaXml[12];
// 140A45328: using guessed type wchar_t a08xS[9];
// 140C66E38: using guessed type __int64 qword_140C66E38;

