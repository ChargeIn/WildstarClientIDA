#include "../winhttp.h"

//----- (00000001406EE640) ----------------------------------------------------
__int64 __fastcall sub_1406EE640(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 v4; // rdx
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // r12
	_DWORD* v12; // rsi
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rdi
	__int64 v16; // rax
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	int* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // r11
	__int64 v23; // rdx
	int v24; // r10d
	__int64 v25; // rdx
	__int64 v26; // rcx
	unsigned __int64 v27; // rax
	__int64 v28; // rdi
	__int64 v29; // rax
	int v30; // edi
	__int64 v31; // rcx
	_QWORD* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rdx
	__int64 v35; // r15
	__int64 v36; // rdx
	unsigned __int64 v37; // rcx
	__int64 v38; // rdi
	__int64 v39; // rax
	int v40; // edi
	__int64 v41; // rcx
	_QWORD* v42; // rax
	__int64 v43; // rdx
	__int64 v44; // rdx
	__int64 v45; // rdi
	__int64 v46; // rax
	int v47; // edi
	_QWORD* v48; // rax
	__int64 v49; // rdx
	_QWORD* v50; // rax
	__int64 v51; // rdx
	unsigned __int16* v52; // r10
	int* v53; // rax
	__int64 v54; // rdx
	__int64 v55; // rsi
	__int64 v56; // rdx
	unsigned __int64 v57; // rcx
	__int64 v58; // rdi
	__int64 v59; // rax
	int v60; // edi
	__int64 v61; // rcx
	_QWORD* v62; // rax
	__int64 v63; // rdx
	__int64 v64; // rdx
	__int64 v65; // rax
	__int64(__fastcall * *v66)(); // rax
	__int64 v67; // rdx
	int v68; // edx
	__int64 v69; // rcx
	_QWORD* v70; // rax
	__int64 v71; // r10
	__int64 v72; // rdx
	__int64 v73; // rcx
	__int64(__fastcall * *v75)(); // [rsp+30h] [rbp-48h] BYREF
	int v76; // [rsp+38h] [rbp-40h]
	_QWORD* v77; // [rsp+40h] [rbp-38h]
	int v78; // [rsp+48h] [rbp-30h]
	__int64(__fastcall * *v79)(); // [rsp+50h] [rbp-28h] BYREF
	int v80; // [rsp+58h] [rbp-20h]
	_QWORD* v81; // [rsp+60h] [rbp-18h]
	int v82; // [rsp+68h] [rbp-10h]
	int v83; // [rsp+B8h] [rbp+40h] BYREF
	int* v84; // [rsp+C8h] [rbp+50h] BYREF

	v77 = a2;
	v78 = 1;
	v76 = -2;
	v4 = a2[4];
	v75 = off_140B569F0;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0((__int64)a2);
	v7 = a2[2];
	v8 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a2[2] += 16i64;
	v76 = sub_1400578C0((__int64)a2);
	v10 = qword_140C65898;
	if (qword_140C65898)
	{
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			v11 = *(_QWORD*)(a3 + 8);
			if (v11 != *(_QWORD*)(a3 + 16))
			{
				while (1)
				{
					v12 = *(_DWORD**)v11;
					if (!*(_DWORD*)(*(_QWORD*)v11 + 28i64)
						|| (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
							qword_140C659A0,
							*(_QWORD*)(v10 + 120)))
					{
						if (v12[4])
						{
							v13 = a2[4];
							v79 = off_140B569F0;
							v81 = a2;
							v14 = *(_QWORD*)(v13 + 112);
							v82 = 1;
							if (*(_QWORD*)(v13 + 120) >= v14)
								sub_14005E2C0((__int64)a2);
							v15 = a2[2];
							v16 = sub_14005C1B0((__int64)a2, 0, 0);
							*(_DWORD*)(v15 + 8) = 5;
							*(_QWORD*)v15 = v16;
							a2[2] += 16i64;
							LODWORD(v15) = sub_1400578C0((__int64)a2);
							v17 = *(_QWORD*)(a2[4] + 160i64);
							v80 = v15;
							v18 = sub_14005C3C0(v17, v15);
							v19 = a2[2];
							*(_QWORD*)v19 = *v18;
							*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
							a2[2] += 16i64;
							sub_1400F06F0((__int64)a2, v19, L"eType", 0);
							a2[2] -= 16i64;
							v20 = sub_1400B5DF0(qword_140C658F0, v12[4], 0i64);
							sub_140415C70(a2, (__int64)v20);
							sub_1400FB540((__int64)&v79);
							a2[2] -= 16i64;
							v21 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v15);
							*(_QWORD*)v22 = *v21;
							*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
							a2[2] += 16i64;
							sub_1400F06F0((__int64)a2, v23, L"nCount", v24);
							a2[2] -= 16i64;
							sub_1400FB1D0((__int64)&v75);
							sub_1400579E0((__int64)a2, v25, v15);
						}
						if (v12[3])
						{
							v26 = a2[4];
							v79 = off_140B569F0;
							v81 = a2;
							v27 = *(_QWORD*)(v26 + 112);
							v82 = 1;
							if (*(_QWORD*)(v26 + 120) >= v27)
								sub_14005E2C0((__int64)a2);
							v28 = a2[2];
							v29 = sub_14005C1B0((__int64)a2, 0, 0);
							*(_DWORD*)(v28 + 8) = 5;
							*(_QWORD*)v28 = v29;
							a2[2] += 16i64;
							v30 = sub_1400578C0((__int64)a2);
							v31 = *(_QWORD*)(a2[4] + 160i64);
							v80 = v30;
							v32 = sub_14005C3C0(v31, v30);
							v33 = a2[2];
							*(_QWORD*)v33 = *v32;
							*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
							a2[2] += 16i64;
							sub_1400F06F0((__int64)a2, v33, L"eType", 1);
							a2[2] -= 16i64;
							v83 = v12[3];
							if ((unsigned int)sub_1403D3470(a2, &v83))
							{
								sub_1400FB540((__int64)&v79);
								a2[2] -= 16i64;
							}
							sub_1400FB1D0((__int64)&v75);
							sub_1400579E0((__int64)a2, v34, v30);
						}
						v35 = sub_1405A8A40(v9, v12[5]);
						if (v35)
						{
							v36 = a2[4];
							v81 = a2;
							v37 = *(_QWORD*)(v36 + 112);
							v79 = off_140B569F0;
							v82 = 1;
							if (*(_QWORD*)(v36 + 120) >= v37)
								sub_14005E2C0((__int64)a2);
							v38 = a2[2];
							v39 = sub_14005C1B0((__int64)a2, 0, 0);
							*(_DWORD*)(v38 + 8) = 5;
							*(_QWORD*)v38 = v39;
							a2[2] += 16i64;
							v40 = sub_1400578C0((__int64)a2);
							v41 = *(_QWORD*)(a2[4] + 160i64);
							v80 = v40;
							v42 = sub_14005C3C0(v41, v40);
							v43 = a2[2];
							*(_QWORD*)v43 = *v42;
							*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
							a2[2] += 16i64;
							sub_1400F06F0((__int64)a2, v43, L"eType", 3);
							a2[2] -= 16i64;
							if ((unsigned int)sub_140663030(a2, v35))
							{
								sub_1400FB540((__int64)&v79);
								a2[2] -= 16i64;
							}
							sub_1400FB1D0((__int64)&v75);
							sub_1400579E0((__int64)a2, v44, v40);
						}
						if (sub_1401F1860(v12[6]))
						{
							if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
								sub_14005E2C0((__int64)a2);
							v45 = a2[2];
							v46 = sub_14005C1B0((__int64)a2, 0, 0);
							*(_DWORD*)(v45 + 8) = 5;
							*(_QWORD*)v45 = v46;
							a2[2] += 16i64;
							v47 = sub_1400578C0((__int64)a2);
							v48 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v47);
							v49 = a2[2];
							*(_QWORD*)v49 = *v48;
							*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
							a2[2] += 16i64;
							sub_1400F06F0((__int64)a2, v49, L"eType", 2);
							a2[2] -= 16i64;
							sub_1403CA5F0(qword_140C65898, &v84, v12[6]);
							v50 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v47);
							v51 = a2[2];
							*(_QWORD*)v51 = *v50;
							*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
							a2[2] += 16i64;
							sub_1400F0870((__int64)a2, v51, L"strTitleName", v52);
							v53 = v84;
							a2[2] -= 16i64;
							if (v53)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v53 - 2) + 8i64))(v53 - 4);
							sub_1400FB1D0((__int64)&v75);
							sub_1400579E0((__int64)a2, v54, v47);
						}
						v55 = sub_1402215C0(v12[10]);
						if (v55)
						{
							v56 = a2[4];
							v79 = off_140B569F0;
							v81 = a2;
							v57 = *(_QWORD*)(v56 + 112);
							v82 = 1;
							if (*(_QWORD*)(v56 + 120) >= v57)
								sub_14005E2C0((__int64)a2);
							v58 = a2[2];
							v59 = sub_14005C1B0((__int64)a2, 0, 0);
							*(_DWORD*)(v58 + 8) = 5;
							*(_QWORD*)v58 = v59;
							a2[2] += 16i64;
							v60 = sub_1400578C0((__int64)a2);
							v61 = *(_QWORD*)(a2[4] + 160i64);
							v80 = v60;
							v62 = sub_14005C3C0(v61, v60);
							v63 = a2[2];
							*(_QWORD*)v63 = *v62;
							*(_DWORD*)(v63 + 8) = *((_DWORD*)v62 + 2);
							a2[2] += 16i64;
							sub_1400F06F0((__int64)a2, v63, L"eType", 4);
							a2[2] -= 16i64;
							if ((unsigned int)sub_1406F1A20(a2, v55))
							{
								sub_1400FB540((__int64)&v79);
								a2[2] -= 16i64;
							}
							sub_1400FB1D0((__int64)&v75);
							sub_1400579E0((__int64)a2, v64, v60);
						}
					}
					v11 += 8i64;
					if (v11 == *(_QWORD*)(a3 + 16))
						break;
					v10 = qword_140C65898;
				}
			}
		}
	}
	v65 = (__int64)v77;
	*(_QWORD*)a1 = off_140B569F0;
	*(_QWORD*)(a1 + 16) = v65;
	v66 = v75;
	*(_DWORD*)(a1 + 24) = 1;
	*(_DWORD*)(a1 + 8) = -2;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v66[1])(&v75))
	{
		v68 = v76;
		v69 = v77[4];
		*(_DWORD*)(a1 + 24) = v78;
		v70 = sub_14005C3C0(*(_QWORD*)(v69 + 160), v68);
		v72 = *(_QWORD*)(v71 + 16);
		*(_QWORD*)v72 = *v70;
		v73 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v72 + 8) = *((_DWORD*)v70 + 2);
		*(_QWORD*)(v71 + 16) += 16i64;
		*(_DWORD*)(a1 + 8) = sub_1400578C0(v73);
	}
	v75 = off_140B56A08;
	if (v77)
		sub_1400579E0((__int64)v77, v67, v76);
	return a1;
}
// 1406EE81F: variable 'v22' is possibly undefined
// 1406EE831: variable 'v23' is possibly undefined
// 1406EE831: variable 'v24' is possibly undefined
// 1406EE84C: variable 'v25' is possibly undefined
// 1406EE92A: variable 'v34' is possibly undefined
// 1406EE932: variable 'v9' is possibly undefined
// 1406EEA12: variable 'v44' is possibly undefined
// 1406EEAF4: variable 'v52' is possibly undefined
// 1406EEB23: variable 'v54' is possibly undefined
// 1406EEC0B: variable 'v64' is possibly undefined
// 1406EECA3: variable 'v71' is possibly undefined
// 1406EECDD: variable 'v67' is possibly undefined
// 140B3FC10: using guessed type wchar_t aEtype_39[6];
// 140B3FC38: using guessed type wchar_t aEtype_38[6];
// 140B3FC60: using guessed type wchar_t aEtype_37[6];
// 140B3FC70: using guessed type wchar_t aNcount_46[7];
// 140B3FC98: using guessed type wchar_t aEtype_36[6];
// 140B3FE10: using guessed type wchar_t aEtype_40[6];
// 140B3FE20: using guessed type wchar_t aStrtitlename[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;

