#include "../winhttp.h"

//----- (00000001404DC000) ----------------------------------------------------
__int64 __fastcall sub_1404DC000(__int64 a1, __int64 a2)
{
	unsigned int v4; // ecx
	__int64 v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // edx
	__int16* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // edx
	__int16* v15; // rax
	int* v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rcx
	int* v19; // rdi
	__int64 v20; // rcx
	int v21; // ebp
	__int16* v22; // rax
	int v23; // edx
	__int64 v24; // rcx
	int v25; // eax
	const wchar_t* v26; // rbp
	__int16* v27; // rax
	__int64 v28; // rcx
	__int16* v29; // rax
	__int64 v30; // rcx
	__int16* v31; // rax
	__int16* v32; // rax
	const wchar_t* v33; // rdx
	__int64 v35; // [rsp+20h] [rbp-38h] BYREF
	__int64 v36; // [rsp+28h] [rbp-30h]
	int* v37; // [rsp+60h] [rbp+8h] BYREF

	sub_1400B6390((_QWORD*)a1);
	*(_QWORD*)a1 = off_140B69300;
	sub_1400B6A10(a1, *(_DWORD*)(a2 + 20));
	v4 = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 20) = v4;
	v5 = sub_1401FF120(v4);
	if (v5)
		(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 136i64))(
			a1,
			L"faction",
			*(unsigned int*)(v5 + 12));
	sub_1400B6BD0(a1, (int*)L"name", *(int**)(a2 + 8));
	v6 = sub_14018EFA0(&v35, (__int64)L"%d", *(unsigned int*)(a2 + 16));
	(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 160i64))(a1, L"level", v6[1]);
	if (v36)
		sub_14018B900(v36, 0);
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (v7 && *(_DWORD*)a2 == *(_DWORD*)(v7 + 8))
		sub_1400B67E0(a1, (int*)L"player");
	v8 = sub_14022D500(*(_DWORD*)(a2 + 24));
	if (v8)
	{
		if (*(_DWORD*)(a1 + 16) == 1)
			v10 = *(_DWORD*)(v8 + 20);
		else
			v10 = *(_DWORD*)(v8 + 16);
		v11 = sub_14034BDD0(v9, v10);
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"race", v11);
	}
	v12 = sub_1401F31E0(*(_DWORD*)(a2 + 28));
	if (v12)
	{
		if (*(_DWORD*)(a1 + 16) == 1)
			v14 = *(_DWORD*)(v12 + 20);
		else
			v14 = *(_DWORD*)(v12 + 16);
		v15 = sub_14034BDD0(v13, v14);
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"class", v15);
	}
	sub_1403CA5F0(qword_140C65898, &v37, *(_DWORD*)(a2 + 40));
	v16 = v37;
	sub_1400B6BD0(a1, (int*)L"title", v37);
	v17 = sub_1403D90D0(qword_140C65898, *(_DWORD*)a2);
	sub_1403CA8B0(v18, &v37, *(_DWORD*)(a2 + 40), v17);
	v19 = v37;
	sub_1400B6BD0(a1, (int*)L"fulltitle", v37);
	v20 = *(unsigned int*)(a2 + 36);
	v21 = 0;
	if (!(_DWORD)v20)
	{
		v23 = 110928;
		goto LABEL_27;
	}
	v20 = (unsigned int)(v20 - 1);
	if (!(_DWORD)v20)
	{
		v23 = 110929;
		goto LABEL_27;
	}
	v20 = (unsigned int)(v20 - 1);
	if (!(_DWORD)v20)
	{
		v23 = 110930;
		goto LABEL_27;
	}
	v20 = (unsigned int)(v20 - 1);
	if (!(_DWORD)v20)
	{
		v23 = 110931;
	LABEL_27:
		v22 = sub_14034BDD0(v20, v23);
		goto LABEL_28;
	}
	v22 = 0i64;
