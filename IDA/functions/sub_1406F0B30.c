//----- (00000001406F0B30) ----------------------------------------------------
__int64 __fastcall sub_1406F0B30(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rdx
	unsigned __int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // r13d
	unsigned int v12; // r14d
	__int64 v13; // r15
	unsigned __int64 v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // r12d
	BOOL v18; // ebx
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	BOOL* v23; // rcx
	__int64* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // r11
	__int64 v27; // rdx
	int v28; // r10d
	_QWORD* v29; // rax
	__int64 v30; // r11
	__int64 v31; // rdx
	int v32; // r10d
	int v33; // ebx
	_QWORD* v34; // rax
	__int64 v35; // r10
	unsigned __int64* v36; // rdx
	unsigned __int64 v37; // r8
	_DWORD* v38; // rcx
	__int64* v39; // rax
	__int64 v40; // rdx
	int v41; // r15d
	struct _FILETIME v42; // rcx
	signed __int64 v43; // rax
	float v44; // xmm6_4
	int v45; // r14d
	_QWORD* v46; // rax
	__int64 v47; // rdx
	unsigned __int64* v48; // rdx
	__int64 v49; // rax
	__int64* v50; // rax
	__int64 v51; // rax
	__int64 v52; // rbx
	_QWORD* v53; // rax
	__int64 v54; // rcx
	__int64 v55; // rbx
	__int64(__fastcall * *v56)(); // rax
	__int64 v57; // r9
	_QWORD* v58; // rax
	__int64 v59; // r10
	__int64 v60; // rdx
	__int64 v61; // rdx
	__int64(__fastcall * *v63)(); // [rsp+20h] [rbp-39h] BYREF
	__int64 v64; // [rsp+28h] [rbp-31h]
	__int64 v65; // [rsp+30h] [rbp-29h]
	int v66; // [rsp+38h] [rbp-21h]
	__int64(__fastcall * *v67)(); // [rsp+40h] [rbp-19h] BYREF
	int v68; // [rsp+48h] [rbp-11h]
	_QWORD* v69; // [rsp+50h] [rbp-9h]
	int v70; // [rsp+58h] [rbp-1h]
	__int64 v71; // [rsp+60h] [rbp+7h] BYREF
	__int64 v72; // [rsp+68h] [rbp+Fh]

	if ((dword_140DC4BD4 & 1) == 0)
	{
		dword_140DC4BE0 = 0;
		dword_140DC4BD4 |= 1u;
	}
	if (qword_140C65970 && qword_140C65968 && qword_140C65898)
	{
		v69 = a1;
		v2 = a1[4];
		v3 = *(_QWORD*)(v2 + 112);
		v67 = off_140B569F0;
		v70 = 1;
		if (*(_QWORD*)(v2 + 120) >= v3)
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		v6 = sub_1400578C0((__int64)a1);
		v7 = a1[4];
		v68 = v6;
		v63 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v65 = (__int64)a1;
		v66 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = 1;
		v12 = 0;
		LODWORD(v64) = sub_1400578C0((__int64)a1);
		v13 = 16i64;
		v14 = -1i64;
		do
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v15 = a1[2];
			v16 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v15 + 8) = 5;
			*(_QWORD*)v15 = v16;
			a1[2] += 16i64;
			v17 = sub_1400578C0((__int64)a1);
			v18 = (v11 & *(_DWORD*)(qword_140C65970 + 12)) != 0;
			v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			v20 = a1[2];
			*(_QWORD*)v20 = *v19;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
			a1[2] += 16i64;
			v21 = (unsigned __int64*)sub_14018F0E0(&v71, L"bUnlocked")[1];
			if (v21)
			{
				v22 = -1i64;
				do
					++v22;
				while (*((_BYTE*)v21 + v22));
				sub_140058710((__int64)a1, v21, v22);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v23 = (BOOL*)a1[2];
			v23[2] = 1;
			*v23 = v18;
			a1[2] += 16i64;
			v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			*(_QWORD*)v26 = *v25;
			*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v27, L"nLevel", v28);
			a1[2] -= 16i64;
			v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v31, L"nXp", v32);
			a1[2] -= 16i64;
			v33 = *(_DWORD*)(qword_140C65970 + 8);
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			a1[2] += 16i64;
			v36 = (unsigned __int64*)sub_14018F0E0(&v71, L"bActive")[1];
			if (v36)
			{
				v37 = -1i64;
				do
					++v37;
				while (*((_BYTE*)v36 + v37));
				sub_140058710((__int64)a1, v36, v37);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v38 = (_DWORD*)a1[2];
			v38[2] = 1;
			*v38 = v33 == v12;
			a1[2] += 16i64;
			v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			sub_1400FB3A0((__int64)&v63, v12, v17);
			sub_1400579E0((__int64)a1, v40, v17);
			++v12;
			v11 = __ROL4__(v11, 1);
			v13 += 4i64;
		} while (v12 < 4);
		v41 = v64;
		sub_1400FB2A0((__int64)&v67, (__int64)L"tPaths", v64);
		v43 = sub_140527540(v42);
		v44 = (float)(int)v43;
		if (v43 < 0)
			v44 = v44 + 1.8446744e19;
		v45 = v68;
		v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v68);
		v47 = a1[2];
		*(_QWORD*)v47 = *v46;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
		a1[2] += 16i64;
		v48 = (unsigned __int64*)sub_14018F0E0(&v71, L"fCooldownRemaining")[1];
		if (v48)
		{
			do
				++v14;
			while (*((_BYTE*)v48 + v14));
			sub_140058710((__int64)a1, v48, v14);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v72)
			sub_14018B900(v72, 0);
		v49 = a1[2];
		*(_DWORD*)(v49 + 8) = 3;
		*(double*)v49 = v44;
		a1[2] += 16i64;
		v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		if (dword_140DC4BE0)
		{
			v52 = qword_140DC4BD8;
		}
		else
		{
			dword_140DC4BE0 = 1;
			v51 = sub_140200220(0x93Eu);
			if (v51)
			{
				v52 = *(unsigned int*)(v51 + 8);
				qword_140DC4BD8 = v52;
			}
			else
			{
				v52 = 0i64;
				qword_140DC4BD8 = 0i64;
			}
		}
		v64 = 15i64;
		v65 = 0x900000000i64;
		v53 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		v54 = v64;
		*v53 = v52;
		v53[1] = v54;
		v53[2] = v65;
		v55 = a1[4];
		v56 = (__int64(__fastcall**)())sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v57 = a1[2];
		v63 = v56;
		LODWORD(v64) = 4;
		sub_14005E8E0((__int64)a1, v55 + 160, (int*)&v63, v57);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_1400FB540((__int64)&v67);
		a1[2] -= 16i64;
		v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v45);
		*(_QWORD*)v59 = *v58;
		*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v60, v41);
		sub_1400579E0((__int64)a1, v61, v45);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406F0DBA: variable 'v26' is possibly undefined
