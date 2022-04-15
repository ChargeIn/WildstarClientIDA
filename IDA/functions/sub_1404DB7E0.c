//----- (00000001404DB7E0) ----------------------------------------------------
__int64 __fastcall sub_1404DB7E0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int16* v5; // r14
	unsigned int v6; // eax
	__int64 v7; // rax
	__int64 v8; // r8
	_QWORD* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	int v12; // edx
	__int16* v13; // rax
	__int64 v14; // rax
	__int64 v15; // rcx
	int v16; // edx
	__int16* v17; // rax
	int* v18; // rbx
	__int64 v19; // rcx
	int* v20; // r13
	int* v21; // r15
	__int64 v22; // rax
	__int64 v23; // rdi
	unsigned __int64 v24; // rdi
	int* v25; // r15
	__int64 v26; // rax
	__int64 v28; // r12
	_WORD* v29; // rax
	__int64* v30; // rax
	__int64 v31; // rcx
	int v32; // edx
	const wchar_t* v33; // rdi
	__int64 v34; // rcx
	__int16* v35; // rax
	__int64 v36; // rcx
	__int16* v37; // rax
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int16* v40; // rax
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int16* v43; // rax
	const wchar_t* v44; // rdx
	__int64 v46; // [rsp+20h] [rbp-58h] BYREF
	int* v47; // [rsp+28h] [rbp-50h]
	_WORD* v48; // [rsp+30h] [rbp-48h]
	__int64 v49; // [rsp+38h] [rbp-40h]
	int* v50; // [rsp+80h] [rbp+8h] BYREF
	int* v51; // [rsp+88h] [rbp+10h]

	sub_1400B6390((_QWORD*)a1);
	*(_QWORD*)a1 = off_140B693C0;
	if (!a2)
		return a1;
	sub_1400B6A10(a1, *(_DWORD*)(a2 + 52));
	v4 = *(_QWORD*)(a2 + 272);
	v5 = 0i64;
	if (v4)
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	else
		v6 = 0;
	*(_DWORD*)(a1 + 20) = v6;
	v7 = sub_1401FF120(v6);
	if (v7)
		(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 136i64))(
			a1,
			L"faction",
			*(unsigned int*)(v7 + 12));
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 8);
	sub_1400B6BD0(a1, (int*)L"name", *(int**)(a2 + 136));
	v8 = *(unsigned int*)(a2 + 60);
	if (!(_DWORD)v8)
		v8 = *(unsigned int*)(a2 + 56);
	v9 = sub_14018EFA0(&v46, (__int64)L"%d", v8);
	(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 160i64))(a1, L"level", v9[1]);
	if (v47)
		sub_14018B900((__int64)v47, 0);
	if (a2 == *(_QWORD*)(qword_140C65898 + 120))
		sub_1400B67E0(a1, (int*)L"player");
	v10 = sub_14022D500(*(_DWORD*)(a2 + 216));
	if (v10)
	{
		if (*(_DWORD*)(a1 + 16) == 1)
			v12 = *(_DWORD*)(v10 + 20);
		else
			v12 = *(_DWORD*)(v10 + 16);
		v13 = sub_14034BDD0(v11, v12);
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"race", v13);
	}
	v14 = sub_1401F31E0(*(_DWORD*)(a2 + 220));
	if (v14)
	{
		if (*(_DWORD*)(a1 + 16) == 1)
			v16 = *(_DWORD*)(v14 + 20);
		else
			v16 = *(_DWORD*)(v14 + 16);
		v17 = sub_14034BDD0(v15, v16);
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"class", v17);
	}
	sub_1403CA5F0(qword_140C65898, &v50, *(_DWORD*)(a2 + 360));
	v18 = v50;
	sub_1400B6BD0(a1, (int*)L"title", v50);
	v20 = 0i64;
	v21 = *sub_1403CA8B0(v19, &v50, *(_DWORD*)(a2 + 360), a2);
	v22 = 0i64;
	if (*(_WORD*)v21)
	{
		do
			++v22;
		while (*((_WORD*)v21 + v22));
	}
	v23 = (2 * v22) >> 1;
	if ((unsigned __int64)(v23 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v20 = sub_14018B280(2 * (v23 + 1), 0);
	v24 = 2 * v23;
	sub_1407DB590(v20, v21, v24);
	v51 = (int*)((char*)v20 + v24);
	if ((int*)((char*)v20 + v24))
		*(_WORD*)((char*)v20 + v24) = 0;
	if (v50)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v50 - 2) + 8i64))(v50 - 4);
	v25 = 0i64;
	v47 = 0i64;
	v49 = 0i64;
	v26 = 0i64;
	while (aFulltitle[++v26] != 0)
		;
	v28 = (2 * v26) >> 1;
	if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v25 = sub_14018B280(2 * (v28 + 1), 0);
		v47 = v25;
		v49 = (__int64)v25 + 2 * v28 + 2;
	}
	sub_1407DB590(v25, (int*)L"fulltitle", 2 * v28);
	v29 = (_WORD*)v25 + v28;
	v48 = v29;
	if (v29)
		*v29 = 0;
	v30 = (__int64*)sub_1400B8E10(a1 + 56, (__int64)&v46);
	if (&v46 != v30)
		sub_14001C480((__int64)v30, v20, v51);
	if (v25)
		sub_14018B900((__int64)v25, 0);
	v31 = *(unsigned int*)(a2 + 14080);
	if (!(_DWORD)v31)
	{
		v32 = 110928;
		goto LABEL_49;
	}
	v31 = (unsigned int)(v31 - 1);
	if (!(_DWORD)v31)
	{
		v32 = 110929;
		goto LABEL_49;
	}
	v31 = (unsigned int)(v31 - 1);
	if (!(_DWORD)v31)
	{
		v32 = 110930;
		goto LABEL_49;
	}
	v31 = (unsigned int)(v31 - 1);
	if (!(_DWORD)v31)
	{
		v32 = 110931;
	LABEL_49:
		v5 = sub_14034BDD0(v31, v32);
	}
	sub_1400B6BD0(a1, (int*)L"path", (int*)v5);
	v33 = sub_140570600(*(_DWORD*)(a2 + 14080));
	v35 = sub_14034BDD0(v34, 1);
	(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, v33, v35);
	switch (*(_DWORD*)(a2 + 216))
	{
	case 1:
		v37 = sub_14034BDD0(v36, 1);
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"anyHuman", v37);
		v38 = *(_QWORD*)(a2 + 272);
		if (v38 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v38 + 24i64))(v38) == 166)
		{
			v40 = sub_14034BDD0(v39, 1);
			(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"domHuman", v40);
		}
		v41 = *(_QWORD*)(a2 + 272);
		if (v41 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v41 + 24i64))(v41) == 167)
		{
			v43 = sub_14034BDD0(v42, 1);
			v44 = L"exiHuman";
			goto LABEL_63;
		}
		break;
	case 3:
		v43 = sub_14034BDD0(v36, 1);
		v44 = L"granok";
		goto LABEL_63;
	case 4:
		v43 = sub_14034BDD0(v36, 1);
		v44 = L"aurin";
		goto LABEL_63;
	case 5:
		v43 = sub_14034BDD0(v36, 1);
		v44 = L"draken";
		goto LABEL_63;
	case 0xC:
		v43 = sub_14034BDD0(v36, 1);
		v44 = L"mechari";
		goto LABEL_63;
	case 0xD:
		v43 = sub_14034BDD0(v36, 1);
		v44 = L"chua";
		goto LABEL_63;
	case 0x10:
		v43 = sub_14034BDD0(v36, 1);
		v44 = L"mordesh";
	LABEL_63:
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, v44, v43);
		break;
	default:
		break;
	}
	if (v20)
		sub_14018B900((__int64)v20, 0);
	if (v18)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
	return a1;
}
// 1404DB90F: variable 'v11' is possibly undefined
// 1404DB949: variable 'v15' is possibly undefined
// 1404DB9AC: variable 'v19' is possibly undefined
// 1404DBB64: variable 'v34' is possibly undefined
// 1404DBBB1: variable 'v36' is possibly undefined
// 1404DBBEB: variable 'v39' is possibly undefined
// 1404DBC2D: variable 'v42' is possibly undefined
// 1409D3314: using guessed type wchar_t aD_3[3];
// 140A13D18: using guessed type wchar_t aFaction[8];
// 140B0A7E8: using guessed type wchar_t aAurin_0[6];
// 140B0A7F8: using guessed type wchar_t aMordesh_0[8];
// 140B0A808: using guessed type wchar_t aDraken_0[7];
// 140B0A818: using guessed type wchar_t aMechari_0[8];
// 140B0A828: using guessed type wchar_t aAnyhuman[9];
// 140B0A840: using guessed type wchar_t aDomhuman[9];
// 140B0A858: using guessed type wchar_t aExihuman[9];
// 140B0A870: using guessed type wchar_t aGranok_0[7];
// 140B0A880: using guessed type wchar_t aClass_1[6];
// 140B0A890: using guessed type wchar_t aTitle_2[6];
// 140B0A8A0: using guessed type wchar_t aFulltitle[10];
// 140B0A8B8: using guessed type wchar_t aPath_3[5];
// 140B0A8C8: using guessed type wchar_t aName_14[5];
// 140B0A8D8: using guessed type wchar_t aLevel_1[6];
// 140B0A8E8: using guessed type wchar_t aPlayer[7];
// 140B0A8F8: using guessed type wchar_t aRace_0[5];
// 140B0A9E8: using guessed type wchar_t aChua_0[5];
// 140B693C0: using guessed type __int64 (__fastcall *off_140B693C0[23])();
// 140C65898: using guessed type __int64 qword_140C65898;

