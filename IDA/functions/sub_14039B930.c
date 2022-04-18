#include "../winhttp.h"

//----- (000000014039B930) ----------------------------------------------------
__int64 __fastcall sub_14039B930(_QWORD* a1, int a2)
{
	__int64 v2; // r8
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned int v7; // esi
	unsigned __int64 v8; // r12
	int* v9; // r14
	unsigned __int64 v10; // rdi
	__int64 v11; // r15
	unsigned int v12; // edx
	BOOL v13; // ecx
	__int64 v14; // r8
	__int64 v15; // rax
	__int64 v16; // rcx
	unsigned int v17; // eax
	__int64 v18; // rax
	__int64 i; // rax
	int v20; // eax
	__int64 v21; // rax
	int* v22; // rax
	int* v23; // rdi
	__int64 j; // rax
	__int64 v25; // rbx
	unsigned int v26; // eax
	__int64 v27; // rbx
	unsigned int v28; // eax
	__int64 v29; // rcx
	__int64 v30; // rax
	int v31; // edx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 k; // rcx
	__int64 m; // rcx
	__int64 v36; // rdi
	unsigned int v37; // ebx
	__int16* v38; // r14
	BOOL v39; // ecx
	__int64 v40; // rdx
	__int64 v41; // r8
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64 v44; // rax
	int v45; // edi
	__int16* v46; // rbp
	__int64 v47; // rcx
	_DWORD* v48; // r14
	__int64 v49; // rbx
	__int64 v50; // [rsp+20h] [rbp-88h]
	__int64 v51; // [rsp+50h] [rbp-58h] BYREF
	__int64 v52; // [rsp+58h] [rbp-50h]
	__int64 v53; // [rsp+60h] [rbp-48h]
	int* v54; // [rsp+B0h] [rbp+8h]
	int v55; // [rsp+B8h] [rbp+10h]
	__int64 v56; // [rsp+C0h] [rbp+18h]
	__int64 v57; // [rsp+C0h] [rbp+18h]

	v55 = a2;
	v2 = a1[15];
	v56 = v2;
	if (!v2)
		return 30i64;
	v5 = a1[656];
	v6 = *(_QWORD*)(v5 + 16);
	v7 = 4;
	v8 = 0i64;
	v9 = 0i64;
	v54 = 0i64;
	v10 = 0i64;
	v52 = 0i64;
	v11 = 0i64;
	v51 = 0i64;
	if (v6 != v5)
	{
		while (!_bittest(&a2, *(_DWORD*)(v6 + 36)))
		{
		LABEL_20:
			v18 = *(_QWORD*)(v6 + 24);
			if (v18)
			{
				v6 = *(_QWORD*)(v6 + 24);
				for (i = *(_QWORD*)(v18 + 16); i; i = *(_QWORD*)(i + 16))
					v6 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = j;
				if (*(_QWORD*)(v6 + 24) != j)
					v6 = j;
			}
			if (v6 == a1[656])
			{
				v10 = v52;
				v11 = v51;
				goto LABEL_43;
			}
		}
		v12 = *(_DWORD*)(v6 + 32);
		if (!v12)
		{
			v9 = v54;
			goto LABEL_19;
		}
		v13 = *(_QWORD*)(qword_140C65898 + 120) == v2 || *(_QWORD*)(qword_140C65898 + 25744) == v2;
		v14 = 0i64;
		if (v13)
			v14 = qword_140C65898;
		if (!v14 || (v15 = sub_1405A5B90(v14, v12)) == 0)
		{
			v15 = sub_1407A0FD0(qword_140C65B70, v12);
			if (!v15)
				goto LABEL_17;
		}
		if ((*(_DWORD*)(*(_QWORD*)(v15 + 112) + 124i64) & 0xFFFFFFFB) != 0)
		{
			v17 = sub_14039B340((__int64)a1, *(_DWORD*)(v6 + 32));
			v7 = v17;
			if (!v17 || v17 == 317)
			{
				v11 = v51;
				goto LABEL_104;
			}
			goto LABEL_17;
		}
		v20 = *(_DWORD*)(v6 + 36);
		if (v20 == 1)
		{
			v21 = sub_1405A8A40(v16, *(_DWORD*)(v6 + 40));
		}
		else
		{
			if (v20 != 2)
				goto LABEL_31;
			v21 = sub_1405A8AD0(v16, *(_DWORD*)(v6 + 40));
		}
		if (v21 && !(unsigned int)sub_14054F480(v21))
		{
			sub_140003460(&v51, (int*)(v6 + 32));
		LABEL_17:
			v9 = v54;
		LABEL_18:
			v2 = v56;
		LABEL_19:
			a2 = v55;
			goto LABEL_20;
		}
	LABEL_31:
		v22 = sub_14018DB00((__int64)v54, v8 + 1, 4i64);
		v9 = v54;
		v23 = v22;
		v22[v8] = *(_DWORD*)(v6 + 32);
		if (v54 != v22)
		{
			sub_1407DB590(v22, v54, 4 * v8);
			if (v54)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v54 - 2) + 8i64))(v54 - 4);
			v9 = v23;
			v54 = v23;
		}
		++v8;
		goto LABEL_18;
	}
