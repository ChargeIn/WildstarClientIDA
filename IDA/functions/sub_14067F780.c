//----- (000000014067F780) ----------------------------------------------------
__int64 __fastcall sub_14067F780(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD** v3; // rbx
	__int64 v4; // r15
	__int64 v6; // rax
	__int64 v7; // rbp
	float v8; // xmm6_4
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	int v12; // r12d
	int v13; // r14d
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int64 v16; // rsi
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	_DWORD* v19; // rcx
	__int64* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	int v24; // r11d
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	int v28; // r11d
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int v32; // r11d
	__int64 v33; // rcx
	_QWORD* v34; // rax
	__int64 v35; // rdx
	unsigned __int16* v36; // r10
	_QWORD* v37; // rax
	__int64 v38; // r10
	unsigned __int64* v39; // rdx
	__int64 v40; // rax
	__int64* v41; // rax
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	__int64 v45; // [rsp+20h] [rbp-48h] BYREF
	__int64 v46; // [rsp+28h] [rbp-40h]

	v2 = sub_14067B760(a1);
	v3 = (_QWORD**)v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& qword_140C65970
		&& *(_DWORD*)(qword_140C65970 + 8) == 3
		&& *(_DWORD*)(*v3[6] + 12i64) == 18
		&& ((unsigned int(__fastcall*)(_QWORD**))(*v3)[5])(v3))
	{
		v4 = sub_14021E2C0(*(_DWORD*)(*v3[6] + 20i64));
		if (v4)
		{
			v6 = ((__int64(__fastcall*)(_QWORD**, __int64))(*v3)[16])(v3, 1347241296i64);
			v7 = v6;
			if (v6 && *(_DWORD*)(v6 + 24))
			{
				v8 = sub_14056B7B0(v6);
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v9 = a1[2];
				v10 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v9 + 8) = 5;
				*(_QWORD*)v9 = v10;
				a1[2] += 16i64;
				v11 = sub_1400578C0((__int64)a1);
				v12 = *(_DWORD*)(v7 + 32);
				v13 = v11;
				v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				v15 = a1[2];
				*(_QWORD*)v15 = *v14;
				*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
				a1[2] += 16i64;
				v16 = -1i64;
				v17 = (unsigned __int64*)sub_14018F0E0(&v45, L"bIsWaiting")[1];
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
				if (v46)
					sub_14018B900(v46, 0);
				v19 = (_DWORD*)a1[2];
				v19[2] = 1;
				*v19 = v12 != 0;
				a1[2] += 16i64;
				v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				*(_QWORD*)v22 = *v21;
				*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v23, L"nWaitDuration", v24);
				a1[2] -= 16i64;
				v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v27, L"nNeeded", v28);
				a1[2] -= 16i64;
				v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				*(_QWORD*)v30 = *v29;
				*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v31, L"nCompleted", v32);
				a1[2] -= 16i64;
				sub_14034BDD0(v33, *(_DWORD*)(v4 + 24));
				v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				v35 = a1[2];
				*(_QWORD*)v35 = *v34;
				*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v35, L"strInfo", v36);
				a1[2] -= 16i64;
				v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				*(_QWORD*)v38 = *v37;
				*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
				a1[2] += 16i64;
				v39 = (unsigned __int64*)sub_14018F0E0(&v45, L"fRatio")[1];
				if (v39)
				{
					do
						++v16;
					while (*((_BYTE*)v39 + v16));
					sub_140058710((__int64)a1, v39, v16);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v46)
					sub_14018B900(v46, 0);
				v40 = a1[2];
				*(_DWORD*)(v40 + 8) = 3;
				*(double*)v40 = v8;
				a1[2] += 16i64;
				v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				*(_QWORD*)v43 = *v42;
				*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
				a1[2] += 16i64;
				sub_1400579E0((__int64)a1, v44, v13);
				return 1i64;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14067F9BD: variable 'v22' is possibly undefined
// 14067F9CF: variable 'v23' is possibly undefined
// 14067F9CF: variable 'v24' is possibly undefined
// 14067FA01: variable 'v26' is possibly undefined
// 14067FA13: variable 'v27' is possibly undefined
// 14067FA13: variable 'v28' is possibly undefined
// 14067FA45: variable 'v30' is possibly undefined
// 14067FA57: variable 'v31' is possibly undefined
// 14067FA57: variable 'v32' is possibly undefined
// 14067FA65: variable 'v33' is possibly undefined
// 14067FAA2: variable 'v36' is possibly undefined
// 14067FACD: variable 'v38' is possibly undefined
// 14067FB8F: variable 'v43' is possibly undefined
// 14067FBA1: variable 'v44' is possibly undefined
// 140B318D0: using guessed type wchar_t aBiswaiting[11];
// 140B31A28: using guessed type wchar_t aFratio_0[7];
// 140B31A58: using guessed type wchar_t aNcompleted_4[11];
// 140B31A70: using guessed type wchar_t aStrinfo[8];
// 140B31A80: using guessed type wchar_t aNwaitduration[14];
// 140B31AA0: using guessed type wchar_t aNneeded_5[8];
// 140C65970: using guessed type __int64 qword_140C65970;

