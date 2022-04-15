#include "../winhttp.h"

//----- (00000001406A64B0) ----------------------------------------------------
__int64 __fastcall sub_1406A64B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r15
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	__int64 v7; // rsi
	__int64 v8; // r14
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	unsigned int v13; // r13d
	__int64 v14; // r14
	__int64 v15; // r12
	__int64 v16; // rcx
	__int64 v17; // rsi
	unsigned __int64 v18; // rax
	__int64 v19; // rdi
	__int64 v20; // rax
	int v21; // eax
	unsigned int v22; // ecx
	int v23; // edi
	__int64 v24; // rdx
	__int64 v25; // rcx
	__int64 v26; // r14
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int16* v29; // r10
	_QWORD* v30; // rax
	__int64 v31; // r11
	__int64 v32; // rdx
	int v33; // r10d
	_QWORD* v34; // rax
	__int64 v35; // r11
	__int64 v36; // rdx
	int v37; // r10d
	_QWORD* v38; // rax
	__int64 v39; // r11
	__int64 v40; // rdx
	int v41; // r10d
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	int v45; // r11d
	_QWORD* v46; // rax
	__int64 v47; // r11
	__int64 v48; // rdx
	int v49; // r10d
	int v50; // ecx
	__int64 v51; // rcx
	unsigned __int64 v52; // rax
	__int64 v53; // rdi
	__int64 v54; // rax
	unsigned int* v55; // rsi
	__int64 v56; // r15
	int* v57; // r14
	__int64 v58; // rdx
	unsigned __int64 v59; // rcx
	__int64 v60; // rdi
	__int64 v61; // rax
	_QWORD* v62; // rax
	__int64 v63; // rdx
	int v64; // r10d
	_QWORD* v65; // rax
	__int64 v66; // r10
	__int64 v67; // rdx
	int v68; // r11d
	__int64 v69; // rdx
	int v70; // edi
	__int64 v71; // rdx
	_QWORD* v72; // rax
	__int64 v73; // r11
	__int64 v74; // rdx
	int v75; // r10d
	__int64 v76; // rdx
	__int64* v77; // rax
	__int64 v78; // r10
	int v79; // r11d
	__int64 v80; // r9
	__int64 v81; // rdx
	__int64(__fastcall * *v82)(); // [rsp+20h] [rbp-69h] BYREF
	int v83; // [rsp+28h] [rbp-61h]
	_QWORD* v84; // [rsp+30h] [rbp-59h]
	int v85; // [rsp+38h] [rbp-51h]
	__int64(__fastcall * *v86)(); // [rsp+40h] [rbp-49h] BYREF
	int v87; // [rsp+48h] [rbp-41h]
	_QWORD* v88; // [rsp+50h] [rbp-39h]
	int v89; // [rsp+58h] [rbp-31h]
	__int64 v90; // [rsp+60h] [rbp-29h]
	__int64(__fastcall * *v91)(); // [rsp+68h] [rbp-21h] BYREF
	int v92; // [rsp+70h] [rbp-19h]
	_QWORD* v93; // [rsp+78h] [rbp-11h]
	int v94; // [rsp+80h] [rbp-9h]
	__int64(__fastcall * *v95)(); // [rsp+88h] [rbp-1h] BYREF
	int v96; // [rsp+90h] [rbp+7h]
	_QWORD* v97; // [rsp+98h] [rbp+Fh]
	int v98; // [rsp+A0h] [rbp+17h]
	unsigned int v99; // [rsp+F8h] [rbp+6Fh]
	__int64 v100; // [rsp+108h] [rbp+7Fh]

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
	if (!v5)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v6 = **(unsigned int**)(v3 + 8);
	if (v6 >= (__int64)(*(_QWORD*)(v5 + 256) - *(_QWORD*)(v5 + 248)) >> 3
		|| (v7 = *(_QWORD*)(*(_QWORD*)(v5 + 248) + 8 * v6)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v8 = sub_140206C60(*(_DWORD*)(v7 + 4));
	v90 = v8;
	if (!v8)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v9 = a1[4];
	v82 = off_140B569F0;
	v10 = *(_QWORD*)(v9 + 112);
	v84 = a1;
	v85 = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0((__int64)a1);
	v11 = a1[2];
	v12 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	a1[2] += 16i64;
	v13 = 0;
	v83 = sub_1400578C0((__int64)a1);
	v14 = v8 - v7 + 36;
	v99 = 0;
	v15 = v7 + 36;
	v100 = v14;
	while (!*(_DWORD*)(v14 + v15))
	{
	LABEL_34:
		++v13;
		v15 += 4i64;
		v99 = v13;
		if (v13 >= 5)
		{
			v77 = sub_14005C3C0(*(_QWORD*)(v84[4] + 160i64), v83);
			v80 = *(_QWORD*)(v78 + 16);
			v81 = *v77;
			*(_QWORD*)v80 = *v77;
			*(_DWORD*)(v80 + 8) = *((_DWORD*)v77 + 2);
			*(_QWORD*)(v78 + 16) += 16i64;
			goto LABEL_36;
		}
	}
	v16 = a1[4];
	v17 = (__int64)a1;
	v86 = off_140B569F0;
	v18 = *(_QWORD*)(v16 + 112);
	v88 = a1;
	v89 = 1;
	if (*(_QWORD*)(v16 + 120) >= v18)
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	a1[2] += 16i64;
	v21 = sub_1400578C0((__int64)a1);
	v22 = *(_DWORD*)(v14 + v15);
	v23 = v21;
	v87 = v21;
	v26 = sub_140204EA0(v22);
	if (v26)
	{
		sub_14034BDD0(v25, *(_DWORD*)(v90 + 4));
		v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		v28 = a1[2];
		*(_QWORD*)v28 = *v27;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v28, L"strName", v29);
		a1[2] -= 16i64;
		v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		*(_QWORD*)v31 = *v30;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v32, L"eType", v33);
		a1[2] -= 16i64;
		v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		*(_QWORD*)v35 = *v34;
		*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v36, L"nPlotInfoId", v37);
		a1[2] -= 16i64;
		v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		*(_QWORD*)v39 = *v38;
		*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v40, L"nRequiredPoints", v41);
		a1[2] -= 16i64;
		v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		*(_QWORD*)v43 = *v42;
		*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v44, L"nCurrentPoints", v45);
		a1[2] -= 16i64;
		v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		*(_QWORD*)v47 = *v46;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v48, L"nRequiredCost", v49);
		a1[2] -= 16i64;
		v50 = *(_DWORD*)(v26 + 4);
		if (v50 == 2)
		{
			v51 = a1[4];
			v93 = a1;
			v91 = off_140B569F0;
			v52 = *(_QWORD*)(v51 + 112);
			v94 = 1;
			if (*(_QWORD*)(v51 + 120) >= v52)
				sub_14005E2C0((__int64)a1);
			v53 = a1[2];
			v54 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v53 + 8) = 5;
			*(_QWORD*)v53 = v54;
			a1[2] += 16i64;
			v92 = sub_1400578C0((__int64)a1);
			v55 = (unsigned int*)(v26 + 12);
			v56 = 5i64;
			do
			{
				v57 = sub_1400B5DF0(qword_140C658F0, *v55, 0i64);
				if (v57)
				{
					v58 = a1[4];
					v95 = off_140B569F0;
					v97 = a1;
					v59 = *(_QWORD*)(v58 + 112);
					v98 = 1;
					if (*(_QWORD*)(v58 + 120) >= v59)
						sub_14005E2C0((__int64)a1);
					v60 = a1[2];
					v61 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v60 + 8) = 5;
					*(_QWORD*)v60 = v61;
					a1[2] += 16i64;
					LODWORD(v60) = sub_1400578C0((__int64)a1);
					v96 = v60;
					sub_140415C70(a1, (__int64)v57);
					sub_1400FB540((__int64)&v95);
					a1[2] -= 16i64;
					sub_1406A4EA0(*v55);
					v62 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v60);
					v63 = a1[2];
					*(_QWORD*)v63 = *v62;
					*(_DWORD*)(v63 + 8) = *((_DWORD*)v62 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v63, L"nAvailableCount", v64);
					a1[2] -= 16i64;
					v65 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v60);
					*(_QWORD*)v66 = *v65;
					*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v67, L"nPointValue", v68);
					a1[2] -= 16i64;
					sub_1400FB1D0((__int64)&v91);
					sub_1400579E0((__int64)a1, v69, v60);
				}
				++v55;
				--v56;
			} while (v56);
			v70 = v92;
			v13 = v99;
			sub_1400FB1D0((__int64)&v86);
			if (v93)
				sub_1400579E0((__int64)v93, v71, v70);
			v17 = (__int64)v88;
			v23 = v87;
		}
		else if (((v50 - 1) & 0xFFFFFFFC) == 0)
		{
			v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v73 = *v72;
			*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v74, L"nPointValue", v75);
			a1[2] -= 16i64;
		}
		sub_1400FB1D0((__int64)&v82);
		if (v17)
			sub_1400579E0(v17, v76, v23);
		v14 = v100;
		goto LABEL_34;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v24, v23);
	v78 = (__int64)v84;
	v79 = v83;
