#include "../winhttp.h"

//----- (00000001404EBE50) ----------------------------------------------------
__int64 __fastcall sub_1404EBE50(_QWORD* a1)
{
	unsigned __int64 v1; // rdi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r15
	unsigned int v9; // r14d
	__int64(__fastcall * *v10)(); // rdx
	_DWORD* v11; // rax
	_QWORD* v12; // r8
	_DWORD* v13; // rcx
	unsigned __int64 v14; // rdx
	int v15; // eax
	unsigned __int64 v16; // rbx
	_QWORD* v17; // rax
	__int64 v18; // r11
	__int64 v19; // rcx
	_QWORD* v20; // rsi
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	__int64 v23; // rdx
	void** v24; // rax
	int v25; // ecx
	int v26; // ecx
	_QWORD* v27; // rax
	__int64 v28; // r11
	__int64 v29; // rcx
	_QWORD* v30; // rsi
	unsigned __int64* v31; // rdx
	__int64 v32; // rdx
	_DWORD* v33; // rax
	int v34; // edx
	_QWORD* v35; // rax
	__int64 v36; // r11
	__int64 v37; // rcx
	_QWORD* v38; // rsi
	unsigned __int64* v39; // rdx
	__int64 v40; // rdx
	void** v41; // rax
	int v42; // ecx
	int v43; // ecx
	int v44; // eax
	__int64 v45; // rcx
	int v46; // esi
	__int64 v47; // rbx
	__int64 v48; // rax
	int v49; // r12d
	unsigned __int64 v50; // r8
	unsigned __int64 v51; // rdx
	__int64 v52; // r10
	unsigned __int64 v53; // rcx
	unsigned int* v54; // rax
	__int64 v56; // rcx
	unsigned __int64 v57; // rsi
	_QWORD* v58; // r14
	unsigned __int64 v59; // rbx
	unsigned __int8 v60; // r15
	__int64 v61; // rcx
	__int64 v62; // rdx
	__int64 v63; // r8
	__int64 v64; // rcx
	_QWORD* v65; // rax
	__int64 v66; // rcx
	_QWORD* v67; // [rsp+20h] [rbp-39h] BYREF
	unsigned __int64 v68; // [rsp+28h] [rbp-31h]
	__int64(__fastcall * *v69)(); // [rsp+30h] [rbp-29h] BYREF
	int v70; // [rsp+38h] [rbp-21h]
	_QWORD* v71; // [rsp+40h] [rbp-19h]
	int v72; // [rsp+48h] [rbp-11h]
	_QWORD* v73; // [rsp+50h] [rbp-9h] BYREF
	__int64(__fastcall * *v74)(); // [rsp+58h] [rbp-1h] BYREF
	__int64 v75; // [rsp+60h] [rbp+7h]
	_QWORD* v76; // [rsp+68h] [rbp+Fh]
	int v77; // [rsp+70h] [rbp+17h]
	int v78[3]; // [rsp+78h] [rbp+1Fh] BYREF
	int v79; // [rsp+84h] [rbp+2Bh]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v71 = a1;
	v72 = 1;
	v78[0] = sub_1400F26A0(v7 + 384, 1);
	v9 = v78[0];
	v69 = off_140B569F0;
	v70 = -2;
	v10 = off_140B569F0;
	v11 = (_DWORD*)(a1[3] + 16i64);
	v73 = sub_140450AD0;
	if ((unsigned __int64)v11 < a1[2] && v11 != dword_140A12138 && v11[2] == 5)
	{
		sub_1400579E0((__int64)a1, (__int64)off_140B569F0, -2);
		v12 = v71;
		v13 = dword_140A12138;
		v14 = v71[2];
		if (v71[3] + 16i64 < v14)
			v13 = (_DWORD*)(v71[3] + 16i64);
		*(_QWORD*)v14 = *(_QWORD*)v13;
		*(_DWORD*)(v14 + 8) = v13[2];
		v12[2] += 16i64;
		v15 = sub_1400578C0((__int64)v71);
		v10 = v69;
		v70 = v15;
	}
	v16 = -1i64;
	if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v10[1])(&v69))
	{
	LABEL_46:
		if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v69[1])(&v69))
			goto LABEL_63;
		v35 = sub_14005C3C0(*(_QWORD*)(v71[4] + 160i64), v70);
		v37 = *(_QWORD*)(v36 + 16);
		*(_QWORD*)v37 = *v35;
		*(_DWORD*)(v37 + 8) = *((_DWORD*)v35 + 2);
		*(_QWORD*)(v36 + 16) += 16i64;
		v38 = v71;
		v39 = (unsigned __int64*)sub_14018F0E0(&v74, L"eDisplayFlag")[1];
		if (v39)
		{
			do
				++v16;
			while (*((_BYTE*)v39 + v16));
			sub_140058710((__int64)v38, v39, v16);
		}
		else
		{
			*(_DWORD*)(v38[2] + 8i64) = 0;
			v38[2] += 16i64;
		}
		if (v75)
			sub_14018B900(v75, 0);
		sub_14005E8E0((__int64)v71, v71[2] - 32i64, (int*)(v71[2] - 16i64), v71[2] - 16i64);
		v40 = v71[2];
		v41 = (void**)(v40 - 16);
		if ((_DWORD*)(v40 - 16) == dword_140A12138 || *((_DWORD*)v41 + 2) != 3)
		{
			v71[2] = v40 - 32;
			goto LABEL_63;
		}
		v42 = *((_DWORD*)v41 + 2);
		if (v42 != 3)
		{
			if (v42 != 4 || !sub_14005AC80((char*)*v41 + 32, (unsigned __int64*)&v73))
			{
				v43 = 0;
				goto LABEL_60;
			}
			LODWORD(v68) = 3;
			v41 = (void**)&v67;
			v67 = v73;
		}
		v43 = (int)*(double*)v41;
	LABEL_60:
		v71[2] -= 32i64;
		v78[1] = v43;
		v73 = sub_140450BC0;
		goto LABEL_63;
	}
	v17 = sub_14005C3C0(*(_QWORD*)(v71[4] + 160i64), v70);
	v19 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v19 = *v17;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	v20 = v71;
	v21 = (unsigned __int64*)sub_14018F0E0(&v74, L"eCurrency")[1];
	if (v21)
	{
		v22 = -1i64;
		do
			++v22;
		while (*((_BYTE*)v21 + v22));
		sub_140058710((__int64)v20, v21, v22);
	}
	else
	{
		*(_DWORD*)(v20[2] + 8i64) = 0;
		v20[2] += 16i64;
	}
	if (v75)
		sub_14018B900(v75, 0);
	sub_14005E8E0((__int64)v71, v71[2] - 32i64, (int*)(v71[2] - 16i64), v71[2] - 16i64);
	v23 = v71[2];
	v24 = (void**)(v23 - 16);
	if ((_DWORD*)(v23 - 16) == dword_140A12138 || *((_DWORD*)v24 + 2) != 3)
	{
		v71[2] = v23 - 32;
		goto LABEL_46;
	}
	v25 = *((_DWORD*)v24 + 2);
	if (v25 != 3)
	{
		if (v25 != 4 || !sub_14005AC80((char*)*v24 + 32, (unsigned __int64*)&v73))
		{
			v26 = 0;
			goto LABEL_28;
		}
		LODWORD(v68) = 3;
		v24 = (void**)&v67;
		v67 = v73;
	}
	v26 = (int)*(double*)v24;