LABEL_28:
	sub_1400B6BD0(a1, (int*)L"path", (int*)v22);
	v24 = *(int*)(a2 + 36);
	if ((dword_140DC3448 & 1) != 0)
	{
		v25 = dword_140DC3454;
		v21 = dword_140DC3450;
	}
	else
	{
		dword_140DC3450 = 0;
		dword_140DC3448 |= 1u;
		v25 = 4;
		dword_140DC3454 = 4;
	}
	if ((int)v24 < v21 || (int)v24 >= v25)
		v26 = L"nopath";
	else
		v26 = off_140C39018[v24];
	v27 = sub_14034BDD0(v24, 1);
	(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, v26, v27);
	switch (*(_DWORD*)(a2 + 24))
	{
	case 1:
		v29 = sub_14034BDD0(v28, 1);
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"anyHuman", v29);
		if (*(_DWORD*)(a2 + 32) == 166)
		{
			v31 = sub_14034BDD0(v30, 1);
			(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"domHuman", v31);
		}
		if (*(_DWORD*)(a2 + 32) == 167)
		{
			v32 = sub_14034BDD0(v30, 1);
			v33 = L"exiHuman";
			goto LABEL_46;
		}
		break;
	case 3:
		v32 = sub_14034BDD0(v28, 1);
		v33 = L"granok";
		goto LABEL_46;
	case 4:
		v32 = sub_14034BDD0(v28, 1);
		v33 = L"aurin";
		goto LABEL_46;
	case 5:
		v32 = sub_14034BDD0(v28, 1);
		v33 = L"draken";
		goto LABEL_46;
	case 0xC:
		v32 = sub_14034BDD0(v28, 1);
		v33 = L"mechari";
		goto LABEL_46;
	case 0xD:
		v32 = sub_14034BDD0(v28, 1);
		v33 = L"chua";
		goto LABEL_46;
	case 0x10:
		v32 = sub_14034BDD0(v28, 1);
		v33 = L"mordesh";
	LABEL_46:
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, v33, v32);
		break;
	default:
		break;
	}
	if (v19)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
	if (v16)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	return a1;
}
// 1404DC0F6: variable 'v9' is possibly undefined
// 1404DC12E: variable 'v13' is possibly undefined
// 1404DC191: variable 'v18' is possibly undefined
// 1404DC28E: variable 'v28' is possibly undefined
// 1404DC2B9: variable 'v30' is possibly undefined
// 1409D3314: using guessed type wchar_t aD_3[3];
// 140A13D18: using guessed type wchar_t aFaction[8];
// 140B0A908: using guessed type wchar_t aDomhuman_0[9];
// 140B0A920: using guessed type wchar_t aExihuman_0[9];
// 140B0A938: using guessed type wchar_t aGranok_1[7];
// 140B0A948: using guessed type wchar_t aAurin_1[6];
// 140B0A958: using guessed type wchar_t aTitle_3[6];
// 140B0A968: using guessed type wchar_t aFulltitle_0[10];
// 140B0A980: using guessed type wchar_t aPath_4[5];
// 140B0A990: using guessed type wchar_t aAnyhuman_0[9];
// 140B0A9A8: using guessed type wchar_t aLevel_2[6];
// 140B0A9B8: using guessed type wchar_t aPlayer_0[7];
// 140B0A9C8: using guessed type wchar_t aRace_1[5];
// 140B0A9D8: using guessed type wchar_t aClass_2[6];
// 140B0AA08: using guessed type wchar_t aName_15[5];
// 140B0AB20: using guessed type wchar_t aMordesh_1[8];
// 140B0AB30: using guessed type wchar_t aDraken_1[7];
// 140B0AB40: using guessed type wchar_t aMechari_1[8];
// 140B0AB50: using guessed type wchar_t aChua_1[5];
// 140B1EC60: using guessed type wchar_t aNopath[7];
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C39018: using guessed type wchar_t *off_140C39018[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3448: using guessed type int dword_140DC3448;
// 140DC3450: using guessed type int dword_140DC3450;
// 140DC3454: using guessed type int dword_140DC3454;

