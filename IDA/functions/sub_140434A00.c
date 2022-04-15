#include "../winhttp.h"

//----- (0000000140434A00) ----------------------------------------------------
__int64 __fastcall sub_140434A00(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	int v5; // eax
	__int64 result; // rax
	__int64 v7; // rbx
	_QWORD* v8; // rbp
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	__int64 v14; // rax
	int* v15; // rbp
	int* v16; // rbp
	int* v17; // rbp
	int* v18; // rbp
	int* v19; // rbp
	int* v20; // rbp
	int* v21; // rbp
	int* v22; // rbp
	__int64 v23; // rcx
	__int64 v24; // rbp
	int* v25; // rax
	__int64 v26; // rdx
	__int64 v27; // r14
	__int64 v28; // rbx
	int* v29; // rax
	int* v30; // r15
	int* v31; // rdx
	__int64 v32; // rcx
	__int64 v33; // rbp
	int* v34; // rax
	__int64 v35; // rdx
	__int64 v36; // r14
	__int64 v37; // rbx
	int* v38; // rax
	int* v39; // r15
	int* v40; // rdx
	__int64 v41; // rcx
	__int64 v42; // rbp
	int* v43; // rax
	__int64 v44; // rdx
	__int64 v45; // r14
	__int64 v46; // rbx
	int* v47; // rax
	int* v48; // r15
	int* v49; // rdx
	__int64 v50; // rcx
	__int64 v51; // rbp
	int* v52; // rax
	__int64 v53; // rdx
	__int64 v54; // r14
	__int64 v55; // rbx
	int* v56; // rax
	int* v57; // r15
	int* v58; // rdx
	__int64 v59; // rcx
	__int64 v60; // rbp
	__int64 v61; // rcx
	__int64 v62; // rbx
	__int64* v63; // rax

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
	a1[12] = v4;
	v5 = *(_DWORD*)(v4 + 60);
	if (v5 > 1366)
		v5 = 1366;
	*(_DWORD*)(v4 + 56) = v5;
	result = sub_1400E4E80(a1[12], 0);
	if ((int)result >= 0)
	{
		sub_1400E7190(a1[12], (int*)L"StoreDialogs", 0);
		sub_1400E7190(a1[12], (int*)L"DefaultStratum", 0);
		sub_1400E9C20(a1[12], (__int64)&off_140C59360, 7);
		sub_140508240(a1[12]);
		sub_1404F8440(a1[12]);
		v7 = a1[12] + 384i64;
		v8 = *(_QWORD**)(a1[12] + 400i64);
		v9 = sub_14018B280(8i64, 0);
		if (v9)
			*(_QWORD*)v9 = off_140B66CE8;
		else
			v9 = 0i64;
		sub_1400F1B30(a1[12] + 384i64, (char(__fastcall***)(_QWORD))v9);
		v10 = sub_14018B280(8i64, 0);
		if (v10)
			*(_QWORD*)v10 = off_140B66AC0;
		else
			v10 = 0i64;
		sub_1400F1B30(a1[12] + 384i64, (char(__fastcall***)(_QWORD))v10);
		v11 = sub_14018B280(8i64, 0);
		if (v11)
			*(_QWORD*)v11 = off_140B66DA8;
		else
			v11 = 0i64;
		sub_1400F1B30(a1[12] + 384i64, (char(__fastcall***)(_QWORD))v11);
		v12 = sub_14018B280(8i64, 0);
		if (v12)
			*(_QWORD*)v12 = off_140B66DD8;
		else
			v12 = 0i64;
		sub_1400F1B30(a1[12] + 384i64, (char(__fastcall***)(_QWORD))v12);
		v13 = sub_14018B280(1i64, 0);
		if (v13)
			v14 = sub_1406F26C0((__int64)v13, v7);
		else
			v14 = 0i64;
		a1[9] = v14;
		sub_140057020(v8, "AccountItemLib", &off_140B69660);
		sub_1404E7F60((__int64)v8);
		v8[2] -= 16i64;
		sub_1404F2860(v8);
		sub_1406F30A0(v8);
		sub_140057020(v8, "LiveEventsLib", &off_140B72640);
		v8[2] -= 16i64;
		sub_1406F3DE0(v8);
		v8[2] -= 16i64;
		sub_140709460(v8);
		sub_14070F700(v8);
		sub_1406F1490(v8);
		sub_140711F80(v8);
		sub_140712510(v8);
		v15 = sub_14018B280(1i64, 0);
		if (v15)
			sub_1400F2440(v7, (__int64)"PetCustomization", (__int64)sub_1406B6B50);
		else
			v15 = 0i64;
		a1[64] = v15;
		v16 = sub_14018B280(1i64, 0);
		if (v16)
			sub_1400F2440(v7, (__int64)"PetFlair", (__int64)sub_1406B63D0);
		else
			v16 = 0i64;
		a1[65] = v16;
		v17 = sub_14018B280(1i64, 0);
		if (v17)
			sub_1400F2440(v7, (__int64)"RewardTrack", (__int64)sub_1406B9550);
		else
			v17 = 0i64;
		a1[66] = v17;
		v18 = sub_14018B280(1i64, 0);
		if (v18)
			sub_1400F2440(v7, (__int64)"Item", (__int64)sub_140413A20);
		else
			v18 = 0i64;
		a1[67] = v18;
		v19 = sub_14018B280(1i64, 0);
		if (v19)
			sub_1400F2440(v7, (__int64)"Money", (__int64)sub_140500A10);
		else
			v19 = 0i64;
		a1[68] = v19;
		v20 = sub_14018B280(1i64, 0);
		if (v20)
			sub_1400F2440(v7, (__int64)"Unit", (__int64)sub_1406481D0);
		else
			v20 = 0i64;
		a1[69] = v20;
		v21 = sub_14018B280(4i64, 0);
		if (v21)
			sub_1400F2440(v7, (__int64)"Quest", (__int64)sub_1406625D0);
		else
			v21 = 0i64;
		a1[70] = v21;
		v22 = sub_14018B280(1i64, 0);
		if (v22)
			sub_1400F2440(v7, (__int64)"CREDDExchangeOrder", (__int64)sub_1406F1C70);
		else
			v22 = 0i64;
		v23 = a1[12];
		a1[71] = v22;
		*(_DWORD*)(v23 + 2568) = 0;
		*(_QWORD*)(v23 + 2504) = v23;
		sub_1400E9C20(v23, (__int64)&off_140C57760, 1);
		v24 = a1[12] + 2496i64;
		v25 = sub_14018B280(2584i64, 0);
		if (v25)
			v27 = sub_1401352F0(
				(__int64)v25,
				*(_QWORD*)(v24 + 8),
				*(_DWORD*)(v24 + 72),
				dword_1409EFCB4,
				(int*)L"Util",
				1,
				2,
				0,
				0i64);
		else
			v27 = 0i64;
		if (*(_BYTE*)(v27 + 312))
		{
			v28 = *(_QWORD*)(v24 + 24);
			v29 = sub_14018DB00(*(_QWORD*)(v24 + 16), v28 + 1, 8i64);
			v30 = v29;
			*(_QWORD*)&v29[2 * v28] = v27;
			v31 = *(int**)(v24 + 16);
			if (v31 != v29)
			{
				sub_1407DB590(v29, v31, 8i64 * *(_QWORD*)(v24 + 24));
				v32 = *(_QWORD*)(v24 + 16);
				if (v32)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
				*(_QWORD*)(v24 + 16) = v30;
			}
			*(_QWORD*)(v24 + 24) = v28 + 1;
		}
		else
		{
			sub_1401356F0((_QWORD*)v27, v26);
			sub_14018B900(v27, 0);
		}
		v33 = a1[12] + 2496i64;
		v34 = sub_14018B280(2584i64, 0);
		if (v34)
			v36 = sub_1401352F0(
				(__int64)v34,
				*(_QWORD*)(v33 + 8),
				*(_DWORD*)(v33 + 72),
				(int*)L"ProtectedAddons",
				(int*)L"Storefront",
				1,
				2,
				0,
				0i64);
		else
			v36 = 0i64;
		if (*(_BYTE*)(v36 + 312))
		{
			v37 = *(_QWORD*)(v33 + 24);
			v38 = sub_14018DB00(*(_QWORD*)(v33 + 16), v37 + 1, 8i64);
			v39 = v38;
			*(_QWORD*)&v38[2 * v37] = v36;
			v40 = *(int**)(v33 + 16);
			if (v40 != v38)
			{
				sub_1407DB590(v38, v40, 8i64 * *(_QWORD*)(v33 + 24));
				v41 = *(_QWORD*)(v33 + 16);
				if (v41)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16);
				*(_QWORD*)(v33 + 16) = v39;
			}
			*(_QWORD*)(v33 + 24) = v37 + 1;
		}
		else
		{
			sub_1401356F0((_QWORD*)v36, v35);
			sub_14018B900(v36, 0);
		}
		v42 = a1[12] + 2496i64;
		v43 = sub_14018B280(2584i64, 0);
		if (v43)
			v45 = sub_1401352F0(
				(__int64)v43,
				*(_QWORD*)(v42 + 8),
				*(_DWORD*)(v42 + 72),
				(int*)L"ProtectedAddons",
				(int*)L"AccountInventory",
				1,
				2,
				0,
				0i64);
		else
			v45 = 0i64;
		if (*(_BYTE*)(v45 + 312))
		{
			v46 = *(_QWORD*)(v42 + 24);
			v47 = sub_14018DB00(*(_QWORD*)(v42 + 16), v46 + 1, 8i64);
			v48 = v47;
			*(_QWORD*)&v47[2 * v46] = v45;
			v49 = *(int**)(v42 + 16);
			if (v49 != v47)
			{
				sub_1407DB590(v47, v49, 8i64 * *(_QWORD*)(v42 + 24));
				v50 = *(_QWORD*)(v42 + 16);
				if (v50)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v50 - 16) + 8i64))(v50 - 16);
				*(_QWORD*)(v42 + 16) = v48;
			}
			*(_QWORD*)(v42 + 24) = v46 + 1;
		}
		else
		{
			sub_1401356F0((_QWORD*)v45, v44);
			sub_14018B900(v45, 0);
		}
		v51 = a1[12] + 2496i64;
		v52 = sub_14018B280(2584i64, 0);
		if (v52)
			v54 = sub_1401352F0(
				(__int64)v52,
				*(_QWORD*)(v51 + 8),
				*(_DWORD*)(v51 + 72),
				dword_1409EFCCC,
				(int*)L"ToolTips",
				1,
				2,
				0,
				0i64);
		else
			v54 = 0i64;
		if (*(_BYTE*)(v54 + 312))
		{
			v55 = *(_QWORD*)(v51 + 24);
			v56 = sub_14018DB00(*(_QWORD*)(v51 + 16), v55 + 1, 8i64);
			v57 = v56;
			*(_QWORD*)&v56[2 * v55] = v54;
			v58 = *(int**)(v51 + 16);
			if (v58 != v56)
			{
				sub_1407DB590(v56, v58, 8i64 * *(_QWORD*)(v51 + 24));
				v59 = *(_QWORD*)(v51 + 16);
				if (v59)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v59 - 16) + 8i64))(v59 - 16);
				*(_QWORD*)(v51 + 16) = v57;
			}
			*(_QWORD*)(v51 + 24) = v55 + 1;
		}
		else
		{
			sub_1401356F0((_QWORD*)v54, v53);
			sub_14018B900(v54, 0);
		}
		sub_140139AE0(a1[12] + 2496i64, 0i64);
		v60 = a1[12];
		v61 = *(_QWORD*)(v60 + 368);
		v62 = *(_QWORD*)(v61 + 24);
		v63 = sub_14010E2E0(*(_QWORD**)(v61 + 16), v62, L"CRB_TooltipBasic");
		if (v63 != (__int64*)v62)
			v3 = *v63;
		*(_QWORD*)(v60 + 2936) = v3;
		sub_1400E74A0(a1[12], 0.0);
		return 0i64;
	}
	return result;
}
// 140434ED6: variable 'v26' is possibly undefined
// 140434FA8: variable 'v35' is possibly undefined
// 14043507A: variable 'v44' is possibly undefined
// 14043514C: variable 'v53' is possibly undefined
// 1409EFCB4: using guessed type int dword_1409EFCB4[6];
// 1409EFCCC: using guessed type int dword_1409EFCCC[8];
// 140B01868: using guessed type wchar_t aStoredialogs[13];
// 140B01950: using guessed type wchar_t aUiAssetsDocsGe_13[39];
// 140B019A0: using guessed type wchar_t aUiAssetsDocsGe_12[41];
// 140B01A58: using guessed type wchar_t aCrbTooltipbasi_1[17];
// 140B01AB0: using guessed type wchar_t aProtectedaddon_0[16];
// 140B01AD0: using guessed type wchar_t aStorefront[11];
// 140B01AE8: using guessed type wchar_t aUtil_0[5];
// 140B01AF8: using guessed type wchar_t aTooltips[9];
// 140B01B10: using guessed type wchar_t aProtectedaddon_1[16];
// 140B01B30: using guessed type wchar_t aAccountinvento[17];
// 140B01DA0: using guessed type wchar_t aDefaultstratum_7[15];
// 140B66AC0: using guessed type __int64 (__fastcall *off_140B66AC0[105])();
// 140B66CE8: using guessed type __int64 (__fastcall *off_140B66CE8[36])();
// 140B66DA8: using guessed type __int64 (__fastcall *off_140B66DA8[12])();
// 140B66DD8: using guessed type __int64 (__fastcall *off_140B66DD8[6])();
// 140B69660: using guessed type char *off_140B69660;
// 140B72640: using guessed type char *off_140B72640;
// 140C57760: using guessed type char *off_140C57760;
// 140C59360: using guessed type char *off_140C59360;