LABEL_28:
	v71[2] -= 32i64;
	v78[2] = v26;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v69[1])(&v69))
	{
		v27 = sub_14005C3C0(*(_QWORD*)(v71[4] + 160i64), v70);
		v29 = *(_QWORD*)(v28 + 16);
		*(_QWORD*)v29 = *v27;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
		*(_QWORD*)(v28 + 16) += 16i64;
		v30 = v71;
		v31 = (unsigned __int64*)sub_14018F0E0(&v74, L"bIncreasingOrder")[1];
		if (v31)
		{
			do
				++v16;
			while (*((_BYTE*)v31 + v16));
			sub_140058710((__int64)v30, v31, v16);
		}
		else
		{
			*(_DWORD*)(v30[2] + 8i64) = 0;
			v30[2] += 16i64;
		}
		if (v75)
			sub_14018B900(v75, 0);
		sub_14005E8E0((__int64)v71, v71[2] - 32i64, (int*)(v71[2] - 16i64), v71[2] - 16i64);
		v32 = v71[2];
		v33 = (_DWORD*)(v32 - 16);
		if ((_DWORD*)(v32 - 16) != dword_140A12138 && v33[2] == 1)
		{
			v34 = v33[2];
			if (v34 && (v34 != 1 || *v33))
			{
				v79 = 1;
				v71[2] -= 32i64;
				v73 = sub_140450CE0;
			}
			else
			{
				v79 = 0;
				v71[2] -= 32i64;
				v73 = sub_140450CE0;
			}
			goto LABEL_63;
		}
		v71[2] = v32 - 32;
	}
	v73 = sub_140450CE0;
