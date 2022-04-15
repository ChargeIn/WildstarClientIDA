#include "../winhttp.h"

//----- (0000000140042520) ----------------------------------------------------
__int64 __fastcall sub_140042520(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	int* v4; // rax
	__int64 v5; // rcx
	int v6; // eax
	_QWORD* v7; // rdi
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64 v28; // rax
	unsigned int* v29; // r9
	__int64 v30; // rdx
	__int64 v31; // rdx
	__int64 v32; // rcx
	__int64 v33; // rdi
	__int64 v34; // rcx
	__int64 v35; // rbx
	__int64* v36; // rax
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64 v39; // [rsp+40h] [rbp-18h] BYREF
	__int64 v40; // [rsp+48h] [rbp-10h]

	result = sub_14000B690(qword_140C635F0, 3i64);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			L"UI\\Cursors\\Point.tex",
			a1 + 80);
		if ((int)result >= 0)
		{
			sub_140142B70(qword_140C63678, v3);
			v4 = sub_14018B280(3632i64, 0);
			if (v4)
				v5 = sub_1400E2EF0(
					(__int64)v4,
					(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
					(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",
					0i64,
					0i64);
			else
				v5 = 0i64;
			*(_QWORD*)(a1 + 88) = v5;
			v6 = *(_DWORD*)(v5 + 60);
			if (v6 > 1366)
				v6 = 1366;
			*(_DWORD*)(v5 + 56) = v6;
			result = sub_1400E4E80(*(_QWORD*)(a1 + 88), 0);
			if ((int)result >= 0)
			{
				sub_1400E7190(*(_QWORD*)(a1 + 88), (int*)L"OptionsDialogs", 0);
				sub_1400E7190(*(_QWORD*)(a1 + 88), (int*)L"DefaultStratum", 0);
				sub_1400E9C20(*(_QWORD*)(a1 + 88), (__int64)&off_140C567E0, 35);
				v7 = *(_QWORD**)(*(_QWORD*)(a1 + 88) + 400i64);
				v39 = 0i64;
				v40 = 0i64;
				sub_140057020(v7, "OptionsScreen", &v39);
				v8 = sub_140062650((__int64)v7, (unsigned __int64*)"OptionsScreen", 0xDui64);
				v9 = v7[2];
				v39 = v8;
				LODWORD(v40) = 4;
				sub_14005E8E0((__int64)v7, (__int64)(v7 + 15), (int*)&v39, v9);
				v7[2] += 16i64;
				sub_140058710((__int64)v7, (unsigned __int64*)"CodeEnumLoadType", 0x10ui64);
				sub_140058900((__int64)v7, v10, 0);
				sub_1400EFF50((__int64)v7, v11, (unsigned __int64*)"Default", 2);
				sub_1400EFF50((__int64)v7, v12, (unsigned __int64*)&unk_1409D0FAC, 1);
				sub_1400EFF50((__int64)v7, v13, qword_1409D0F94, 0);
				sub_14005EA50((__int64)v7, (__int64*)(v7[2] - 48i64), (int*)(v7[2] - 32i64), (unsigned int*)(v7[2] - 16i64));
				v7[2] -= 32i64;
				sub_140058710((__int64)v7, (unsigned __int64*)"CodeEnumLoadLevel", 0x11ui64);
				sub_140058900((__int64)v7, v14, 0);
				sub_1400EFF50((__int64)v7, v15, (unsigned __int64*)"Machine", 1);
				sub_1400EFF50((__int64)v7, v16, (unsigned __int64*)"Account", 2);
				sub_1400EFF50((__int64)v7, v17, (unsigned __int64*)"Realm", 3);
				sub_1400EFF50((__int64)v7, v18, (unsigned __int64*)"Character", 4);
				sub_14005EA50((__int64)v7, (__int64*)(v7[2] - 48i64), (int*)(v7[2] - 32i64), (unsigned int*)(v7[2] - 16i64));
				v7[2] -= 32i64;
				sub_140058710((__int64)v7, (unsigned __int64*)"CodeEnumAddonStatus", 0x13ui64);
				sub_140058900((__int64)v7, v19, 0);
				sub_1400EFF50((__int64)v7, v20, (unsigned __int64*)"Invalid", 1);
				sub_1400EFF50((__int64)v7, v21, (unsigned __int64*)"NotLoaded", 2);
				sub_1400EFF50((__int64)v7, v22, (unsigned __int64*)"ParsingError", 3);
				sub_1400EFF50((__int64)v7, v23, (unsigned __int64*)"Loaded", 4);
				sub_1400EFF50((__int64)v7, v24, (unsigned __int64*)"Suspended", 5);
				sub_1400EFF50((__int64)v7, v25, (unsigned __int64*)"RunningWithError", 6);
				sub_1400EFF50((__int64)v7, v26, (unsigned __int64*)"RunningWithDeprecation", 7);
				sub_1400EFF50((__int64)v7, v27, (unsigned __int64*)"RunningOk", 8);
				sub_14005EA50((__int64)v7, (__int64*)(v7[2] - 48i64), (int*)(v7[2] - 32i64), (unsigned int*)(v7[2] - 16i64));
				v7[2] -= 32i64;
				v28 = sub_140062650((__int64)v7, (unsigned __int64*)"OptionsScreen", 0xDui64);
				v29 = (unsigned int*)(v7[2] - 16i64);
				v39 = v28;
				LODWORD(v40) = 4;
				sub_14005EA50((__int64)v7, v7 + 15, (int*)&v39, v29);
				v7[2] -= 16i64;
				sub_140058710((__int64)v7, (unsigned __int64*)"CodeEnumConfirmButtonType", 0x19ui64);
				sub_140058900((__int64)v7, v30, 0);
				sub_1400EFF50((__int64)v7, v31, (unsigned __int64*)"CopyToClipboard", 20);
				sub_14005EA50((__int64)v7, (__int64*)(v7[2] - 48i64), (int*)(v7[2] - 32i64), (unsigned int*)(v7[2] - 16i64));
				v7[2] -= 32i64;
				sub_1400F2440(*(_QWORD*)(a1 + 88) + 384i64, (__int64)"DemoSummary", (__int64)sub_140513C50);
				sub_140057020(v7, "AlienFxLib", &off_140B69B90);
				v7[2] -= 16i64;
				sub_140057020(v7, "AccountItemLib", &off_140B69480);
				sub_1404E7F60((__int64)v7);
				v7[2] -= 16i64;
				sub_1405271C0(*(_QWORD*)(a1 + 88));
				sub_1405379E0(*(_QWORD*)(a1 + 88));
				v32 = *(_QWORD*)(a1 + 88);
				*(_DWORD*)(v32 + 2568) = 0;
				*(_QWORD*)(v32 + 2504) = v32;
				sub_1400E9C20(v32, (__int64)&off_140C57760, 1);
				sub_1401395D0(*(_QWORD*)(a1 + 88) + 2496i64, (int*)L"ProtectedAddons", (int*)L"Options", 1, 2, 0, 0i64);
				sub_140139AE0(*(_QWORD*)(a1 + 88) + 2496i64, 0i64);
				v33 = *(_QWORD*)(a1 + 88);
				v34 = *(_QWORD*)(v33 + 368);
				v35 = *(_QWORD*)(v34 + 24);
				v36 = sub_14010E2E0(*(_QWORD**)(v34 + 16), v35, L"CRB_TooltipBasic");
				if (v36 == (__int64*)v35)
					v37 = 0i64;
				else
					v37 = *v36;
				*(_QWORD*)(v33 + 2936) = v37;
				v38 = *(_QWORD*)(a1 + 88);
				*(_DWORD*)(a1 + 136) = 0;
				*(_DWORD*)(a1 + 72) = 0;
				sub_1400E74A0(v38, 0.0);
				return 0i64;
			}
		}
	}
	return result;
}
// 140042571: variable 'v3' is possibly undefined
// 14004269C: variable 'v10' is possibly undefined
// 1400426B1: variable 'v11' is possibly undefined
// 1400426C6: variable 'v12' is possibly undefined
// 1400426D8: variable 'v13' is possibly undefined
// 140042715: variable 'v14' is possibly undefined
// 14004272A: variable 'v15' is possibly undefined
// 14004273F: variable 'v16' is possibly undefined
// 140042754: variable 'v17' is possibly undefined
// 140042769: variable 'v18' is possibly undefined
// 1400427A6: variable 'v19' is possibly undefined
// 1400427BB: variable 'v20' is possibly undefined
// 1400427D0: variable 'v21' is possibly undefined
// 1400427E5: variable 'v22' is possibly undefined
// 1400427FA: variable 'v23' is possibly undefined
// 14004280F: variable 'v24' is possibly undefined
// 140042824: variable 'v25' is possibly undefined
// 140042839: variable 'v26' is possibly undefined
// 14004284E: variable 'v27' is possibly undefined
// 1400428CB: variable 'v30' is possibly undefined
// 1400428E0: variable 'v31' is possibly undefined
// 14000B690: using guessed type __int64 __fastcall sub_14000B690(_QWORD, _QWORD);
// 1409D0F94: using guessed type unsigned __int64 qword_1409D0F94[3];
// 1409FE4F0: using guessed type wchar_t aUiCursorsPoint_3[21];
// 1409FE520: using guessed type wchar_t aUiAssetsDocsGe_7[39];
// 1409FE570: using guessed type wchar_t aUiAssetsDocsGe_6[41];
// 1409FE5D8: using guessed type wchar_t aOptionsdialogs[15];
// 1409FE9A0: using guessed type wchar_t aOptions[8];
// 1409FE9C0: using guessed type wchar_t aCrbTooltipbasi_0[17];
// 1409FE9E8: using guessed type wchar_t aProtectedaddon[16];
// 1409FEBF8: using guessed type wchar_t aDefaultstratum_1[15];
// 140B69480: using guessed type char *off_140B69480;
// 140B69B90: using guessed type char *off_140B69B90;
// 140C567E0: using guessed type char *off_140C567E0;
// 140C57760: using guessed type char *off_140C57760;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65670: using guessed type __int64 qword_140C65670;