LABEL_36:
	if (v78)
		sub_1400579E0(v78, v81, v79);
	return 1i64;
}
// 1406A6A8A: conditional instruction was optimized away because ecx.4!=2
// 1406A66D3: variable 'v25' is possibly undefined
// 1406A670F: variable 'v29' is possibly undefined
// 1406A6740: variable 'v31' is possibly undefined
// 1406A6752: variable 'v32' is possibly undefined
// 1406A6752: variable 'v33' is possibly undefined
// 1406A6787: variable 'v35' is possibly undefined
// 1406A6799: variable 'v36' is possibly undefined
// 1406A6799: variable 'v37' is possibly undefined
// 1406A67CA: variable 'v39' is possibly undefined
// 1406A67DC: variable 'v40' is possibly undefined
// 1406A67DC: variable 'v41' is possibly undefined
// 1406A680D: variable 'v43' is possibly undefined
// 1406A681F: variable 'v44' is possibly undefined
// 1406A681F: variable 'v45' is possibly undefined
// 1406A6873: variable 'v47' is possibly undefined
// 1406A6885: variable 'v48' is possibly undefined
// 1406A6885: variable 'v49' is possibly undefined
// 1406A69DD: variable 'v64' is possibly undefined
// 1406A6A0E: variable 'v66' is possibly undefined
// 1406A6A20: variable 'v67' is possibly undefined
// 1406A6A20: variable 'v68' is possibly undefined
// 1406A6A3B: variable 'v69' is possibly undefined
// 1406A6A6B: variable 'v71' is possibly undefined
// 1406A6AAF: variable 'v73' is possibly undefined
// 1406A6AC1: variable 'v74' is possibly undefined
// 1406A6AC1: variable 'v75' is possibly undefined
// 1406A6AE1: variable 'v76' is possibly undefined
// 1406A6B1A: variable 'v78' is possibly undefined
// 1406A6B57: variable 'v81' is possibly undefined
// 1406A6B57: variable 'v79' is possibly undefined
// 1406A6B77: variable 'v24' is possibly undefined
// 140B359C0: using guessed type wchar_t aNplotinfoid[12];
// 140B359D8: using guessed type wchar_t aNrequiredpoint[16];
// 140B359F8: using guessed type wchar_t aStrname_75[8];
// 140B35A08: using guessed type wchar_t aEtype_25[6];
// 140B35BD0: using guessed type wchar_t aNpointvalue[12];
// 140B35BE8: using guessed type wchar_t aNpointvalue_0[12];
// 140B35C18: using guessed type wchar_t aNavailablecoun_0[16];
// 140B35C38: using guessed type wchar_t aNcurrentpoints[15];
// 140B35C58: using guessed type wchar_t aNrequiredcost[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659F0: using guessed type __int64 qword_140C659F0;

