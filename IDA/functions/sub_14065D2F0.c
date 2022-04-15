#include "../winhttp.h"

//----- (000000014065D2F0) ----------------------------------------------------
__int64 __fastcall sub_14065D2F0(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	int v6; // r15d
	int* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	_DWORD* v10; // rax
	unsigned int v11; // eax
	unsigned int v12; // r13d
	int v13; // eax
	__int64 v14; // rdx
	unsigned __int64 v15; // rcx
	__int64 v16; // rsi
	__int64 v17; // rdi
	__int64 v18; // rax
	int v19; // r12d
	unsigned int v20; // edi
	unsigned int v21; // r14d
	unsigned int* v22; // rax
	unsigned int* v23; // rsi
	unsigned int v24; // eax
	unsigned int v25; // r15d
	int* v26; // rax
	__int64 v27; // r13
	__int64 v28; // rax
	__int64 v29; // rcx
	__int16* v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rdi
	__int64 v33; // rax
	int v34; // eax
	__int64 v35; // rdi
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // r8
	__int64 v40; // rcx
	unsigned __int64 v41; // rax
	__int64 v42; // rdi
	__int64 v43; // rax
	int v44; // r12d
	__int64 v45; // rcx
	_QWORD* v46; // rax
	__int64 v47; // rdx
	int v48; // r10d
	_QWORD* v49; // rax
	__int64 v50; // rdx
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	__int64 v54; // rdx
	__int64 v55; // rax
	__int64 v56; // rcx
	__int16* v57; // rax
	__int64* v58; // rax
	__int64 v59; // r8
	__int64 v60; // rdx
	_QWORD* v61; // rax
	__int64(__fastcall * *v63)(); // [rsp+20h] [rbp-69h] BYREF
	int v64; // [rsp+28h] [rbp-61h]
	_QWORD* v65; // [rsp+30h] [rbp-59h]
	int v66; // [rsp+38h] [rbp-51h]
	__int64(__fastcall * *v67)(); // [rsp+40h] [rbp-49h] BYREF
	int v68; // [rsp+48h] [rbp-41h]
	_QWORD* v69; // [rsp+50h] [rbp-39h]
	int v70; // [rsp+58h] [rbp-31h]
	__int64(__fastcall * *v71)(); // [rsp+60h] [rbp-29h] BYREF
	int v72; // [rsp+68h] [rbp-21h]
	_QWORD* v73; // [rsp+70h] [rbp-19h]
	int v74; // [rsp+78h] [rbp-11h]
	__int64(__fastcall * *v75)(); // [rsp+80h] [rbp-9h] BYREF
	int v76; // [rsp+88h] [rbp-1h]
	_QWORD* v77; // [rsp+90h] [rbp+7h]
	int v78; // [rsp+98h] [rbp+Fh]
	unsigned int v79; // [rsp+F0h] [rbp+67h]
	int v80; // [rsp+100h] [rbp+77h]
	unsigned int v81; // [rsp+108h] [rbp+7Fh]

	v73 = a1;
	v2 = a1[4];
	v3 = *(_QWORD*)(v2 + 112);
	v74 = 1;
	v71 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v72 = v6;
	v7 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v7
		|| (v8 = sub_1403D90D0(qword_140C65898, *v7)) == 0
		|| (v9 = qword_140C65898, v8 != *(_QWORD*)(qword_140C65898 + 120)))
	{
		v61 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v60 = a1[2];
		*(_QWORD*)v60 = *v61;
		*(_DWORD*)(v60 + 8) = *((_DWORD*)v61 + 2);
		a1[2] += 16i64;
		goto LABEL_53;
	}
	v10 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v10 >= a1[2] || v10 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
		v12 = 1;
	}
	else
	{
		v11 = sub_140056D60(a1, 2u);
		v9 = qword_140C65898;
		v12 = v11;
	}
	v79 = v12;
	v13 = sub_1403ABFE0(v9 + 7160, 25, 0);
	v14 = a1[4];
	v67 = off_140B569F0;
	v15 = *(_QWORD*)(v14 + 112);
	v80 = v13;
	v16 = (__int64)a1;
	v69 = a1;
	v70 = 1;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0((__int64)a1);
	v17 = a1[2];
	v18 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v17 + 8) = 5;
	*(_QWORD*)v17 = v18;
	a1[2] += 16i64;
	v19 = sub_1400578C0((__int64)a1);
	v68 = v19;
	v20 = 0;
	v21 = 0;
	v81 = sub_140244EF0();
	if (v81)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63F58 && (int)sub_140244CE0() >= 0)
			{
				v22 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63978 + 32i64))(
					qword_140C63978,
					v21);
				goto LABEL_19;
			}
		LABEL_41:
			v12 = v79;
			if (++v21 >= v81)
			{
				v16 = (__int64)v69;
				v6 = v72;
				goto LABEL_43;
			}
		}
		v22 = (unsigned int*)qword_140C63848(off_140A6DCB0, v21, qword_140C63858);
	LABEL_19:
		v23 = v22;
		if (v22)
		{
			v24 = *v22;
			v25 = v24 >= 0x200 ? 0 : *(unsigned __int16*)(qword_140C65898 + 2i64 * v24 + 328);
			if (v25 >= v12)
			{
				v26 = sub_1400B5DF0(qword_140C658F0, v23[1], 0i64);
				v27 = (__int64)v26;
				if (v26)
				{
					if (v26[114])
					{
						if (v20 && v20 != v23[4])
						{
							v28 = sub_140245380(v20);
							if (v28)
							{
								v30 = sub_14034BDD0(v29, *(_DWORD*)(v28 + 4));
								sub_1400FB2A0((__int64)&v71, (__int64)v30, v19);
							}
							v31 = a1[4];
							v65 = a1;
							v63 = off_140B569F0;
							v66 = 1;
							v64 = -2;
							if (*(_QWORD*)(v31 + 120) >= *(_QWORD*)(v31 + 112))
								sub_14005E2C0((__int64)a1);
							v32 = a1[2];
							v33 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v32 + 8) = 5;
							*(_QWORD*)v32 = v33;
							a1[2] += 16i64;
							v34 = sub_1400578C0((__int64)a1);
							v35 = (__int64)v65;
							v64 = v34;
							v70 = 1;
							v69 = v65;
							if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v63[1])(&v63))
							{
								v70 = v66;
								sub_1400579E0(v35, v36, v19);
								v37 = sub_14005C3C0(*(_QWORD*)(v65[4] + 160i64), v64);
								v39 = *(_QWORD*)(v38 + 16);
								*(_QWORD*)v39 = *v37;
								*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
								*(_QWORD*)(v38 + 16) += 16i64;
								v68 = sub_1400578C0(v35);
							}
							v63 = off_140B56A08;
							if (v65)
								sub_1400579E0((__int64)v65, v36, v64);
						}
						v40 = a1[4];
						v77 = a1;
						v75 = off_140B569F0;
						v41 = *(_QWORD*)(v40 + 112);
						v78 = 1;
						if (*(_QWORD*)(v40 + 120) >= v41)
							sub_14005E2C0((__int64)a1);
						v42 = a1[2];
						v43 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v42 + 8) = 5;
						*(_QWORD*)v42 = v43;
						a1[2] += 16i64;
						v44 = sub_1400578C0((__int64)a1);
						v45 = *(_QWORD*)(a1[4] + 160i64);
						v76 = v44;
						v46 = sub_14005C3C0(v45, v44);
						v47 = a1[2];
						*(_QWORD*)v47 = *v46;
						*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v47, L"idLocation", v48);
						a1[2] -= 16i64;
						if ((unsigned int)sub_140415C70(a1, v27))
						{
							sub_1400FB540((__int64)&v75);
							a1[2] -= 16i64;
						}
						v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v44);
						v50 = a1[2];
						*(_QWORD*)v50 = *v49;
						*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v50, L"nCount", v25);
						a1[2] -= 16i64;
						v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v44);
						*(_QWORD*)v52 = *v51;
						*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v53, L"nMaxStackCount", v80);
						a1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v67);
						v20 = v23[4];
						sub_1400579E0((__int64)a1, v54, v44);
						v19 = v68;
					}
				}
			}
		}
		goto LABEL_41;
	}
