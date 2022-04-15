#include "../winhttp.h"

//----- (00000001406FE110) ----------------------------------------------------
__int64 __fastcall sub_1406FE110(__int64 a1)
{
	_QWORD* v1; // rsi
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // edi
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64* v10; // r14
	__int64 v11; // rdx
	unsigned __int64 v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rcx
	int v17; // r15d
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int16* v20; // r10
	_QWORD* v21; // rax
	__int64 v22; // r11
	__int64 v23; // rdx
	int v24; // r10d
	__int64 v25; // rcx
	__int64 v26; // rdi
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int16* v29; // r10
	_QWORD* v30; // rax
	__int64 v31; // r11
	__int64 v32; // rdx
	int v33; // r10d
	int v34; // r13d
	_QWORD* v35; // rax
	__int64 v36; // r10
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	_DWORD* v39; // rcx
	__int64* v40; // rax
	int v41; // edi
	_QWORD* v42; // rax
	__int64 v43; // r10
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	_DWORD* v46; // rcx
	__int64* v47; // rax
	unsigned int v48; // edx
	__int64 v49; // r8
	__int64 v50; // rcx
	__int64 v51; // rax
	__int64* v52; // rax
	__int64 v53; // rax
	__int64 v54; // rdx
	_QWORD* v55; // rax
	__int64 v56; // rdx
	int v57; // r10d
	_QWORD* v58; // rax
	__int64 v59; // r10
	__int64 v60; // rdx
	int v61; // r11d
	__int64 v62; // rdx
	__int64 v63; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v66; // rax
	__int64 v67; // r8
	__int64 v68; // rdx
	__int64(__fastcall * *v69)(); // [rsp+20h] [rbp-59h] BYREF
	int v70; // [rsp+28h] [rbp-51h]
	_QWORD* v71; // [rsp+30h] [rbp-49h]
	int v72; // [rsp+38h] [rbp-41h]
	__int64(__fastcall * *v73)(); // [rsp+40h] [rbp-39h] BYREF
	int v74; // [rsp+48h] [rbp-31h]
	_QWORD* v75; // [rsp+50h] [rbp-29h]
	int v76; // [rsp+58h] [rbp-21h]
	char v77[8]; // [rsp+60h] [rbp-19h] BYREF
	__int64 v78; // [rsp+68h] [rbp-11h]
	__int64 v79; // [rsp+80h] [rbp+7h] BYREF
	__int64 v80; // [rsp+88h] [rbp+Fh]
	__int64 v81; // [rsp+E8h] [rbp+6Fh] BYREF
	__int64 v82; // [rsp+F0h] [rbp+77h] BYREF

	v1 = (_QWORD*)a1;
	if (qword_140C65898)
	{
		v71 = (_QWORD*)a1;
		v3 = *(_QWORD*)(a1 + 32);
		v4 = *(_QWORD*)(v3 + 112);
		v72 = 1;
		v69 = off_140B569F0;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0((__int64)v1);
		v5 = v1[2];
		v6 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		v1[2] += 16i64;
		v7 = sub_1400578C0((__int64)v1);
		v70 = v7;
		sub_140030C70((__int64)v77, qword_140C65898 + 7120);
		v8 = v78;
		v9 = *(_QWORD*)(v78 + 16);
		if (v9 != v78)
		{
			do
			{
				v10 = (__int64*)sub_140717160(v8, *(_DWORD*)(v9 + 32));
				if (v10)
				{
					v11 = v1[4];
					v73 = off_140B569F0;
					v75 = v1;
					v12 = *(_QWORD*)(v11 + 112);
					v76 = 1;
					if (*(_QWORD*)(v11 + 120) >= v12)
						sub_14005E2C0((__int64)v1);
					v13 = v1[2];
					v14 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v13 + 8) = 5;
					*(_QWORD*)v13 = v14;
					v1[2] += 16i64;
					v15 = sub_1400578C0((__int64)v1);
					v16 = *v10;
					v17 = v15;
					v74 = v15;
					sub_14034BDD0(v16, *(_DWORD*)(v16 + 12));
					v18 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
					v19 = v1[2];
					*(_QWORD*)v19 = *v18;
					*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v19, L"strName", v20);
					v1[2] -= 16i64;
					v21 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
					*(_QWORD*)v22 = *v21;
					*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v23, L"nOrder", v24);
					v1[2] -= 16i64;
					v26 = v10[1];
					if (v26)
						sub_14034BDD0(v25, *(_DWORD*)(*(_QWORD*)v26 + 12i64));
					v27 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
					v28 = v1[2];
					*(_QWORD*)v28 = *v27;
					*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v28, L"strParent", v29);
					v1[2] -= 16i64;
					v30 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
					*(_QWORD*)v31 = *v30;
					*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v32, L"nParentOrder", v33);
					v1[2] -= 16i64;
					v34 = *(_DWORD*)(*v10 + 8) & 2;
					v35 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
					*(_QWORD*)v36 = *v35;
					*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
					v1[2] += 16i64;
					v37 = (unsigned __int64*)sub_14018F0E0(&v79, L"bIsLabel")[1];
					if (v37)
					{
						v38 = -1i64;
						do
							++v38;
						while (*((_BYTE*)v37 + v38));
						sub_140058710((__int64)v1, v37, v38);
					}
					else
					{
						*(_DWORD*)(v1[2] + 8i64) = 0;
						v1[2] += 16i64;
					}
					if (v80)
						sub_14018B900(v80, 0);
					v39 = (_DWORD*)v1[2];
					v39[2] = 1;
					*v39 = v34 != 0;
					v1[2] += 16i64;
					v40 = (__int64*)sub_1400580E0((__int64)v1, -3);
					sub_14005EA50((__int64)v1, v40, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
					v1[2] -= 48i64;
					v41 = (*(_DWORD*)(*v10 + 8) >> 4) & 1;
					v42 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
					*(_QWORD*)v43 = *v42;
					*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
					v1[2] += 16i64;
					v44 = (unsigned __int64*)sub_14018F0E0(&v79, L"bIgnoresBonuses")[1];
					if (v44)
					{
						v45 = -1i64;
						do
							++v45;
						while (*((_BYTE*)v44 + v45));
						sub_140058710((__int64)v1, v44, v45);
					}
					else
					{
						*(_DWORD*)(v1[2] + 8i64) = 0;
						v1[2] += 16i64;
					}
					if (v80)
						sub_14018B900(v80, 0);
					v46 = (_DWORD*)v1[2];
					v46[2] = 1;
					*v46 = v41 != 0;
					v1[2] += 16i64;
					v47 = (__int64*)sub_1400580E0((__int64)v1, -3);
					sub_14005EA50((__int64)v1, v47, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
					v1[2] -= 48i64;
					v48 = *(_DWORD*)(*v10 + 24);
					v49 = *(_QWORD*)(qword_140C65998 + 16);
					v50 = v49;
					v51 = *(_QWORD*)(v49 + 8);
					while (v51)
					{
						if (*(_DWORD*)(v51 + 32) < v48)
						{
							v51 = *(_QWORD*)(v51 + 24);
						}
						else
						{
							v50 = v51;
							v51 = *(_QWORD*)(v51 + 16);
						}
					}
					if (v50 == v49 || v48 < *(_DWORD*)(v50 + 32))
					{
						v82 = *(_QWORD*)(qword_140C65998 + 16);
						v52 = &v82;
					}
					else
					{
						v81 = v50;
						v52 = &v81;
					}
					v53 = *v52;
					if (v53 != v49)
					{
						v54 = *(_QWORD*)(v53 + 40);
						if (v54)
						{
							if ((unsigned int)sub_140432F20(v1, v54))
							{
								sub_1400FB540((__int64)&v73);
								v1[2] -= 16i64;
							}
						}
					}
					if (!v34)
					{
						sub_1407A2A00(*(float*)(v9 + 36));
						v55 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
						v56 = v1[2];
						*(_QWORD*)v56 = *v55;
						*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
						v1[2] += 16i64;
						sub_1400F06F0((__int64)v1, v56, L"nLevel", v57 - 4);
						v1[2] -= 16i64;
						v58 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
						*(_QWORD*)v59 = *v58;
						*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
						v1[2] += 16i64;
						sub_1400F06F0((__int64)v1, v60, L"nCurrent", v61);
						v1[2] -= 16i64;
					}
					sub_1400FB1D0((__int64)&v69);
					sub_1400579E0((__int64)v1, v62, v17);
				}
				v63 = *(_QWORD*)(v9 + 24);
				if (v63)
				{
					v9 = *(_QWORD*)(v9 + 24);
					for (i = *(_QWORD*)(v63 + 16); i; i = *(_QWORD*)(i + 16))
						v9 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v9 = j;
					if (*(_QWORD*)(v9 + 24) != j)
						v9 = j;
				}
			} while (v9 != v78);
			v1 = v71;
			v7 = v70;
		}
		v66 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v7);
		v67 = v1[2];
		*(_QWORD*)v67 = *v66;
		*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
		v1[2] += 16i64;
		sub_140008410((__int64)v77);
		sub_14018B900(v78, 0);
		sub_1400579E0((__int64)v1, v68, v7);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 1406FE203: variable 'v8' is possibly undefined
