#include "../winhttp.h"

//----- (00000001407580E0) ----------------------------------------------------
__int64 __fastcall sub_1407580E0(_QWORD* a1)
{
	__int64 v2; // r13
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	int v6; // r12d
	_QWORD* v7; // rax
	__int64 v8; // rdx
	_QWORD* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // r10
	__int64(__fastcall * *v12)(); // rdx
	_DWORD* v13; // rax
	_DWORD* v14; // rbx
	__int64 v15; // rdx
	unsigned __int64 v16; // rcx
	int v17; // eax
	int v18; // r15d
	int* v19; // rbx
	__int64 v20; // r14
	__int64 v21; // rsi
	__int64 v22; // rcx
	__int64 v23; // rdx
	int v24; // eax
	int v25; // ebx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rdx
	int v31; // r10d
	__int64* v32; // rax
	__int64 v33; // r10
	_QWORD* v34; // rax
	__int64 v35; // rdx
	__int64(__fastcall * *v37)(); // [rsp+30h] [rbp-29h] BYREF
	int v38; // [rsp+38h] [rbp-21h]
	_QWORD* v39; // [rsp+40h] [rbp-19h]
	int v40; // [rsp+48h] [rbp-11h]
	__int64(__fastcall * *v41)(); // [rsp+50h] [rbp-9h] BYREF
	int v42; // [rsp+58h] [rbp-1h]
	_QWORD* v43; // [rsp+60h] [rbp+7h]
	__int64(__fastcall * **v44)(); // [rsp+68h] [rbp+Fh]
	__int64 v45; // [rsp+70h] [rbp+17h] BYREF
	__int64 v46; // [rsp+78h] [rbp+1Fh]
	int* v47; // [rsp+80h] [rbp+27h]
	__int64 v48; // [rsp+88h] [rbp+2Fh]
	int v49; // [rsp+C0h] [rbp+67h] BYREF

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	v5 = sub_1400578C0((__int64)a1);
	v6 = v5;
	if (v2)
	{
		v39 = a1;
		v40 = 1;
		v38 = -2;
		v12 = off_140B569F0;
		v37 = off_140B569F0;
		v13 = (_DWORD*)a1[3];
		if ((unsigned __int64)v13 < a1[2])
		{
			v14 = dword_140A12138;
			if (v13 != dword_140A12138 && v13[2] == 5)
			{
				sub_1400579E0((__int64)a1, (__int64)off_140B569F0, -2);
				v15 = (__int64)v39;
				v16 = v39[2];
				if (v39[3] < v16)
					v14 = (_DWORD*)v39[3];
				*(_QWORD*)v16 = *(_QWORD*)v14;
				*(_DWORD*)(v16 + 8) = v14[2];
				*(_QWORD*)(v15 + 16) += 16i64;
				v17 = sub_1400578C0((__int64)v39);
				v12 = v37;
				v38 = v17;
			}
		}
		v18 = 0;
		v19 = 0i64;
		v20 = 0i64;
		v46 = 0i64;
		v21 = 0i64;
		v48 = 0i64;
		v47 = 0i64;
		if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v12[1])(&v37))
			goto LABEL_32;
		v41 = off_140B56A08;
		v22 = (__int64)v39;
		v42 = -2;
		v43 = v39;
		v44 = &v37;
		*(_DWORD*)(v39[2] + 8i64) = 0;
		*(_QWORD*)(v22 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v41[2])(&v41, 0xFFFFFFFFi64);
		v39[2] -= 16i64;
		while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v44)[1])(v44)
			&& (unsigned int)sub_1400FCBA0((__int64)&v41))
		{
			v24 = sub_1400FC140((__int64)&v41);
			v49 = v24;
			if (v19 == (int*)v21)
			{
				sub_14017B140(&v45, v19, &v49);
				v21 = v48;
				v19 = v47;
			}
			else
			{
				if (v19)
					*v19 = v24;
				v47 = ++v19;
			}
		}
		v20 = v46;
		v41 = off_140B56A08;
		LOBYTE(v18) = (((unsigned __int64)v19 - v46) & 0xFFFFFFFFFFFFFFFCui64) == 48;
		if (v43)
			sub_1400579E0((__int64)v43, v23, v42);
		if (v18)
		{
			v25 = *(_DWORD*)(v2 + 220);
			if (!(unsigned int)sub_1403BB8D0())
			{
				v26 = *(_QWORD*)(qword_140C65898 + 120);
				if (v26)
				{
					if (!*(_DWORD*)(v26 + 592) && (unsigned int)sub_1404AACB0(v26, (__int64)&v45, v25, v2) == 1)
					{
						v27 = *(_QWORD*)(qword_140C65898 + 25744);
						if (!v27 || !*(_DWORD*)(v27 + 684))
						{
							if ((unsigned int)sub_1403A11C0())
								sub_1403BB480(v28, (__int64)&v45);
						}
					}
				}
			}
			v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v30 = a1[2];
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v30, L"eResult", v31);
			a1[2] -= 16i64;
			v32 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			*(_QWORD*)v33 = *v32;
		}
		else
		{
		LABEL_32:
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v35 = a1[2];
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v35, L"eResult", 25);
			a1[2] -= 16i64;
			v32 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v10 = *v32;
			*(_QWORD*)v33 = *v32;
		}
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		a1[2] += 16i64;
		if (v20)
			sub_14018B900(v20, 0);
		v37 = off_140B56A08;
		if (v39)
			sub_1400579E0((__int64)v39, v10, v38);
	}
	else
	{
		v7 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
		v8 = a1[2];
		*(_QWORD*)v8 = *v7;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v8, L"eResult", 23);
		a1[2] -= 16i64;
		v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		*(_QWORD*)v11 = *v9;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
		a1[2] += 16i64;
	}
	sub_1400579E0((__int64)a1, v10, v6);
	return 1i64;
}
// 14075819E: variable 'v11' is possibly undefined
// 140758332: variable 'v23' is possibly undefined
// 1407583C2: variable 'v28' is possibly undefined
// 14075840A: variable 'v31' is possibly undefined
// 14075842E: variable 'v33' is possibly undefined
// 1407584DD: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4C808: using guessed type wchar_t aEresult_1[8];
// 140B4C818: using guessed type wchar_t aEresult_2[8];
// 140B4C828: using guessed type wchar_t aEresult_0[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

