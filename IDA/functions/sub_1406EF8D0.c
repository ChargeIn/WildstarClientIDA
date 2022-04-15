//----- (00000001406EF8D0) ----------------------------------------------------
__int64 __fastcall sub_1406EF8D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int** v4; // rax
	__int64 v5; // rax
	__int64 v7; // r15
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rax
	unsigned int v17; // r13d
	__int64 v18; // rsi
	__int64 v19; // r14
	__int64 v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rcx
	unsigned int v23; // r12d
	unsigned int v24; // esi
	_QWORD* v25; // rax
	__int64 v26; // rdx
	unsigned __int16* v27; // r10
	_QWORD* v28; // rax
	__int64 v29; // rdx
	unsigned __int16* v30; // r10
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	__int64 v37; // rdx
	__int64 v38; // rcx
	unsigned __int64 v39; // rax
	__int64 v40; // rdi
	__int64 v41; // rax
	__int64 v42; // r14
	__int64 v43; // r12
	int* v44; // rsi
	__int64 v45; // rdx
	unsigned __int64 v46; // rcx
	__int64 v47; // rdi
	__int64 v48; // rax
	int v49; // edi
	_QWORD* v50; // rax
	__int64 v51; // rdx
	int v52; // r10d
	__int64 v53; // rdx
	int v54; // esi
	int v55; // edi
	unsigned int v56; // eax
	__int64 v57; // rax
	__int64 v58; // rax
	__int64 v59; // rax
	int v60; // r14d
	_QWORD* v61; // rax
	__int64 v62; // rdx
	__int64 v63; // rcx
	__int64(__fastcall * *v64)(); // [rsp+20h] [rbp-69h] BYREF
	int v65; // [rsp+28h] [rbp-61h]
	_QWORD* v66; // [rsp+30h] [rbp-59h]
	int v67; // [rsp+38h] [rbp-51h]
	__int64 v68; // [rsp+40h] [rbp-49h]
	__int64(__fastcall * *v69)(); // [rsp+48h] [rbp-41h] BYREF
	int v70; // [rsp+50h] [rbp-39h]
	_QWORD* v71; // [rsp+58h] [rbp-31h]
	int v72; // [rsp+60h] [rbp-29h]
	__int64(__fastcall * *v73)(); // [rsp+68h] [rbp-21h] BYREF
	int v74; // [rsp+70h] [rbp-19h]
	_QWORD* v75; // [rsp+78h] [rbp-11h]
	int v76; // [rsp+80h] [rbp-9h]
	__int64(__fastcall * *v77)(); // [rsp+88h] [rbp-1h] BYREF
	int v78; // [rsp+90h] [rbp+7h]
	_QWORD* v79; // [rsp+98h] [rbp+Fh]
	int v80; // [rsp+A0h] [rbp+17h]
	int v81; // [rsp+F8h] [rbp+6Fh]
	__int64 v82; // [rsp+100h] [rbp+77h]

	if (qword_140C65970 && qword_140C65898 && qword_140C65960 && qword_140C658F0)
	{
		v2 = sub_1405278C0((__int64)a1, 1);
		if (v2 && (v4 = *(unsigned int***)(v2 + 8)) != 0i64)
			v5 = sub_1403D7BC0(qword_140C65970, **v4);
		else
			v5 = sub_1405721C0(v3);
		v82 = v5;
		if (v5)
		{
			v7 = sub_140432960(qword_140C65960, *(_DWORD*)(**(_QWORD**)(v5 + 48) + 20i64));
			if (v7)
			{
				v8 = a1[4];
				v9 = *(_QWORD*)(v8 + 112);
				v64 = off_140B569F0;
				v66 = a1;
				v67 = 1;
				if (*(_QWORD*)(v8 + 120) >= v9)
					sub_14005E2C0((__int64)a1);
				v10 = a1[2];
				v11 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v10 + 8) = 5;
				*(_QWORD*)v10 = v11;
				a1[2] += 16i64;
				v12 = sub_1400578C0((__int64)a1);
				v13 = a1[4];
				v65 = v12;
				v73 = off_140B569F0;
				v14 = *(_QWORD*)(v13 + 112);
				v75 = a1;
				v76 = 1;
				if (*(_QWORD*)(v13 + 120) >= v14)
					sub_14005E2C0((__int64)a1);
				v15 = a1[2];
				v16 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				a1[2] += 16i64;
				v74 = sub_1400578C0((__int64)a1);
				v17 = 0;
				v18 = v7 - (_QWORD)&unk_140B72540 + 96;
				v19 = 0i64;
				v68 = v18;
				do
				{
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v20 = a1[2];
					v21 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v20 + 8) = 5;
					*(_QWORD*)v20 = v21;
					a1[2] += 16i64;
					v81 = sub_1400578C0((__int64)a1);
					v23 = *(_DWORD*)((char*)&unk_140B72540 + v18 + v19);
					v24 = *(_DWORD*)(*(_QWORD*)(v7 + 8) + v19 + 4);
					if (v23 > v24)
						v23 = *(_DWORD*)(*(_QWORD*)(v7 + 8) + v19 + 4);
					sub_14034BDD0(v22, *(_DWORD*)((char*)&unk_140B72540 + v19));
					v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v81);
					v26 = a1[2];
					*(_QWORD*)v26 = *v25;
					*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v26, L"strName", v27);
					a1[2] -= 16i64;
					sub_14034BDD0(v19 + 16, *(_DWORD*)(v19 + 16 + *(_QWORD*)(v7 + 8)));
					v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v81);
					v29 = a1[2];
					*(_QWORD*)v29 = *v28;
					*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v29, L"strImprovement", v30);
					a1[2] -= 16i64;
					v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v81);
					*(_QWORD*)v32 = *v31;
					*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v33, L"nValue", v23);
					a1[2] -= 16i64;
					v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v81);
					*(_QWORD*)v35 = *v34;
					*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v36, L"nMax", v24);
					a1[2] -= 16i64;
					sub_1400FB1D0((__int64)&v73);
					sub_1400579E0((__int64)a1, v37, v81);
					++v17;
					v18 = v68;
					v19 += 4i64;
				} while (v17 < 3);
				v38 = a1[4];
				v71 = a1;
				v39 = *(_QWORD*)(v38 + 112);
				v69 = off_140B569F0;
				v72 = 1;
				if (*(_QWORD*)(v38 + 120) >= v39)
					sub_14005E2C0((__int64)a1);
				v40 = a1[2];
				v41 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v40 + 8) = 5;
				*(_QWORD*)v40 = v41;
				a1[2] += 16i64;
				v42 = 40i64;
				v70 = sub_1400578C0((__int64)a1);
				v43 = 3i64;
				do
				{
					v44 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v42 + *(_QWORD*)(v7 + 8)), 0i64);
					if (v44)
					{
						v45 = a1[4];
						v77 = off_140B569F0;
						v79 = a1;
						v46 = *(_QWORD*)(v45 + 112);
						v80 = 1;
						if (*(_QWORD*)(v45 + 120) >= v46)
							sub_14005E2C0((__int64)a1);
						v47 = a1[2];
						v48 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v47 + 8) = 5;
						*(_QWORD*)v47 = v48;
						a1[2] += 16i64;
						v49 = sub_1400578C0((__int64)a1);
						v78 = v49;
						if ((unsigned int)sub_140415C70(a1, (__int64)v44))
						{
							sub_1400FB540((__int64)&v77);
							a1[2] -= 16i64;
						}
						sub_1403AC840(qword_140C65898 + 160, 2, *v44);
						v50 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v49);
						v51 = a1[2];
						*(_QWORD*)v51 = *v50;
						*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v51, L"nCount", v52);
						a1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v69);
						sub_1400579E0((__int64)a1, v53, v49);
					}
					v42 += 4i64;
					--v43;
				} while (v43);
				v54 = v74;
				sub_1400FB2A0((__int64)&v64, (__int64)L"arAvenues", v74);
				v55 = v70;
				sub_1400FB2A0((__int64)&v64, (__int64)L"arResources", v70);
				v56 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v82 + 8i64))(v82);
				v57 = sub_140491C60(qword_140C65968, v56);
				if ((unsigned int)sub_140432AC0(a1, v57))
				{
					sub_1400FB540((__int64)&v64);
					a1[2] -= 16i64;
				}
				v58 = sub_140618780(v7);
				if (v58)
				{
					v59 = sub_1404804A0(qword_140C65970, **(_DWORD**)(v58 + 8), 21);
					if (v59)
					{
						if ((unsigned int)sub_140432AC0(a1, *(_QWORD*)(v59 + 48)))
						{
							sub_1400FB540((__int64)&v64);
							a1[2] -= 16i64;
						}
					}
				}
				v60 = v65;
				v61 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v65);
				v62 = a1[2];
				*(_QWORD*)v62 = *v61;
				v63 = (__int64)v71;
				*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
				a1[2] += 16i64;
				if (v63)
					sub_1400579E0(v63, v62, v55);
				if (v75)
					sub_1400579E0((__int64)v75, v62, v54);
				sub_1400579E0((__int64)a1, v62, v60);
				return 1i64;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406EFAF5: conditional instruction was optimized away because r13d.4<3u
