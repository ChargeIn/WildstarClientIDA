//----- (00000001404DD4C0) ----------------------------------------------------
__int64 __fastcall sub_1404DD4C0(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rdi
	_QWORD* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbp
	__int64 v10; // r14
	__int64 v11; // r13
	unsigned int v12; // r8d
	__int64 v13; // r9
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned int v16; // ebx
	unsigned int v17; // r15d
	unsigned int v18; // eax
	unsigned int v19; // r12d
	__int64 v20; // rcx
	__int16* v21; // rax
	__int64 v22; // rcx
	__int16* v23; // rax
	_QWORD* v24; // rax
	_QWORD* v25; // rax
	unsigned int v26; // edx
	int v27; // eax
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // rcx
	__int16* v32; // rax
	const wchar_t* v33; // rdx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rax
	__int64 v41; // rax
	unsigned int v42; // ebx
	__int64 v43; // rax
	__int64 v44; // rcx
	char v46[16]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v47; // [rsp+30h] [rbp-48h] BYREF
	__int64 v48; // [rsp+38h] [rbp-40h]
	__int64 v49; // [rsp+80h] [rbp+8h]

	v3 = a3;
	sub_1400B6390((_QWORD*)a1);
	*(_QWORD*)a1 = off_140B69300;
	v6 = sub_14018EFA0(&v47, (__int64)L"objective%d", (unsigned int)v3);
	sub_1400B8F50(a1 + 24, (__int64)v46, (__int64)v6);
	v7 = v48;
	if (v48)
		sub_14018B900(v48, 0);
	v8 = sub_1405A8A40(v7, a2);
	v9 = v8;
	if (v8)
	{
		if ((unsigned int)v3 <= *(_DWORD*)(v8 + 16))
		{
			v10 = v8 + 8 * v3;
			v11 = *(_QWORD*)(v10 + 24);
			if (v11)
			{
				v12 = **(_DWORD**)(v8 + 8);
				v13 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
				v14 = v13;
				v15 = *(_QWORD*)(v13 + 8);
				while (v15)
				{
					if (*(_DWORD*)(v15 + 32) < v12)
					{
						v15 = *(_QWORD*)(v15 + 24);
					}
					else
					{
						v14 = v15;
						v15 = *(_QWORD*)(v15 + 16);
					}
				}
				if (v14 == v13 || (v49 = v14, v12 < *(_DWORD*)(v14 + 32)))
					v49 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
				v16 = 0;
				if (v49 == v13 || v49 == -40)
					v17 = 0;
				else
					v17 = sub_1406113B0((__int64*)(v49 + 40), v3);
				v18 = sub_140551840(v9, v3);
				*(_DWORD*)(a1 + 8) = v18;
				v19 = v18;
				v21 = sub_14034BDD0(v20, *(_DWORD*)(v11 + 20));
				(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"name", v21);
				v22 = *(_QWORD*)(v9 + 8);
				if (v22)
					v23 = sub_14034BDD0(v22, *(_DWORD*)(v22 + 4));
				else
					v23 = (__int16*)&unk_1409F28B4;
				sub_1400B6BD0(a1, (int*)L"questname", (int*)v23);
				v24 = sub_14018EFA0(&v47, (__int64)L"%d", v19);
				(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 160i64))(a1, L"needed", v24[1]);
				if (v48)
					sub_14018B900(v48, 0);
				v25 = sub_14018EFA0(&v47, (__int64)L"%d", v17);
				(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 160i64))(a1, L"completed", v25[1]);
				if (v48)
					sub_14018B900(v48, 0);
				v26 = *(_DWORD*)(v9 + 16);
				if ((unsigned int)v3 < v26)
				{
					v28 = *(_QWORD*)(v10 + 24);
					if (v28)
						v27 = *(_DWORD*)(v28 + 4);
					else
						v27 = 0;
				}
				else
				{
					v27 = 0;
				}
				switch (v27)
				{
				case 2:
				case 3:
				case 9:
				case 12:
				case 18:
					if ((_DWORD)v3 != v26 && (unsigned int)v3 <= v26)
					{
						v29 = *(_QWORD*)(v10 + 24);
						if (v29)
							v16 = *(_DWORD*)(v29 + 12);
					}
					v30 = sub_1404835C0(qword_140C65918, v16);
					if (v30)
					{
						v32 = sub_14034BDD0(v31, *(_DWORD*)(v30 + 8));
						v33 = L"creature";
						goto LABEL_58;
					}
					break;
				case 4:
					if ((_DWORD)v3 != v26 && (unsigned int)v3 <= v26)
					{
						v34 = *(_QWORD*)(v10 + 24);
						if (v34)
							v16 = *(_DWORD*)(v34 + 12);
					}
					if (sub_140444550(qword_140C658F0, v16))
					{
						v35 = sub_1402096E0(v16);
						if (v35)
						{
							v32 = sub_14034BDD0(v36, *(_DWORD*)(v35 + 176));
							v33 = L"item";
							goto LABEL_58;
						}
					}
					break;
				case 32:
					if ((_DWORD)v3 != v26 && (unsigned int)v3 <= v26)
					{
						v37 = *(_QWORD*)(v10 + 24);
						if (v37)
							v16 = *(_DWORD*)(v37 + 12);
					}
					v38 = sub_140248AC0(v16);
					if (v38)
					{
						v32 = sub_14034BDD0(v39, *(_DWORD*)(v38 + 20));
						v33 = L"item";
						goto LABEL_58;
					}
					break;
				case 33:
					if ((_DWORD)v3 != v26 && (unsigned int)v3 <= v26)
					{
						v40 = *(_QWORD*)(v10 + 24);
						if (v40)
							v16 = *(_DWORD*)(v40 + 12);
					}
					v41 = sub_140245C00(v16);
					if (v41)
					{
						v42 = *(_DWORD*)(v41 + 12);
						if (sub_140444550(qword_140C658F0, v42))
						{
							v43 = sub_1402096E0(v42);
							if (v43)
							{
								v32 = sub_14034BDD0(v44, *(_DWORD*)(v43 + 176));
								v33 = L"item";
							LABEL_58:
								(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, v33, v32);
							}
						}
					}
					break;
				default:
					return a1;
				}
			}
		}
	}
	return a1;
}
// 1404DD518: variable 'v7' is possibly undefined
// 1404DD5F9: variable 'v20' is possibly undefined
// 1404DD73A: variable 'v31' is possibly undefined
// 1404DD789: variable 'v36' is possibly undefined
// 1404DD7BB: variable 'v39' is possibly undefined
// 1404DD80E: variable 'v44' is possibly undefined
// 1409D3314: using guessed type wchar_t aD_3[3];
// 140B0ADA8: using guessed type wchar_t aItem_6[5];
// 140B0ADF8: using guessed type wchar_t aCompleted[10];
// 140B0AE50: using guessed type wchar_t aCreature_0[9];
// 140B0AE68: using guessed type wchar_t aItem_4[5];
// 140B0AE78: using guessed type wchar_t aItem_5[5];
// 140B0AE88: using guessed type wchar_t aObjectiveD[12];
// 140B0AEA0: using guessed type wchar_t aName_19[5];
// 140B0AEB0: using guessed type wchar_t aQuestname[10];
// 140B0AEC8: using guessed type wchar_t aNeeded[7];
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 1404DD4C0: using guessed type char var_58[16];