// 1406F0DCC: variable 'v27' is possibly undefined
// 1406F0DCC: variable 'v28' is possibly undefined
// 1406F0E13: variable 'v30' is possibly undefined
// 1406F0E25: variable 'v31' is possibly undefined
// 1406F0E25: variable 'v32' is possibly undefined
// 1406F0E5A: variable 'v35' is possibly undefined
// 1406F0F0A: variable 'v40' is possibly undefined
// 1406F0F3A: variable 'v42' is possibly undefined
// 1406F1124: variable 'v59' is possibly undefined
// 1406F1136: variable 'v60' is possibly undefined
// 1406F1141: variable 'v61' is possibly undefined
// 140B40098: using guessed type wchar_t aFcooldownremai[19];
// 140B400C0: using guessed type wchar_t aTpaths[7];
// 140B400D0: using guessed type wchar_t aBactive_1[8];
// 140B400E0: using guessed type wchar_t aNxp_6[4];
// 140B400E8: using guessed type wchar_t aNlevel_14[7];
// 140B400F8: using guessed type wchar_t aBunlocked_3[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC4BD4: using guessed type int dword_140DC4BD4;
// 140DC4BD8: using guessed type __int64 qword_140DC4BD8;
// 140DC4BE0: using guessed type int dword_140DC4BE0;