// 1406EFB08: conditional instruction was optimized away because r13d.4<3u
// 1406EF945: variable 'v3' is possibly undefined
// 1406EFB2A: variable 'v22' is possibly undefined
// 1406EFB67: variable 'v27' is possibly undefined
// 1406EFBBE: variable 'v30' is possibly undefined
// 1406EFBEB: variable 'v32' is possibly undefined
// 1406EFBFD: variable 'v33' is possibly undefined
// 1406EFC2A: variable 'v35' is possibly undefined
// 1406EFC3C: variable 'v36' is possibly undefined
// 1406EFC57: variable 'v37' is possibly undefined
// 1406EFDCB: variable 'v52' is possibly undefined
// 1406EFDE6: variable 'v53' is possibly undefined
// 1406EFF10: variable 'v62' is possibly undefined
// 140B3FCF0: using guessed type wchar_t aNcount_47[7];
// 140B3FD20: using guessed type wchar_t aNmax_3[5];
// 140B3FD30: using guessed type wchar_t aNvalue_15[7];
// 140B3FD40: using guessed type wchar_t aStrimprovement[15];
// 140B3FD60: using guessed type wchar_t aStrname_83[8];
// 140B3FFD8: using guessed type wchar_t aArresources[12];
// 140B3FFF0: using guessed type wchar_t aAravenues[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65960: using guessed type __int64 qword_140C65960;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

