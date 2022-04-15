//----- (00000001405ECF20) ----------------------------------------------------
__int64 __fastcall sub_1405ECF20(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r15
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // r14d
	__int64 v9; // rcx
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	int v13; // r11d
	__int64 v14; // rbx
	_QWORD* v15; // rax
	__int64 v16; // rdx
	int v17; // r11d
	float v18; // xmm6_4
	_QWORD* v19; // rax
	__int64 v20; // r11
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // rsi
	int v23; // ebp
	unsigned __int64 v24; // r8
	__int64 v25; // rax
	__int64* v26; // rax
	float v27; // xmm6_4
	_QWORD* v28; // rax
	__int64 v29; // r11
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // r8
	__int64 v32; // rax
	__int64* v33; // rax
	float v34; // xmm6_4
	_QWORD* v35; // rax
	__int64 v36; // r11
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rbx
	_QWORD* v42; // rax
	__int64 v43; // rdx
	int v44; // r11d
	int v45; // ebx
	_QWORD* v46; // rax
	__int64 v47; // r11
	unsigned __int64* v48; // rdx
	unsigned __int64 v49; // r8
	_DWORD* v50; // rcx
	__int64* v51; // rax
	int v52; // ebx
	_QWORD* v53; // rax
	__int64 v54; // r11
	unsigned __int64* v55; // rdx
	unsigned __int64 v56; // r8
	_DWORD* v57; // rcx
	__int64* v58; // rax
	int v59; // ebx
	_QWORD* v60; // rax
	__int64 v61; // r11
	unsigned __int64* v62; // rdx
	_DWORD* v63; // rax
	__int64* v64; // rax
	_QWORD* v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rdx
	_QWORD* v68; // rax
	__int64 v69; // rdx
	__int64 v71; // [rsp+20h] [rbp-48h] BYREF
	__int64 v72; // [rsp+28h] [rbp-40h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v6 = a1[2];
		v7 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		a1[2] += 16i64;
		v8 = sub_1400578C0((__int64)a1);
		v9 = *(_QWORD*)(a1[4] + 160i64);
		if (*(_QWORD*)(v5 + 72))
		{
			v10 = sub_14005C3C0(v9, v8);
			v11 = a1[2];
			*(_QWORD*)v11 = *v10;
			*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v12, L"eSelectionType", v13);
			a1[2] -= 16i64;
			v14 = a1[2];
			v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v14 = *v15;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v15 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v16, L"idTarget", v17);
			a1[2] -= 16i64;
			v18 = **(float**)(v5 + 72);
			v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v20 = *v19;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
			a1[2] += 16i64;
			v21 = (unsigned __int64*)sub_14018F0E0(&v71, L"fMinimumRange")[1];
			v22 = -1i64;
			v23 = 0;
			if (v21)
			{
				v24 = -1i64;
				do
					++v24;
				while (*((_BYTE*)v21 + v24));
				sub_140058710((__int64)a1, v21, v24);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v25 = a1[2];
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = v18;
			a1[2] += 16i64;
			v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v27 = *(float*)(*(_QWORD*)(v5 + 72) + 4i64);
			v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v29 = *v28;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
			a1[2] += 16i64;
			v30 = (unsigned __int64*)sub_14018F0E0(&v71, L"fMaximumRange")[1];
			if (v30)
			{
				v31 = -1i64;
				do
					++v31;
				while (*((_BYTE*)v30 + v31));
				sub_140058710((__int64)a1, v30, v31);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v32 = a1[2];
			*(_DWORD*)(v32 + 8) = 3;
			*(double*)v32 = v27;
			a1[2] += 16i64;
			v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v34 = *(float*)(*(_QWORD*)(v5 + 72) + 8i64);
			v35 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v36 = *v35;
			*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
			a1[2] += 16i64;
			v37 = (unsigned __int64*)sub_14018F0E0(&v71, L"fAngle")[1];
			if (v37)
			{
				v38 = -1i64;
				do
					++v38;
				while (*((_BYTE*)v37 + v38));
				sub_140058710((__int64)a1, v37, v38);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v39 = a1[2];
			*(_DWORD*)(v39 + 8) = 3;
			*(double*)v39 = v34;
			a1[2] += 16i64;
			v40 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v40, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v41 = a1[2];
			v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v41 = *v42;
			*(_DWORD*)(v41 + 8) = *((_DWORD*)v42 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v43, L"nTargetCount", v44);
			a1[2] -= 16i64;
			v45 = *(_DWORD*)(*(_QWORD*)(v5 + 72) + 24i64);
			v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v47 = *v46;
			*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
			a1[2] += 16i64;
			v48 = (unsigned __int64*)sub_14018F0E0(&v71, L"bCanAffectDead")[1];
			if (v48)
			{
				v49 = -1i64;
				do
					++v49;
				while (*((_BYTE*)v48 + v49));
				sub_140058710((__int64)a1, v48, v49);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v50 = (_DWORD*)a1[2];
			v50[2] = 1;
			*v50 = v45 != 0;
			a1[2] += 16i64;
			v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v52 = *(_DWORD*)(*(_QWORD*)(v5 + 72) + 28i64);
			v53 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v54 = *v53;
			*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
			a1[2] += 16i64;
			v55 = (unsigned __int64*)sub_14018F0E0(&v71, L"bClusterOnly")[1];
			if (v55)
			{
				v56 = -1i64;
				do
					++v56;
				while (*((_BYTE*)v55 + v56));
				sub_140058710((__int64)a1, v55, v56);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v57 = (_DWORD*)a1[2];
			v57[2] = 1;
			*v57 = v52 != 0;
			a1[2] += 16i64;
			v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v59 = *(_DWORD*)(*(_QWORD*)(v5 + 72) + 32i64);
			v60 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v61 = *v60;
			*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
			a1[2] += 16i64;
			v62 = (unsigned __int64*)sub_14018F0E0(&v71, L"bMustBeInCombat")[1];
			if (v62)
			{
				do
					++v22;
				while (*((_BYTE*)v62 + v22));
				sub_140058710((__int64)a1, v62, v22);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v63 = (_DWORD*)a1[2];
			LOBYTE(v23) = v59 != 0;
			v63[2] = 1;
			*v63 = v23;
			a1[2] += 16i64;
			v64 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v64, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
		}
		else
		{
			v65 = sub_14005C3C0(v9, v8);
			v66 = a1[2];
			*(_QWORD*)v66 = *v65;
			*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v67, L"eSelectionType", 0);
			a1[2] -= 16i64;
		}
		v68 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		v69 = a1[2];
		*(_QWORD*)v69 = *v68;
		*(_DWORD*)(v69 + 8) = *((_DWORD*)v68 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v69, v8);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1405ED03E: variable 'v12' is possibly undefined
// 1405ED03E: variable 'v13' is possibly undefined
// 1405ED089: variable 'v16' is possibly undefined
// 1405ED089: variable 'v17' is possibly undefined
// 1405ED0C4: variable 'v20' is possibly undefined
// 1405ED198: variable 'v29' is possibly undefined
// 1405ED25F: variable 'v36' is possibly undefined
// 1405ED337: variable 'v43' is possibly undefined
// 1405ED337: variable 'v44' is possibly undefined
// 1405ED371: variable 'v47' is possibly undefined
// 1405ED439: variable 'v54' is possibly undefined
// 1405ED504: variable 'v61' is possibly undefined
// 1405ED5C8: variable 'v67' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B238F0: using guessed type wchar_t aEselectiontype_0[15];
// 140B23928: using guessed type wchar_t aBclusteronly[13];
// 140B23948: using guessed type wchar_t aBmustbeincomba[16];
// 140B23968: using guessed type wchar_t aNtargetcount[13];
// 140B23988: using guessed type wchar_t aBcanaffectdead[15];
// 140B239A8: using guessed type wchar_t aFmaximumrange[14];
// 140B239C8: using guessed type wchar_t aFangle[7];
// 140B239D8: using guessed type wchar_t aIdtarget[9];
// 140B239F0: using guessed type wchar_t aFminimumrange[14];
// 140B23A40: using guessed type wchar_t aEselectiontype[15];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