LABEL_43:
	v25 = 0i64;
	if (v8)
	{
		do
		{
			v26 = sub_14039B340((__int64)a1, v9[v25]);
			v7 = v26;
			if (!v26 || v26 == 317)
				goto LABEL_104;
		} while (++v25 < v8);
	}
	v27 = 0i64;
	if (v10)
	{
		do
		{
			v28 = sub_14039B340((__int64)a1, *(_DWORD*)(v11 + 4 * v27));
			v7 = v28;
			if (!v28 || v28 == 317)
				goto LABEL_104;
		} while (++v27 < v10);
	}
	v29 = a1[656];
	v30 = *(_QWORD*)(v29 + 16);
	if (v30 != v29)
	{
		v31 = v55;
		do
		{
			if (_bittest(&v31, *(_DWORD*)(v30 + 36)))
			{
				v32 = *(_QWORD*)(v30 + 48);
				if (v32)
					*(_DWORD*)(v32 + 328) = 1;
			}
			v33 = *(_QWORD*)(v30 + 24);
			if (v33)
			{
				v30 = *(_QWORD*)(v30 + 24);
				for (k = *(_QWORD*)(v33 + 16); k; k = *(_QWORD*)(k + 16))
					v30 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v30 + 8); v30 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v30 = m;
				if (*(_QWORD*)(v30 + 24) != m)
					v30 = m;
			}
		} while (v30 != a1[656]);
	}
	v36 = a1[15];
	if (v36)
	{
		v37 = 0;
		v38 = 0i64;
		if (a1[657] == 1i64)
		{
			v37 = *(_DWORD*)(*(_QWORD*)(a1[656] + 16i64) + 32i64);
			if (v37)
			{
				v39 = *(_QWORD*)(qword_140C65898 + 120) == v56 || *(_QWORD*)(qword_140C65898 + 25744) == v56;
				v40 = 0i64;
				if (v39)
					v40 = qword_140C65898;
				if (v40)
				{
					v41 = *(_QWORD*)(v40 + 32024);
					v42 = v41;
					v43 = *(_QWORD*)(v41 + 8);
					while (v43)
					{
						if (*(_DWORD*)(v43 + 32) < v37)
						{
							v43 = *(_QWORD*)(v43 + 24);
						}
						else
						{
							v42 = v43;
							v43 = *(_QWORD*)(v43 + 16);
						}
					}
					if (v42 == v41 || (v57 = v42, v37 < *(_DWORD*)(v42 + 32)))
						v57 = *(_QWORD*)(v40 + 32024);
					if (v57 != v41)
					{
						v44 = *(_QWORD*)(v57 + 40);
						if (v44)
							goto LABEL_88;
					}
				}
				v44 = sub_1407A0FD0(qword_140C65B70, v37);
				if (v44)
					LABEL_88:
				v38 = sub_14034BDD0(v42, *(_DWORD*)(*(_QWORD*)(v44 + 8) + 16i64));
			}
			if (v7 == 4)
				goto LABEL_103;
			if (v7 > 0x14B)
			{
			LABEL_96:
				sub_1400035B0();
				v45 = *(_DWORD*)(v36 + 8);
				v46 = (__int16*)&unk_1409E7904;
				if (v38)
					v46 = v38;
				v47 = 160i64 * (int)v7;
				v48 = *(_DWORD**)(v47 + qword_140C7DF98 + 8);
				if (v48)
				{
					sub_1405648A0(v47, &v51, v7, v45, v37);
					v49 = v52;
					if (v52 != v53)
					{
						LODWORD(v50) = *v48;
						Apollo_LUAEvent(
							*(_QWORD*)(qword_140C65898 + 29504),
							"SpellCastFailed",
							"iiUUSS",
							(unsigned int)v48[4],
							v50,
							v45,
							v45,
							v52,
							v46);
					}
					if (v49)
						sub_14018B900(v49, 0);
				}
			LABEL_103:
				v7 = 1;
				goto LABEL_104;
			}
		}
		else
		{
			v7 = 14;
		}
		if (qword_140C63840)
		{
			qword_140C63840(off_140A6D150, v7, qword_140C63858);
		}
		else if (!dword_140C64798 && (int)sub_140236FE0() >= 0)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BD0 + 24i64))(qword_140C64BD0, v7);
		}
		goto LABEL_96;
	}
	v7 = 30;
LABEL_104:
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	if (v54)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v54 - 2) + 8i64))(v54 - 4);
	return v7;
}
// 14039BA1C: variable 'v12' is possibly undefined
// 14039BAAC: variable 'v16' is possibly undefined
// 14039BD84: variable 'v42' is possibly undefined
// 14039BE9D: variable 'v50' is possibly undefined
// 140A6D150: using guessed type wchar_t *off_140A6D150[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64798: using guessed type int dword_140C64798;
// 140C64BD0: using guessed type __int64 qword_140C64BD0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DF98: using guessed type __int64 qword_140C7DF98;

