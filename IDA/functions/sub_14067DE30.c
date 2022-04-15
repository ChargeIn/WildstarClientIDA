#include "../winhttp.h"

//----- (000000014067DE30) ----------------------------------------------------
__int64 __fastcall sub_14067DE30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v6; // rsi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // r13d
	__int64 v12; // rcx
	_QWORD* v13; // rax
	__int64 v14; // rdx
	int v15; // r10d
	__int64 v16; // rcx
	unsigned __int64 v17; // rax
	__int64 v18; // r12
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // r15d
	int* v22; // r14
	_QWORD* v23; // rsi
	_QWORD* v24; // rbx
	int* i; // rdi
	int* v26; // rax
	int* v27; // rbx
	__int64 v28; // rdi
	__int64 v29; // rax
	_QWORD* v30; // rax
	__int64 v31; // rdx
	int v32; // r10d
	_QWORD* v33; // rax
	__int64 v34; // rdx
	unsigned __int16* v35; // r10
	_QWORD* v36; // rax
	__int64 v37; // rdx
	unsigned __int16* v38; // r10
	_QWORD* v39; // rax
	__int64 v40; // r11
	__int64 v41; // rdx
	unsigned __int16* v42; // r10
	__int64 v43; // rdx
	_QWORD* v44; // rax
	__int64 v45; // rdx
	int* v46; // rbx
	__int64 v47; // rcx
	__int64 v48; // rdx
	__int64(__fastcall * *v49)(); // [rsp+20h] [rbp-68h] BYREF
	int v50; // [rsp+28h] [rbp-60h]
	_QWORD* v51; // [rsp+30h] [rbp-58h]
	int v52; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v53)(); // [rsp+40h] [rbp-48h] BYREF
	int v54; // [rsp+48h] [rbp-40h]
	_QWORD* v55; // [rsp+50h] [rbp-38h]
	int v56; // [rsp+58h] [rbp-30h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& (v4 = *(_QWORD*)(v3 + 48), *(_DWORD*)(*(_QWORD*)v4 + 12i64) == 22))
	{
		v6 = sub_14048D310(qword_140C65950, *(_DWORD*)(*(_QWORD*)v4 + 20i64));
		if (v6)
		{
			v7 = a1[4];
			v8 = *(_QWORD*)(v7 + 112);
			v53 = off_140B569F0;
			v55 = a1;
			v56 = 1;
			if (*(_QWORD*)(v7 + 120) >= v8)
				sub_14005E2C0((__int64)a1);
			v9 = a1[2];
			v10 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			a1[2] += 16i64;
			v11 = sub_1400578C0((__int64)a1);
			v12 = a1[4];
			v54 = v11;
			v13 = sub_14005C3C0(*(_QWORD*)(v12 + 160), v11);
			v14 = a1[2];
			*(_QWORD*)v14 = *v13;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v14, L"nAttempts", v15);
			a1[2] -= 16i64;
			v16 = a1[4];
			v49 = off_140B569F0;
			v17 = *(_QWORD*)(v16 + 112);
			v18 = (__int64)a1;
			v51 = a1;
			v52 = 1;
			if (*(_QWORD*)(v16 + 120) >= v17)
				sub_14005E2C0((__int64)a1);
			v19 = a1[2];
			v20 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v19 + 8) = 5;
			*(_QWORD*)v19 = v20;
			a1[2] += 16i64;
			v21 = sub_1400578C0((__int64)a1);
			v50 = v21;
			v22 = sub_14018B280(24i64, 0);
			*(_QWORD*)v22 = v22;
			*((_QWORD*)v22 + 1) = v22;
			v23 = *(_QWORD**)(v6 + 24);
			v24 = (_QWORD*)*v23;
			for (i = *(int**)v22; v24 != v23; v24 = (_QWORD*)*v24)
			{
				v26 = sub_14018B280(24i64, 0);
				if (v26 != (int*)-16i64)
					*((_QWORD*)v26 + 2) = v24[2];
				*(_QWORD*)v26 = i;
				*((_QWORD*)v26 + 1) = *((_QWORD*)i + 1);
				**((_QWORD**)i + 1) = v26;
				*((_QWORD*)i + 1) = v26;
			}
			v27 = *(int**)v22;
			if (*(int**)v22 != v22)
			{
				do
				{
					if (*((_QWORD*)v27 + 2))
					{
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v28 = a1[2];
						v29 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v28 + 8) = 5;
						*(_QWORD*)v28 = v29;
						a1[2] += 16i64;
						LODWORD(v28) = sub_1400578C0((__int64)a1);
						v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v28);
						v31 = a1[2];
						*(_QWORD*)v31 = *v30;
						*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v31, L"idPattern", v32);
						a1[2] -= 16i64;
						sub_14034BDD0(
							*(_QWORD*)(*((_QWORD*)v27 + 2) + 8i64),
							*(_DWORD*)(*(_QWORD*)(*((_QWORD*)v27 + 2) + 8i64) + 4i64));
						v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v28);
						v34 = a1[2];
						*(_QWORD*)v34 = *v33;
						*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v34, L"strName", v35);
						a1[2] -= 16i64;
						sub_14034BDD0(
							*(_QWORD*)(*((_QWORD*)v27 + 2) + 8i64),
							*(_DWORD*)(*(_QWORD*)(*((_QWORD*)v27 + 2) + 8i64) + 8i64));
						v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v28);
						v37 = a1[2];
						*(_QWORD*)v37 = *v36;
						*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v37, L"strDescription", v38);
						a1[2] -= 16i64;
						v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v28);
						*(_QWORD*)v40 = *v39;
						*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v41, L"strIcon", v42);
						a1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v49);
						sub_1400579E0((__int64)a1, v43, v28);
					}
					v27 = *(int**)v27;
				} while (v27 != v22);
				v18 = (__int64)v51;
				v21 = v50;
			}
			sub_1400FB2A0((__int64)&v53, (__int64)L"arPatterns", v21);
			v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			v45 = a1[2];
			*(_QWORD*)v45 = *v44;
			*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
			a1[2] += 16i64;
			v46 = *(int**)v22;
			while (v46 != v22)
			{
				v47 = (__int64)v46;
				v46 = *(int**)v46;
				sub_14018B900(v47, 0);
			}
			*(_QWORD*)v22 = v22;
			*((_QWORD*)v22 + 1) = v22;
			sub_14018B900((__int64)v22, 0);
			if (v18)
				sub_1400579E0(v18, v48, v21);
			sub_1400579E0((__int64)a1, v48, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14067DF6A: variable 'v15' is possibly undefined
// 14067E0BF: variable 'v32' is possibly undefined
// 14067E110: variable 'v35' is possibly undefined
// 14067E161: variable 'v38' is possibly undefined
// 14067E1BF: variable 'v40' is possibly undefined
// 14067E1D1: variable 'v41' is possibly undefined
// 14067E1D1: variable 'v42' is possibly undefined
// 14067E1ED: variable 'v43' is possibly undefined
// 14067E293: variable 'v48' is possibly undefined
// 140B317E0: using guessed type wchar_t aStricon_11[8];
// 140B317F0: using guessed type wchar_t aArpatterns[11];
// 140B31808: using guessed type wchar_t aStrname_71[8];
// 140B31818: using guessed type wchar_t aStrdescription_14[15];
// 140B31838: using guessed type wchar_t aNattempts[10];
// 140B31850: using guessed type wchar_t aIdpattern[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65950: using guessed type __int64 qword_140C65950;

