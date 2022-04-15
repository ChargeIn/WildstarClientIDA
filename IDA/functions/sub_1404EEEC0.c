#include "../winhttp.h"

//----- (00000001404EEEC0) ----------------------------------------------------
__int64 __fastcall sub_1404EEEC0(_QWORD* a1)
{
	unsigned __int16* v1; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	_DWORD* v9; // r14
	__int64 result; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rcx
	int v17; // ebp
	_QWORD* v18; // rax
	__int64 v19; // rdx
	int v20; // r10d
	_QWORD* v21; // rax
	__int64 v22; // r11
	__int64 v23; // rdx
	int v24; // r10d
	_QWORD* v25; // rax
	__int64 v26; // rdx
	int v27; // r10d
	__int64 v28; // r11
	unsigned __int16* v29; // r8
	__int64 v30; // rax
	unsigned __int64 v31; // rcx
	unsigned int v32; // r13d
	__int64 v33; // rax
	__int64 v34; // rdx
	__int64 v35; // rcx
	unsigned int v36; // edx
	int v37; // edi
	int v38; // r12d
	__int64 v39; // rax
	__int64 v40; // r8
	_DWORD* v41; // rcx
	__int64 v42; // rax
	_QWORD* v43; // rax
	__int64 v44; // r8
	__int64 v45; // rdx
	int v46; // r10d
	__int64 v47; // rcx
	unsigned int v48; // r15d
	__int64 v49; // rax
	__int64 v50; // rax
	int v51; // r15d
	_QWORD* v52; // rax
	__int64 v53; // rdx
	_QWORD* v54; // rax
	__int64 v55; // r10
	unsigned __int64* v56; // rdx
	unsigned __int64 v57; // rdi
	unsigned __int64 v58; // r8
	_DWORD* v59; // rcx
	__int64* v60; // rax
	unsigned int v61; // r12d
	int v62; // r15d
	_QWORD* v63; // rax
	__int64 v64; // rdx
	unsigned __int64* v65; // rdx
	_DWORD* v66; // rcx
	__int64* v67; // rax
	_QWORD* v68; // rax
	__int64 v69; // rdx
	_QWORD* v70; // rax
	__int64 v71; // r10
	__int64 v72; // rdx
	int v73; // r11d
	__int64 v74; // rcx
	int v75; // edx
	_QWORD* v76; // rax
	__int64 v77; // rdx
	unsigned __int16* v78; // r10
	_QWORD* v79; // rax
	__int64 v80; // r10
	__int64(__fastcall * *v81)(); // [rsp+20h] [rbp-68h] BYREF
	__int64 v82; // [rsp+28h] [rbp-60h]
	__int64(__fastcall * *v83)(); // [rsp+40h] [rbp-48h] BYREF
	int v84; // [rsp+48h] [rbp-40h]
	_QWORD* v85; // [rsp+50h] [rbp-38h]
	int v86; // [rsp+58h] [rbp-30h]

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
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = (_DWORD*)sub_14023F600(v8);
	if (!v9)
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return result;
	}
	v11 = a1[4];
	v83 = off_140B569F0;
	v12 = *(_QWORD*)(v11 + 112);
	v85 = a1;
	v86 = 1;
	if (*(_QWORD*)(v11 + 120) >= v12)
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	v15 = sub_1400578C0((__int64)a1);
	v16 = *(_QWORD*)(a1[4] + 160i64);
	v17 = v15;
	v84 = v15;
	v18 = sub_14005C3C0(v16, v15);
	v19 = a1[2];
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v19, L"nId", v20);
	a1[2] -= 16i64;
	v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
	*(_QWORD*)v22 = *v21;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v23, L"eDisplayType", v24);
	a1[2] -= 16i64;
	if (v9[1] == 1)
	{
	LABEL_15:
		v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v29 = L"idCreature";
	LABEL_16:
		*(_QWORD*)v28 = *v25;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v25 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v26, v29, v27);
	LABEL_17:
		a1[2] -= 16i64;
		goto LABEL_18;
	}
	if (v9[1] == 2)
	{
		v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v29 = L"idDecor";
		goto LABEL_16;
	}
	if (v9[1] != 4)
	{
		if (v9[1] != 5)
		{
		LABEL_18:
			v30 = sub_140218DC0(v9[3]);
			if (v30)
			{
				v31 = *(_QWORD*)(v30 + 8);
				if (v31 && v31 <= qword_140C3FE70)
					v1 = (unsigned __int16*)(v31 + qword_140C3FE68);
			}
			else
			{
				v1 = L"Paperdoll";
			}
			v68 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			v69 = a1[2];
			*(_QWORD*)v69 = *v68;
			*(_DWORD*)(v69 + 8) = *((_DWORD*)v68 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v69, L"strModelCamera", v1);
			a1[2] -= 16i64;
			v70 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			*(_QWORD*)v71 = *v70;
			*(_DWORD*)(v71 + 8) = *((_DWORD*)v70 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v72, L"eModelCamera", v73);
			a1[2] -= 16i64;
			v75 = v9[4];
			if (v75)
				sub_14034BDD0(v74, v75);
			v76 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			v77 = a1[2];
			*(_QWORD*)v77 = *v76;
			*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v77, L"strName", v78);
			a1[2] -= 16i64;
			v79 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			*(_QWORD*)v80 = *v79;
			*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
			goto LABEL_55;
		}
		goto LABEL_15;
	}
	v32 = sub_1407A1440((unsigned int)(v9[1] - 4), v9[2], 1u);
	v33 = sub_1403ACD90(qword_140C65B70, v32, *(_QWORD*)(qword_140C65898 + 120));
	v35 = v33;
	if (v33)
	{
		v36 = *(_DWORD*)(v33 + 40);
		v37 = 0;
		v38 = 0;
		v39 = 0i64;
		if (v36)
		{
			v40 = *(_QWORD*)(v35 + 48);
			v41 = (_DWORD*)(v40 + 16);
			while (*v41 != 36)
			{
				v39 = (unsigned int)(v39 + 1);
				v41 += 42;
				if ((unsigned int)v39 >= v36)
					goto LABEL_30;
			}
			v42 = 168 * v39;
			v37 = *(_DWORD*)(v42 + v40 + 64);
			v38 = *(_DWORD*)(v42 + v40 + 80);
		}
	LABEL_30:
		v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v44 = a1[2];
		*(_QWORD*)v44 = *v43;
		*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v45, L"idCreature", v46);
		v47 = qword_140C65918;
		a1[2] -= 16i64;
		v48 = 0;
		v49 = sub_1404835C0(v47, v37);
		if (v49)
			v48 = *(_DWORD*)(v49 + 372);
		v50 = sub_140248240(v48);
		if (!v50 || (v51 = 1, *(_DWORD*)(v50 + 4) != 4))
			v51 = 0;
		v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v53 = a1[2];
		*(_QWORD*)v53 = *v52;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v53, L"idPreviewHoverboardItemDisplay", v38);
		a1[2] -= 16i64;
		v54 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		*(_QWORD*)v55 = *v54;
		*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
		a1[2] += 16i64;
		v56 = (unsigned __int64*)sub_14018F0E0(&v81, L"bIsHoverboard")[1];
		v57 = -1i64;
		if (v56)
		{
			v58 = -1i64;
			do
				++v58;
			while (*((_BYTE*)v56 + v58));
			sub_140058710((__int64)a1, v56, v58);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v59 = (_DWORD*)a1[2];
		v59[2] = 1;
		*v59 = v51 != 0;
		a1[2] += 16i64;
		v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v61 = (v51 != 0) + 1;
		v62 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65A18 + 40i64))(
			qword_140C65A18,
			v61,
			v32);
		v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v64 = a1[2];
		*(_QWORD*)v64 = *v63;
		*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
		a1[2] += 16i64;
		v65 = (unsigned __int64*)sub_14018F0E0(&v81, L"bCanCustomize")[1];
		if (v65)
		{
			do
				++v57;
			while (*((_BYTE*)v65 + v57));
			sub_140058710((__int64)a1, v65, v57);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v66 = (_DWORD*)a1[2];
		v66[2] = 1;
		*v66 = v62 != 0;
		a1[2] += 16i64;
		v67 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v67, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v81 = off_140B6FE30;
		v82 = __PAIR64__(v32, v61);
		if (!(unsigned int)sub_1406B7660(a1, (__int64)&v81))
			goto LABEL_18;
		sub_1400FB540((__int64)&v83);
		goto LABEL_17;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
LABEL_55:
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v34, v17);
	return 1i64;
}
// 1404EEFF5: variable 'v20' is possibly undefined
// 1404EF026: variable 'v22' is possibly undefined
// 1404EF038: variable 'v23' is possibly undefined
// 1404EF038: variable 'v24' is possibly undefined
// 1404EF082: variable 'v28' is possibly undefined
// 1404EF094: variable 'v26' is possibly undefined
// 1404EF094: variable 'v27' is possibly undefined
// 1404EF1A6: variable 'v45' is possibly undefined
// 1404EF1A6: variable 'v46' is possibly undefined
// 1404EF247: variable 'v55' is possibly undefined
// 1404EF49B: variable 'v71' is possibly undefined
// 1404EF4AD: variable 'v72' is possibly undefined
// 1404EF4AD: variable 'v73' is possibly undefined
// 1404EF4BF: variable 'v74' is possibly undefined
// 1404EF504: variable 'v78' is possibly undefined
// 1404EF527: variable 'v80' is possibly undefined
// 1404EF53C: variable 'v34' is possibly undefined
// 140B0DAC0: using guessed type wchar_t aPaperdoll[10];
// 140B0DAD8: using guessed type wchar_t aStrmodelcamera[15];
// 140B0DAF8: using guessed type wchar_t aEmodelcamera[13];
// 140B0DB18: using guessed type wchar_t aIdpreviewhover[31];
// 140B0DB58: using guessed type wchar_t aBishoverboard[14];
// 140B0DB78: using guessed type wchar_t aBcancustomize[14];
// 140B0DBC8: using guessed type wchar_t aEdisplaytype[13];
// 140B0DBE8: using guessed type wchar_t aIdcreature[11];
// 140B0DC00: using guessed type wchar_t aIddecor[8];
// 140B0DC10: using guessed type wchar_t aIdcreature_0[11];
// 140B0DC80: using guessed type wchar_t aNid_15[4];
// 140B0DD98: using guessed type wchar_t aStrname_23[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65A18: using guessed type __int64 qword_140C65A18;
// 140C65B70: using guessed type __int64 qword_140C65B70;

