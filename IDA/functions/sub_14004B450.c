//----- (000000014004B450) ----------------------------------------------------
__int64 __fastcall sub_14004B450(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // r15
	char* v5; // rax
	int* v6; // rsi
	__int64 v7; // rbx
	int* v8; // rax
	unsigned int v9; // r14d
	unsigned __int16* v10; // r13
	unsigned __int64 v11; // rbx
	_DWORD* v12; // rax
	unsigned int v13; // eax
	int v14; // r12d
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // esi
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // rbx
	_DWORD* v22; // rax
	__int64* v23; // rax
	unsigned __int64 v24; // rbx
	_QWORD* v25; // rax
	__int64 v26; // r10
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	_DWORD* v29; // rax
	__int64* v30; // rax
	_QWORD* v31; // rax
	__int64 v32; // rdx
	unsigned __int64* v33; // rdx
	unsigned __int64 v34; // r8
	_DWORD* v35; // rax
	__int64* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // rdx
	int v39; // r10d
	_QWORD* v40; // rax
	__int64 v41; // rdx
	int v42; // r9d
	_QWORD* v43; // rax
	__int64 v44; // r10
	unsigned __int64* v45; // rdx
	unsigned __int64 v46; // r8
	_DWORD* v47; // rax
	__int64* v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // rdx
	int v51; // r9d
	_QWORD* v52; // rax
	__int64 v53; // r10
	unsigned __int64* v54; // rdx
	_DWORD* v55; // rax
	__int64* v56; // rax
	_QWORD* v57; // rax
	__int64 v58; // rdx
	__int64 v60; // [rsp+20h] [rbp-48h] BYREF
	int* v61; // [rsp+28h] [rbp-40h]
	__int64 v62; // [rsp+30h] [rbp-38h]
	int v63; // [rsp+38h] [rbp-30h]
	int v64; // [rsp+3Ch] [rbp-2Ch]
	__int64 v65; // [rsp+40h] [rbp-28h] BYREF
	__int64 v66; // [rsp+48h] [rbp-20h]
	unsigned __int16* v67; // [rsp+98h] [rbp+30h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4)
		return 0i64;
	v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v60, v5);
	v6 = v61;
	v7 = (v62 - (__int64)v61) >> 1;
	v8 = sub_14018B280(2 * v7 + 18, 0);
	v9 = 0;
	if (v8)
	{
		*((_QWORD*)v8 + 1) = v7;
		*(_QWORD*)v8 = off_140B55060;
	}
	else
	{
		v8 = 0i64;
	}
	v10 = (unsigned __int16*)(v8 + 4);
	v11 = v7;
	sub_1407DB590(v8 + 4, v6, v11 * 2);
	v10[v11] = 0;
	v67 = v10;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v12 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
	{
		v13 = 23;
	}
	else
	{
		v13 = sub_140056D60(a1, 3u);
		if (v13 > 0x17)
			v13 = 23;
	}
	v14 = sub_140030420(v4 + 32, (__int64)&v60, &v67, v13);
	if ((int)(v14 + 0x80000000) < 0 || v14 == -2147467260)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v15 = a1[2];
		v16 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v15 + 8) = 5;
		*(_QWORD*)v15 = v16;
		a1[2] += 16i64;
		v17 = sub_1400578C0((__int64)a1);
		v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v19 = a1[2];
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		a1[2] += 16i64;
		if (v14 == -2147467260)
		{
			v20 = (unsigned __int64*)sub_14018F0E0(&v60, L"bUnsupportedVersion")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				sub_140058710((__int64)a1, v20, v21);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v61)
				sub_14018B900((__int64)v61, 0);
			v22 = (_DWORD*)a1[2];
			*v22 = 1;
			v22[2] = 1;
			a1[2] += 16i64;
			v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
		}
		else
		{
			sub_1400F06F0((__int64)a1, v19, L"nRace", v62);
			v24 = -1i64;
			a1[2] -= 16i64;
			if ((_DWORD)v60)
			{
				v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				a1[2] += 16i64;
				v27 = (unsigned __int64*)sub_14018F0E0(&v65, L"bRaceUnavailable")[1];
				if (v27)
				{
					v28 = -1i64;
					do
						++v28;
					while (*((_BYTE*)v27 + v28));
					sub_140058710((__int64)a1, v27, v28);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v66)
					sub_14018B900(v66, 0);
				v29 = (_DWORD*)a1[2];
				*v29 = 1;
				v29[2] = 1;
				a1[2] += 16i64;
				v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
			}
			if (HIDWORD(v60))
			{
				v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
				v32 = a1[2];
				*(_QWORD*)v32 = *v31;
				*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
				a1[2] += 16i64;
				v33 = (unsigned __int64*)sub_14018F0E0(&v65, L"bRaceDoesntMatch")[1];
				if (v33)
				{
					v34 = -1i64;
					do
						++v34;
					while (*((_BYTE*)v33 + v34));
					sub_140058710((__int64)a1, v33, v34);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v66)
					sub_14018B900(v66, 0);
				v35 = (_DWORD*)a1[2];
				*v35 = 1;
				v35[2] = 1;
				a1[2] += 16i64;
				v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
			}
			if (v64)
			{
				v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
				v38 = a1[2];
				*(_QWORD*)v38 = *v37;
				*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v38, L"nRequiredEntitlementId", v39);
				a1[2] -= 16i64;
			}
			v40 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			v41 = a1[2];
			v42 = HIDWORD(v62);
			*(_QWORD*)v41 = *v40;
			*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v41, L"nGender", v42);
			a1[2] -= 16i64;
			if ((_DWORD)v61)
			{
				v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
				*(_QWORD*)v44 = *v43;
				*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
				a1[2] += 16i64;
				v45 = (unsigned __int64*)sub_14018F0E0(&v65, L"bGenderDoesntMatch")[1];
				if (v45)
				{
					v46 = -1i64;
					do
						++v46;
					while (*((_BYTE*)v45 + v46));
					sub_140058710((__int64)a1, v45, v46);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v66)
					sub_14018B900(v66, 0);
				v47 = (_DWORD*)a1[2];
				*v47 = 1;
				v47[2] = 1;
				a1[2] += 16i64;
				v48 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v48, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
			}
			v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			v50 = a1[2];
			v51 = v63;
			*(_QWORD*)v50 = *v49;
			*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v50, L"nFaction", v51);
			a1[2] -= 16i64;
			if (HIDWORD(v61))
			{
				v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
				*(_QWORD*)v53 = *v52;
				*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
				a1[2] += 16i64;
				v54 = (unsigned __int64*)sub_14018F0E0(&v65, L"bFactionDoesntMatch")[1];
				if (v54)
				{
					do
						++v24;
					while (*((_BYTE*)v54 + v24));
					sub_140058710((__int64)a1, v54, v24);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v66)
					sub_14018B900(v66, 0);
				v55 = (_DWORD*)a1[2];
				*v55 = 1;
				v55[2] = 1;
				a1[2] += 16i64;
				v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
			}
			if (!v14)
			{
				sub_14002F5D0(v4 + 32, *(__int64**)(v4 + 16), 0i64);
				sub_14002FE90(v4 + 32, *(_QWORD*)(v4 + 16));
				sub_140030080(v4 + 32, *(_QWORD*)(v4 + 16));
			}
		}
		v57 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
		v58 = a1[2];
		v9 = 1;
		*(_QWORD*)v58 = *v57;
		*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v58, v17);
	}
	if (v10)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 8);
	return v9;
}
// 14004B701: variable 'v26' is possibly undefined
// 14004B88D: variable 'v39' is possibly undefined
// 14004B903: variable 'v44' is possibly undefined
// 14004BA02: variable 'v53' is possibly undefined
// 1409FF0A0: using guessed type wchar_t aNrace_0[6];
// 1409FF0B0: using guessed type wchar_t aBunsupportedve[20];
// 1409FF0D8: using guessed type wchar_t aBracedoesntmat[17];
// 1409FF100: using guessed type wchar_t aBraceunavailab[17];
// 1409FF128: using guessed type wchar_t aNgender_0[8];
// 1409FF138: using guessed type wchar_t aNrequiredentit_1[23];
// 1409FF168: using guessed type wchar_t aNfaction_0[9];
// 1409FF180: using guessed type wchar_t aBgenderdoesntm[19];
// 1409FF1C8: using guessed type wchar_t aBfactiondoesnt[20];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

