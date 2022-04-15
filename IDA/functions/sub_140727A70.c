//----- (0000000140727A70) ----------------------------------------------------
__int64 __fastcall sub_140727A70(__int64* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	int v5; // eax
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rax
	__int64 v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rcx
	__int64 v13; // rsi
	int* v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rbp
	__int64 v17; // rbx
	int* v18; // rax
	int* v19; // r15
	int* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rsi
	int* v23; // rax
	__int64 v24; // rdx
	__int64 v25; // rbp
	__int64 v26; // rbx
	int* v27; // rax
	int* v28; // r15
	int* v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rsi
	int* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rbp
	__int64 v35; // rbx
	int* v36; // rax
	int* v37; // r15
	int* v38; // rdx
	__int64 v39; // rcx
	__int64 v40; // rsi
	__int64 v41; // rcx
	__int64 v42; // rbx
	__int64* v43; // rax

	v2 = sub_14018B280(3632i64, 0);
	v3 = 0i64;
	if (v2)
		v4 = sub_1400E2EF0(
			(__int64)v2,
			(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
			(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",
			0i64,
			0i64);
	else
		v4 = 0i64;
	a1[178] = v4;
	v5 = *(_DWORD*)(v4 + 60);
	if (v5 > 1366)
		v5 = 1366;
	*(_DWORD*)(v4 + 56) = v5;
	if ((int)sub_1400E4E80(a1[178], 0) < 0)
		return 1i64;
	sub_1400E7190(a1[178], (int*)L"GachaDialogs", 0);
	sub_1400E7190(a1[178], (int*)L"DefaultStratum", 0);
	sub_1400E7190(a1[178], (int*)L"GachaScene", 0);
	sub_1400E9C20(a1[178], (__int64)&off_140C5EBF0, 5);
	sub_140508240(a1[178]);
	v7 = a1[178];
	v8 = sub_14018B280(8i64, 0);
	if (v8)
		*(_QWORD*)v8 = off_140B66DA8;
	else
		v8 = 0i64;
	sub_1400F1B30(v7 + 384, (char(__fastcall***)(_QWORD))v8);
	v9 = sub_14018B280(1i64, 0);
	if (v9)
		v10 = sub_1406F26C0((__int64)v9, v7 + 384);
	else
		v10 = 0i64;
	*a1 = v10;
	v11 = *(_QWORD**)(v7 + 400);
	sub_140413A20(v11);
	sub_1406481D0(v11);
	sub_140057020(v11, "AccountItemLib", &off_140B69660);
	sub_1404E7F60((__int64)v11);
	v11[2] -= 16i64;
	sub_140766A30(v11);
	v11[2] -= 16i64;
	sub_1404F2860(v11);
	sub_140709460(v11);
	sub_14070F700(v11);
	sub_1406F1490(v11);
	sub_140711F80(v11);
	v12 = a1[178];
	*(_DWORD*)(v12 + 2568) = 0;
	*(_QWORD*)(v12 + 2504) = v12;
	sub_1400E9C20(v12, (__int64)&off_140C57760, 1);
	v13 = a1[178] + 2496;
	v14 = sub_14018B280(2584i64, 0);
	if (v14)
		v16 = sub_1401352F0(
			(__int64)v14,
			*(_QWORD*)(v13 + 8),
			*(_DWORD*)(v13 + 72),
			(int*)L"ProtectedAddons",
			(int*)L"Gacha",
			1,
			2,
			0,
			0i64);
	else
		v16 = 0i64;
	if (*(_BYTE*)(v16 + 312))
	{
		v17 = *(_QWORD*)(v13 + 24);
		v18 = sub_14018DB00(*(_QWORD*)(v13 + 16), v17 + 1, 8i64);
		v19 = v18;
		*(_QWORD*)&v18[2 * v17] = v16;
		v20 = *(int**)(v13 + 16);
		if (v20 != v18)
		{
			sub_1407DB590(v18, v20, 8i64 * *(_QWORD*)(v13 + 24));
			v21 = *(_QWORD*)(v13 + 16);
			if (v21)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
			*(_QWORD*)(v13 + 16) = v19;
		}
		*(_QWORD*)(v13 + 24) = v17 + 1;
	}
	else
	{
		sub_1401356F0((_QWORD*)v16, v15);
		sub_14018B900(v16, 0);
	}
	v22 = a1[178] + 2496;
	v23 = sub_14018B280(2584i64, 0);
	if (v23)
		v25 = sub_1401352F0(
			(__int64)v23,
			*(_QWORD*)(v22 + 8),
			*(_DWORD*)(v22 + 72),
			dword_1409F8D9C,
			(int*)L"ToolTips",
			1,
			2,
			0,
			0i64);
	else
		v25 = 0i64;
	if (*(_BYTE*)(v25 + 312))
	{
		v26 = *(_QWORD*)(v22 + 24);
		v27 = sub_14018DB00(*(_QWORD*)(v22 + 16), v26 + 1, 8i64);
		v28 = v27;
		*(_QWORD*)&v27[2 * v26] = v25;
		v29 = *(int**)(v22 + 16);
		if (v29 != v27)
		{
			sub_1407DB590(v27, v29, 8i64 * *(_QWORD*)(v22 + 24));
			v30 = *(_QWORD*)(v22 + 16);
			if (v30)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v30 - 16) + 8i64))(v30 - 16);
			*(_QWORD*)(v22 + 16) = v28;
		}
		*(_QWORD*)(v22 + 24) = v26 + 1;
	}
	else
	{
		sub_1401356F0((_QWORD*)v25, v24);
		sub_14018B900(v25, 0);
	}
	v31 = a1[178] + 2496;
	v32 = sub_14018B280(2584i64, 0);
	if (v32)
		v34 = sub_1401352F0(
			(__int64)v32,
			*(_QWORD*)(v31 + 8),
			*(_DWORD*)(v31 + 72),
			dword_1409F8D8C,
			(int*)L"Util",
			1,
			2,
			0,
			0i64);
	else
		v34 = 0i64;
	if (*(_BYTE*)(v34 + 312))
	{
		v35 = *(_QWORD*)(v31 + 24);
		v36 = sub_14018DB00(*(_QWORD*)(v31 + 16), v35 + 1, 8i64);
		v37 = v36;
		*(_QWORD*)&v36[2 * v35] = v34;
		v38 = *(int**)(v31 + 16);
		if (v38 != v36)
		{
			sub_1407DB590(v36, v38, 8i64 * *(_QWORD*)(v31 + 24));
			v39 = *(_QWORD*)(v31 + 16);
			if (v39)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
			*(_QWORD*)(v31 + 16) = v37;
		}
		*(_QWORD*)(v31 + 24) = v35 + 1;
	}
	else
	{
		sub_1401356F0((_QWORD*)v34, v33);
		sub_14018B900(v34, 0);
	}
	sub_140139AE0(a1[178] + 2496, 0i64);
	v40 = a1[178];
	v41 = *(_QWORD*)(v40 + 368);
	v42 = *(_QWORD*)(v41 + 24);
	v43 = sub_14010E2E0(*(_QWORD**)(v41 + 16), v42, L"CRB_TooltipBasic");
	if (v43 != (__int64*)v42)
		v3 = *v43;
	*(_QWORD*)(v40 + 2936) = v3;
	sub_1400E74A0(a1[178], 0.0);
	return 0i64;
}
// 140727D24: variable 'v15' is possibly undefined
// 140727DF8: variable 'v24' is possibly undefined
// 140727ECC: variable 'v33' is possibly undefined
// 1409F8D8C: using guessed type int dword_1409F8D8C[4];
// 1409F8D9C: using guessed type int dword_1409F8D9C[10];
// 140B46038: using guessed type wchar_t aGachadialogs[13];
// 140B46080: using guessed type wchar_t aUiAssetsDocsGe_15[39];
// 140B460D0: using guessed type wchar_t aUiAssetsDocsGe_14[41];
// 140B46360: using guessed type wchar_t aCrbTooltipbasi_3[17];
// 140B46388: using guessed type wchar_t aUtil_1[5];
// 140B46398: using guessed type wchar_t aTooltips_0[9];
// 140B463B0: using guessed type wchar_t aProtectedaddon_2[16];
// 140B463D0: using guessed type wchar_t aGacha[6];
// 140B46440: using guessed type wchar_t aGachascene[11];
// 140B46710: using guessed type wchar_t aDefaultstratum_9[15];
// 140B66DA8: using guessed type __int64 (__fastcall *off_140B66DA8[12])();
// 140B69660: using guessed type char *off_140B69660;
// 140C57760: using guessed type char *off_140C57760;
// 140C5EBF0: using guessed type char *off_140C5EBF0;

