//----- (00000001404FC930) ----------------------------------------------------
__int64 __fastcall sub_1404FC930(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	__int64 v5; // rcx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rdx
	unsigned __int64 v12; // rcx
	__int64 v13; // r12
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // esi
	int v17; // ebx
	unsigned __int64 v18; // r15
	int v19; // r13d
	__int64 v20; // r12
	unsigned __int64 v21; // rcx
	unsigned int v22; // ebx
	__int64 v23; // rax
	__int64 v24; // r13
	float v25; // xmm7_4
	float v26; // xmm6_4
	float v27; // ecx
	unsigned int v28; // eax
	bool v29; // zf
	bool v30; // sf
	bool v31; // of
	int v32; // eax
	__int64 v33; // rbx
	__int64 v34; // rax
	int v35; // ebx
	_QWORD* v36; // rax
	__int64 v37; // rdx
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int16* v41; // r10
	_QWORD* v42; // rax
	__int64 v43; // r10
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	__int64 v46; // rax
	__int64* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // r10
	unsigned __int64* v50; // rdx
	unsigned __int64 v51; // r8
	__int64 v52; // rax
	__int64* v53; // rax
	_QWORD* v54; // rax
	__int64 v55; // r10
	unsigned __int64* v56; // rdx
	unsigned __int64 v57; // r8
	BOOL* v58; // rcx
	__int64* v59; // rax
	__int64 v60; // rdx
	int v61; // r14d
	_QWORD* v62; // rax
	__int64 v63; // rdx
	unsigned __int64* v64; // rdx
	_DWORD* v65; // rax
	__int64* v66; // rax
	__int64* v67; // rax
	__int64 v68; // r8
	__int64 v69; // rdx
	__int64 v70; // [rsp+20h] [rbp-99h]
	__int64 v71; // [rsp+28h] [rbp-91h]
	__int64 v72; // [rsp+30h] [rbp-89h]
	__int64 v73; // [rsp+38h] [rbp-81h] BYREF
	__int64 v74; // [rsp+40h] [rbp-79h]
	__int64(__fastcall * *v75)(); // [rsp+58h] [rbp-61h] BYREF
	int v76; // [rsp+60h] [rbp-59h]
	_QWORD* v77; // [rsp+68h] [rbp-51h]
	int v78; // [rsp+70h] [rbp-49h]
	__int64(__fastcall * *v79)(); // [rsp+78h] [rbp-41h] BYREF
	int v80; // [rsp+80h] [rbp-39h]
	_QWORD* v81; // [rsp+88h] [rbp-31h]
	int v82; // [rsp+90h] [rbp-29h]
	__int64 v83; // [rsp+98h] [rbp-21h] BYREF
	__int64 v84; // [rsp+A0h] [rbp-19h]
	__int64 v85; // [rsp+A8h] [rbp-11h]
	int v86; // [rsp+128h] [rbp+6Fh]
	BOOL v87; // [rsp+130h] [rbp+77h]

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (!v2)
		goto LABEL_2;
	v5 = *(_QWORD*)(v2 + 2328);
	if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	if (*(_QWORD*)(v3 + 2168))
	{
		sub_140500510(&v83, v3 + 7152);
		v6 = a1[4];
		v81 = a1;
		v7 = *(_QWORD*)(v6 + 112);
		v79 = off_140B569F0;
		v82 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v10 = sub_1400578C0((__int64)a1);
		v11 = a1[4];
		v80 = v10;
		v75 = off_140B569F0;
		v12 = *(_QWORD*)(v11 + 112);
		v13 = (__int64)a1;
		v77 = a1;
		v78 = 1;
		if (*(_QWORD*)(v11 + 120) >= v12)
			sub_14005E2C0((__int64)a1);
		v14 = a1[2];
		v15 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		a1[2] += 16i64;
		v16 = 0;
		v17 = sub_1400578C0((__int64)a1);
		v76 = v17;
		v18 = -1i64;
		v19 = 0;
		v86 = 0;
		v71 = 0i64;
		v70 = (v85 - v84) >> 3;
		if (v70)
		{
			v20 = v84;
			v21 = (v85 - v84) >> 3;
			v72 = -v84;
			while (1)
			{
				v22 = *(_DWORD*)v20;
				if (qword_140C63840)
					break;
				if (!dword_140C64580)
				{
					if ((int)sub_1401FA680() >= 0)
					{
						v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65470 + 24i64))(
							qword_140C65470,
							v22);
						goto LABEL_18;
					}
				LABEL_52:
					v21 = v70;
				}
				v20 += 8i64;
				if (++v71 >= v21)
				{
					v13 = (__int64)v77;
					v17 = v76;
					v19 = v86;
					goto LABEL_55;
				}
			}
			v23 = qword_140C63840(off_140A69F70, v22, qword_140C63858);
		LABEL_18:
			v24 = v23;
			if (v23)
			{
				v25 = *(float*)(v20 + 4);
				v26 = 0.0;
				v87 = 0;
				if (*(_DWORD*)(v3 + 7304) == *(_DWORD*)(v3 + 7188) && *(_DWORD*)(v3 + 7308) == *(_DWORD*)(v3 + 7192))
				{
					if (!sub_1404FF150(v3))
						v26 = *(float*)(*(_QWORD*)(v3 + 7216) + v72 + v20 + 4);
					v27 = v25;
					if ((LODWORD(v25) ^ LODWORD(v26)) < 0)
						LODWORD(v27) = 0x80000000 - LODWORD(v25);
					v28 = abs32(LODWORD(v27) - LODWORD(v26));
					v31 = __OFSUB__(v28, 84);
					v29 = v28 == 84;
					v30 = (int)(v28 - 84) < 0;
					v32 = v86;
					v87 = !(v30 ^ v31 | v29);
					if (!(v30 ^ v31 | v29))
						v32 = 1;
					v86 = v32;
				}
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v33 = a1[2];
				v34 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v33 + 8) = 5;
				*(_QWORD*)v33 = v34;
				a1[2] += 16i64;
				v35 = sub_1400578C0((__int64)a1);
				v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				v37 = a1[2];
				*(_QWORD*)v37 = *v36;
				*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v37, L"idSlider", v71);
				a1[2] -= 16i64;
				sub_14034BDD0(v38, *(_DWORD*)(v24 + 4));
				v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				v40 = a1[2];
				*(_QWORD*)v40 = *v39;
				*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v40, L"strName", v41);
				a1[2] -= 16i64;
				v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				*(_QWORD*)v43 = *v42;
				*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
				a1[2] += 16i64;
				v44 = (unsigned __int64*)sub_14018F0E0(&v73, L"nCurrentValue")[1];
				if (v44)
				{
					v45 = -1i64;
					do
						++v45;
					while (*((_BYTE*)v44 + v45));
					sub_140058710((__int64)a1, v44, v45);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v74)
					sub_14018B900(v74, 0);
				v46 = a1[2];
				*(_DWORD*)(v46 + 8) = 3;
				*(double*)v46 = v25;
				a1[2] += 16i64;
				v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				*(_QWORD*)v49 = *v48;
				*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
				a1[2] += 16i64;
				v50 = (unsigned __int64*)sub_14018F0E0(&v73, L"nOriginalValue")[1];
				if (v50)
				{
					v51 = -1i64;
					do
						++v51;
					while (*((_BYTE*)v50 + v51));
					sub_140058710((__int64)a1, v50, v51);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v74)
					sub_14018B900(v74, 0);
				v52 = a1[2];
				*(_DWORD*)(v52 + 8) = 3;
				*(double*)v52 = v26;
				a1[2] += 16i64;
				v53 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v53, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v54 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				*(_QWORD*)v55 = *v54;
				*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
				a1[2] += 16i64;
				v56 = (unsigned __int64*)sub_14018F0E0(&v73, L"bChanged")[1];
				if (v56)
				{
					v57 = -1i64;
					do
						++v57;
					while (*((_BYTE*)v56 + v57));
					sub_140058710((__int64)a1, v56, v57);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v74)
					sub_14018B900(v74, 0);
				v58 = (BOOL*)a1[2];
				*v58 = v87;
				v58[2] = 1;
				a1[2] += 16i64;
				v59 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v59, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				sub_1400FB1D0((__int64)&v75);
				sub_1400579E0((__int64)a1, v60, v35);
			}
			goto LABEL_52;
		}
	LABEL_55:
		v61 = v80;
		v62 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v80);
		v63 = a1[2];
		*(_QWORD*)v63 = *v62;
		*(_DWORD*)(v63 + 8) = *((_DWORD*)v62 + 2);
		a1[2] += 16i64;
		v64 = (unsigned __int64*)sub_14018F0E0(&v73, L"bBonesChanged")[1];
		if (v64)
		{
			do
				++v18;
			while (*((_BYTE*)v64 + v18));
			sub_140058710((__int64)a1, v64, v18);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v74)
			sub_14018B900(v74, 0);
		v65 = (_DWORD*)a1[2];
		LOBYTE(v16) = v19 != 0;
		*v65 = v16;
		v65[2] = 1;
		a1[2] += 16i64;
		v66 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v66, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		sub_1400FB2A0((__int64)&v79, (__int64)L"arBones", v17);
		v67 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v61);
		v68 = a1[2];
		v69 = *v67;
		*(_QWORD*)v68 = *v67;
		*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
		a1[2] += 16i64;
		if (v13)
			sub_1400579E0(v13, v69, v17);
		sub_1400579E0((__int64)a1, v69, v61);
		if (v84)
			sub_14018B900(v84, 0);
		return 1i64;
	}
	else
	{
	LABEL_2:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1404FCC3B: variable 'v38' is possibly undefined
// 1404FCC77: variable 'v41' is possibly undefined
// 1404FCCA1: variable 'v43' is possibly undefined
// 1404FCD59: variable 'v49' is possibly undefined
// 1404FCE15: variable 'v55' is possibly undefined
// 1404FCEC4: variable 'v60' is possibly undefined
// 1404FD016: variable 'v69' is possibly undefined
// 140A69F70: using guessed type wchar_t *off_140A69F70[2];
// 140B0F1E0: using guessed type wchar_t aIdslider_2[9];
// 140B0F210: using guessed type wchar_t aNcurrentvalue_0[14];
// 140B0F230: using guessed type wchar_t aStrname_25[8];
// 140B0F590: using guessed type wchar_t aBchanged_1[9];
// 140B0F5A8: using guessed type wchar_t aNoriginalvalue_0[15];
// 140B0F5C8: using guessed type wchar_t aArbones[8];
// 140B0F5D8: using guessed type wchar_t aBboneschanged[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64580: using guessed type int dword_140C64580;
// 140C65470: using guessed type __int64 qword_140C65470;

