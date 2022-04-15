//----- (00000001405A24F0) ----------------------------------------------------
void __fastcall sub_1405A24F0(_QWORD* a1, __int64 a2, __int64* a3)
{
	int v3; // r13d
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ebx
	__int64 v12; // rax
	int v13; // xmm1_4
	float v14; // xmm6_4
	_QWORD* v15; // rax
	__int64 v16; // rdx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // rax
	__int64 v22; // r14
	unsigned int* v23; // rsi
	_QWORD* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // r9
	_QWORD* v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // r9
	int v32; // r14d
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rdx
	int v37; // r15d
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rdx
	__int64 v41; // rcx
	_DWORD* v42; // rax
	_QWORD* v43; // rax
	__int64 v44; // rdx
	__int64 v45; // rcx
	_DWORD* v46; // rax
	__int64 v47; // r8
	__int64 v48; // rdx
	__int64 v49; // rdx
	__int64 v50; // [rsp+20h] [rbp-60h] BYREF
	int v51; // [rsp+28h] [rbp-58h]
	__int64 v52; // [rsp+30h] [rbp-50h] BYREF
	__int64 v53; // [rsp+38h] [rbp-48h]
	__int64 v54; // [rsp+40h] [rbp-40h]
	__int64(__fastcall * *v55)(); // [rsp+50h] [rbp-30h] BYREF
	int v56; // [rsp+58h] [rbp-28h]
	_QWORD* v57; // [rsp+60h] [rbp-20h]
	int v58; // [rsp+68h] [rbp-18h]

	v3 = 0;
	if ((dword_140DC3470 & 1) == 0)
	{
		dword_140DC347C = 0;
		dword_140DC3470 |= 1u;
	}
	v57 = a1;
	v7 = a1[4];
	v55 = off_140B569F0;
	v8 = *(_QWORD*)(v7 + 112);
	v58 = 1;
	if (*(_QWORD*)(v7 + 120) >= v8)
		sub_14005E2C0((__int64)a1);
	v9 = a1[2];
	v10 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	a1[2] += 16i64;
	v11 = sub_1400578C0((__int64)a1);
	v56 = v11;
	if (dword_140DC347C)
	{
		v13 = dword_140DC3478;
	}
	else
	{
		dword_140DC347C = 1;
		v12 = sub_140200220(0x3C4u);
		if (!v12)
		{
			dword_140DC3478 = 0;
			goto LABEL_20;
		}
		v13 = *(int*)(v12 + 24);
		dword_140DC3478 = v13;
	}
	if (*(float*)&v13 > 0.0 && sub_1405A3D50() < 1.0)
	{
		v14 = sub_1405A3D50();
		v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v16 = a1[2];
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
		a1[2] += 16i64;
		v17 = (unsigned __int64*)sub_14018F0E0(&v52, L"nSuccessChance")[1];
		if (v17)
		{
			v18 = -1i64;
			do
				++v18;
			while (*((_BYTE*)v17 + v18));
			sub_140058710((__int64)a1, v17, v18);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v53)
			sub_14018B900(v53, 0);
		v19 = a1[2];
		*(_DWORD*)(v19 + 8) = 3;
		*(double*)v19 = v14;
		a1[2] += 16i64;
		v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
	}
	if (!a3)
		goto LABEL_47;
LABEL_20:
	v21 = *a3;
	if (*a3 && *(_DWORD*)(v21 + 1184))
		v22 = *(_QWORD*)(v21 + 8);
	else
		v22 = 0i64;
	if (!v21 || (v23 = (unsigned int*)(v21 + 32), !*(_DWORD*)(v21 + 1176)))
		v23 = 0i64;
	if (v22 && v23)
	{
		v52 = 0i64;
		v53 = 1i64;
		v54 = 0i64;
		if ((unsigned int)sub_140514170(v23, &v52, 0))
		{
			v24 = (_QWORD*)sub_140059170(a1, 0x18ui64);
			*v24 = v52;
			v24[1] = v53;
			v24[2] = v54;
			v25 = a1[4];
			v26 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
			v27 = a1[2];
			v50 = v26;
			v51 = 4;
			sub_14005E8E0((__int64)a1, v25 + 160, (int*)&v50, v27);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
			sub_1400FB540((__int64)&v55);
			a1[2] -= 16i64;
		}
		if ((unsigned int)sub_140514170(v23, &v52, 1))
		{
			v28 = (_QWORD*)sub_140059170(a1, 0x18ui64);
			*v28 = v52;
			v28[1] = v53;
			v28[2] = v54;
			v29 = a1[4];
			v30 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
			v31 = a1[2];
			v50 = v30;
			v51 = 4;
			sub_14005E8E0((__int64)a1, v29 + 160, (int*)&v50, v31);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
			sub_1400FB540((__int64)&v55);
			a1[2] -= 16i64;
		}
		sub_14020DF20(*(_DWORD*)(v22 + 368));
		v32 = 1;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v33 = a1[2];
		v34 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v33 + 8) = 5;
		*(_QWORD*)v33 = v34;
		a1[2] += 16i64;
		v35 = 0i64;
		v37 = sub_1400578C0((__int64)a1);
		if (!v23[76])
			goto LABEL_46;
		do
		{
			v38 = *a3;
			if (*a3 && *(_DWORD*)(v38 + 1192) && (unsigned int)v35 < 8 && *(_DWORD*)(v38 + 4 * v35 + 1144))
			{
				v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v37);
				v40 = a1[2];
				*(_QWORD*)v40 = *v39;
				*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
				a1[2] += 16i64;
				v41 = a1[2];
				*(_DWORD*)(v41 + 8) = 3;
				*(double*)v41 = (double)v32;
				a1[2] += 16i64;
				v42 = (_DWORD*)a1[2];
				*v42 = 0;
				v42[2] = 1;
			}
			else
			{
				v3 = 1;
				v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v37);
				v44 = a1[2];
				*(_QWORD*)v44 = *v43;
				*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
				a1[2] += 16i64;
				v45 = a1[2];
				*(_DWORD*)(v45 + 8) = 3;
				*(double*)v45 = (double)v32;
				a1[2] += 16i64;
				v46 = (_DWORD*)a1[2];
				*v46 = 1;
				v46[2] = 1;
			}
			++v32;
			v47 = a1[2] + 16i64;
			a1[2] = v47;
			sub_14005EA50((__int64)a1, (__int64*)(v47 - 48), (int*)(v47 - 32), (unsigned int*)(v47 - 16));
			a1[2] -= 48i64;
			v35 = (unsigned int)(v35 + 1);
		} while ((unsigned int)v35 < v23[76]);
		if (v3)
		{
			sub_1400FB2A0((__int64)&v55, (__int64)L"arAllowed", v37);
			v11 = v56;
			sub_1400FB2A0(a2, (__int64)L"tRerollInfo", v56);
			sub_1400579E0((__int64)a1, v48, v37);
		}
		else
		{
		LABEL_46:
			v11 = v56;
			sub_1400579E0((__int64)a1, v36, v37);
		}
	}
	else
	{
	LABEL_47:
		sub_1400FB2A0(a2, (__int64)L"tRerollInfo", v11);
	}
	sub_1400579E0((__int64)a1, v49, v11);
}
// 1405A2A02: variable 'v48' is possibly undefined
// 1405A2A12: variable 'v36' is possibly undefined
// 1405A2A58: variable 'v49' is possibly undefined
// 140B20698: using guessed type wchar_t aArallowed[10];
// 140B206E8: using guessed type wchar_t aTrerollinfo[12];
// 140B20700: using guessed type wchar_t aNsuccesschance_0[15];
// 140B20748: using guessed type wchar_t aTrerollinfo_0[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140DC3470: using guessed type int dword_140DC3470;
// 140DC3478: using guessed type int dword_140DC3478;
// 140DC347C: using guessed type int dword_140DC347C;