LABEL_43:
	if (qword_140C63840)
	{
		v55 = qword_140C63840(off_140A6DCE8, v20, qword_140C63858);
		goto LABEL_48;
	}
	if (!dword_140C63E04 && (int)sub_140245120() >= 0)
	{
		v55 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C649F0 + 24i64))(qword_140C649F0, v20);
	LABEL_48:
		if (v55)
		{
			v57 = sub_14034BDD0(v56, *(_DWORD*)(v55 + 4));
			sub_1400FB2A0((__int64)&v71, (__int64)v57, v19);
		}
	}
	v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
	v59 = a1[2];
	v60 = *v58;
	*(_QWORD*)v59 = *v58;
	*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
	a1[2] += 16i64;
	if (v16)
		sub_1400579E0(v16, v60, v19);
LABEL_53:
	sub_1400579E0((__int64)a1, v60, v6);
	return 1i64;
}
// 14065D56F: variable 'v29' is possibly undefined
// 14065D60B: variable 'v36' is possibly undefined
// 14065D627: variable 'v38' is possibly undefined
// 14065D70B: variable 'v48' is possibly undefined
// 14065D79D: variable 'v52' is possibly undefined
// 14065D7AF: variable 'v53' is possibly undefined
// 14065D7CE: variable 'v54' is possibly undefined
// 14065D849: variable 'v56' is possibly undefined
// 14065D8C6: variable 'v60' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DCB0: using guessed type wchar_t *off_140A6DCB0[2];
// 140A6DCE8: using guessed type wchar_t *off_140A6DCE8[2];
// 140B2D5E0: using guessed type wchar_t aNcount_34[7];
// 140B2D5F0: using guessed type wchar_t aNmaxstackcount[15];
// 140B2D610: using guessed type wchar_t aIdlocation[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63978: using guessed type __int64 qword_140C63978;
// 140C63E04: using guessed type int dword_140C63E04;
// 140C63F58: using guessed type int dword_140C63F58;
// 140C649F0: using guessed type __int64 qword_140C649F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