// 1406FE2AA: variable 'v20' is possibly undefined
// 1406FE2DF: variable 'v22' is possibly undefined
// 1406FE2F1: variable 'v23' is possibly undefined
// 1406FE2F1: variable 'v24' is possibly undefined
// 1406FE30A: variable 'v25' is possibly undefined
// 1406FE350: variable 'v29' is possibly undefined
// 1406FE38F: variable 'v31' is possibly undefined
// 1406FE3A1: variable 'v32' is possibly undefined
// 1406FE3A1: variable 'v33' is possibly undefined
// 1406FE3D7: variable 'v36' is possibly undefined
// 1406FE4A2: variable 'v43' is possibly undefined
// 1406FE5E9: variable 'v57' is possibly undefined
// 1406FE63C: variable 'v59' is possibly undefined
// 1406FE64E: variable 'v60' is possibly undefined
// 1406FE64E: variable 'v61' is possibly undefined
// 1406FE66A: variable 'v62' is possibly undefined
// 1406FE728: variable 'v68' is possibly undefined
// 140B418A8: using guessed type wchar_t aNcurrent_3[9];
// 140B418C0: using guessed type wchar_t aNlevel_15[7];
// 140B418F0: using guessed type wchar_t aBignoresbonuse[16];
// 140B41910: using guessed type wchar_t aBislabel[9];
// 140B41928: using guessed type wchar_t aNparentorder[13];
// 140B41948: using guessed type wchar_t aStrparent[10];
// 140B41960: using guessed type wchar_t aNorder_1[7];
// 140B41970: using guessed type wchar_t aStrname_88[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65998: using guessed type __int64 qword_140C65998;
// 1406FE110: using guessed type char var_70[8];