LABEL_63:
	v44 = sub_1400F26A0(v8, 3);
	v45 = a1[4];
	v76 = a1;
	v46 = v44;
	v77 = 1;
	v74 = off_140B569F0;
	if (*(_QWORD*)(v45 + 120) >= *(_QWORD*)(v45 + 112))
		sub_14005E2C0((__int64)a1);
	v47 = a1[2];
	v48 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v47 + 8) = 5;
	*(_QWORD*)v47 = v48;
	a1[2] += 16i64;
	v49 = sub_1400578C0((__int64)a1);
	LODWORD(v75) = v49;
	v50 = *(_QWORD*)(qword_140C65908 + 80);
	v68 = 0i64;
	v67 = 0i64;
	v51 = 0i64;
	if (!v50)
		goto LABEL_72;
	v52 = *(_QWORD*)(qword_140C65908 + 72);
	while (1)
	{
		v53 = v51 + ((v50 - v51) >> 1);
		v54 = *(unsigned int**)(v52 + 8 * v53);
		if (v9 < *v54)
		{
			v50 = v51 + ((v50 - v51) >> 1);
			goto LABEL_71;
		}
		if (v9 <= *v54)
			break;
		v51 = v53 + 1;
	LABEL_71:
		if (v51 >= v50)
			goto LABEL_72;
	}
	v51 = *(_QWORD*)(v52 + 8 * v53);
	if (!v54)
	{
	LABEL_72:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_73;
	}
	sub_1403D86E0((__int64*)&v67, (__int64)(v54 + 8));
	if (v46 && (v46 & 0xF) != 15)
		sub_140450000(v56, (__int64)&v67, v46);
	v57 = v68;
	v58 = v67;
	if (*(_DWORD*)(qword_140C635F0 + 5896) == 1)
	{
		v59 = 0i64;
		v60 = *(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5584) + 520i64);
		if (v68)
		{
			do
			{
				v61 = v58[v59];
				v62 = 0i64;
				v63 = *(_QWORD*)(v61 + 72);
				if (!v63)
					goto LABEL_90;
				v64 = *(_QWORD*)(v61 + 64);
				do
				{
					if (*(_BYTE*)(*(_QWORD*)v64 + 64i64) <= v60)
						++v62;
					v64 += 8i64;
					--v63;
				} while (v63);
				if (!v62)
				{
				LABEL_90:
					sub_140007270((__int64)&v67, v59);
					v57 = v68;
					v58 = v67;
					--v59;
				}
				++v59;
			} while (v59 < v57);
		}
	}
	if (v57 > 1)
	{
		sub_1404F4660((__int64*)&v67, (__int64)v73, (__int64)v78);
		v57 = v68;
		v58 = v67;
	}
	if (v57)
	{
		do
		{
			sub_1400FA9E0((__int64)&v74);
			++v1;
		} while (v1 < v57);
		a1 = v76;
		v49 = v75;
	}
	v65 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v49);
	v66 = a1[2];
	*(_QWORD*)v66 = *v65;
	*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
	a1[2] += 16i64;
	if (v58)
		(*(void(__fastcall**)(_QWORD*))(*(v58 - 2) + 8i64))(v58 - 2);
LABEL_73:
	if (a1)
		sub_1400579E0((__int64)a1, v51, v49);
	v69 = off_140B56A08;
	if (v71)
		sub_1400579E0((__int64)v71, v51, v70);
	return 1i64;
}
// 1404EBF9C: variable 'v18' is possibly undefined
// 1404EC0C0: variable 'v28' is possibly undefined
// 1404EC1F1: variable 'v36' is possibly undefined
// 1404EC3C3: variable 'v51' is possibly undefined
// 1404EC440: variable 'v56' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0D398: using guessed type wchar_t aEcurrency[10];
// 140B0D3B0: using guessed type wchar_t aBincreasingord[17];
// 140B0D630: using guessed type wchar_t aEdisplayflag[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

