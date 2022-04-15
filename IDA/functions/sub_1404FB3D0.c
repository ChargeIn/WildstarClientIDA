#include "../winhttp.h"

//----- (00000001404FB3D0) ----------------------------------------------------
__int64 __fastcall sub_1404FB3D0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r15
	__int64 v4; // rcx
	__int64* v5; // r13
	char* v6; // rax
	int* v7; // rsi
	__int64 v8; // rbx
	int* v9; // rax
	unsigned int v10; // r14d
	unsigned __int16* v11; // r12
	unsigned __int64 v12; // rbx
	int v13; // eax
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // esi
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // rbx
	_DWORD* v21; // rax
	__int64* v22; // rax
	unsigned __int64 v23; // rbx
	_QWORD* v24; // rax
	__int64 v25; // r10
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	_DWORD* v28; // rax
	__int64* v29; // rax
	_QWORD* v30; // rax
	__int64 v31; // rdx
	unsigned __int64* v32; // rdx
	unsigned __int64 v33; // r8
	_DWORD* v34; // rax
	__int64* v35; // rax
	_QWORD* v36; // rax
	__int64 v37; // rdx
	int v38; // r10d
	_QWORD* v39; // rax
	__int64 v40; // rdx
	int v41; // r9d
	_QWORD* v42; // rax
	__int64 v43; // r10
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	_DWORD* v46; // rax
	__int64* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // rdx
	int v50; // r9d
	_QWORD* v51; // rax
	__int64 v52; // r10
	unsigned __int64* v53; // rdx
	_DWORD* v54; // rax
	__int64* v55; // rax
	_QWORD* v56; // rax
	__int64 v57; // rdx
	__int64 v58; // [rsp+20h] [rbp-50h] BYREF
	int* v59; // [rsp+28h] [rbp-48h]
	__int64 v60; // [rsp+30h] [rbp-40h]
	int v61; // [rsp+38h] [rbp-38h]
	int v62; // [rsp+3Ch] [rbp-34h]
	__int64 v63; // [rsp+40h] [rbp-30h] BYREF
	__int64 v64; // [rsp+48h] [rbp-28h]
	unsigned __int16* v65; // [rsp+98h] [rbp+28h] BYREF

	result = sub_1404F87C0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = *(_QWORD*)(result + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(__int64**)(v3 + 2168);
		if (v5)
		{
			v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
			sub_14018F2D0(&v58, v6);
			v7 = v59;
			v8 = (v60 - (__int64)v59) >> 1;
			v9 = sub_14018B280(2 * v8 + 18, 0);
			v10 = 0;
			if (v9)
			{
				*((_QWORD*)v9 + 1) = v8;
				*(_QWORD*)v9 = off_140B55060;
			}
			else
			{
				v9 = 0i64;
			}
			v11 = (unsigned __int16*)(v9 + 4);
			v12 = v8;
			sub_1407DB590(v9 + 4, v7, v12 * 2);
			v11[v12] = 0;
			v65 = v11;
			if (v7)
				sub_14018B900((__int64)v7, 0);
			v13 = sub_140030420(v3 + 2336, (__int64)&v58, &v65, 23);
			LODWORD(v65) = v13;
			if ((int)(v13 + 0x80000000) < 0 || v13 == -2147467260)
			{
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v14 = a1[2];
				v15 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v14 + 8) = 5;
				*(_QWORD*)v14 = v15;
				a1[2] += 16i64;
				v16 = sub_1400578C0((__int64)a1);
				v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
				v18 = a1[2];
				*(_QWORD*)v18 = *v17;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
				a1[2] += 16i64;
				if ((_DWORD)v65 == -2147467260)
				{
					v19 = (unsigned __int64*)sub_14018F0E0(&v58, L"bUnsupportedVersion")[1];
					if (v19)
					{
						v20 = -1i64;
						do
							++v20;
						while (*((_BYTE*)v19 + v20));
						sub_140058710((__int64)a1, v19, v20);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v59)
						sub_14018B900((__int64)v59, 0);
					v21 = (_DWORD*)a1[2];
					*v21 = 1;
					v21[2] = 1;
					a1[2] += 16i64;
					v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					a1[2] -= 48i64;
				}
				else
				{
					sub_1400F06F0((__int64)a1, v18, L"nRace", v60);
					v23 = -1i64;
					a1[2] -= 16i64;
					if ((_DWORD)v58)
					{
						v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
						*(_QWORD*)v25 = *v24;
						*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
						a1[2] += 16i64;
						v26 = (unsigned __int64*)sub_14018F0E0(&v63, L"bRaceUnavailable")[1];
						if (v26)
						{
							v27 = -1i64;
							do
								++v27;
							while (*((_BYTE*)v26 + v27));
							sub_140058710((__int64)a1, v26, v27);
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						if (v64)
							sub_14018B900(v64, 0);
						v28 = (_DWORD*)a1[2];
						*v28 = 1;
						v28[2] = 1;
						a1[2] += 16i64;
						v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 48i64;
					}
					if (HIDWORD(v58))
					{
						v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
						v31 = a1[2];
						*(_QWORD*)v31 = *v30;
						*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
						a1[2] += 16i64;
						v32 = (unsigned __int64*)sub_14018F0E0(&v63, L"bRaceDoesntMatch")[1];
						if (v32)
						{
							v33 = -1i64;
							do
								++v33;
							while (*((_BYTE*)v32 + v33));
							sub_140058710((__int64)a1, v32, v33);
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						if (v64)
							sub_14018B900(v64, 0);
						v34 = (_DWORD*)a1[2];
						*v34 = 1;
						v34[2] = 1;
						a1[2] += 16i64;
						v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 48i64;
					}
					if (v62)
					{
						v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
						v37 = a1[2];
						*(_QWORD*)v37 = *v36;
						*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v37, L"nRequiredEntitlementId", v38);
						a1[2] -= 16i64;
					}
					v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
					v40 = a1[2];
					v41 = HIDWORD(v60);
					*(_QWORD*)v40 = *v39;
					*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v40, L"nGender", v41);
					a1[2] -= 16i64;
					if ((_DWORD)v59)
					{
						v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
						*(_QWORD*)v43 = *v42;
						*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
						a1[2] += 16i64;
						v44 = (unsigned __int64*)sub_14018F0E0(&v63, L"bGenderDoesntMatch")[1];
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
						if (v64)
							sub_14018B900(v64, 0);
						v46 = (_DWORD*)a1[2];
						*v46 = 1;
						v46[2] = 1;
						a1[2] += 16i64;
						v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 48i64;
					}
					v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
					v49 = a1[2];
					v50 = v61;
					*(_QWORD*)v49 = *v48;
					*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v49, L"nFaction", v50);
					a1[2] -= 16i64;
					if (HIDWORD(v59))
					{
						v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
						*(_QWORD*)v52 = *v51;
						*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
						a1[2] += 16i64;
						v53 = (unsigned __int64*)sub_14018F0E0(&v63, L"bFactionDoesntMatch")[1];
						if (v53)
						{
							do
								++v23;
							while (*((_BYTE*)v53 + v23));
							sub_140058710((__int64)a1, v53, v23);
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						if (v64)
							sub_14018B900(v64, 0);
						v54 = (_DWORD*)a1[2];
						*v54 = 1;
						v54[2] = 1;
						a1[2] += 16i64;
						v55 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v55, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 48i64;
					}
					if (!(_DWORD)v65)
					{
						sub_14002F5D0(v3 + 2336, v5, *(_QWORD*)(v3 + 2160));
						sub_14002FE90(v3 + 2336, (__int64)v5);
						sub_140030080(v3 + 2336, (__int64)v5);
					}
				}
				v56 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
				v57 = a1[2];
				v10 = 1;
				*(_QWORD*)v57 = *v56;
				*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
				a1[2] += 16i64;
				sub_1400579E0((__int64)a1, v57, v16);
			}
			if (v11)
				(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 8);
			return v10;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 1404FB661: variable 'v25' is possibly undefined
// 1404FB7ED: variable 'v38' is possibly undefined
// 1404FB863: variable 'v43' is possibly undefined
// 1404FB962: variable 'v52' is possibly undefined
// 140B0EFD0: using guessed type wchar_t aBfactiondoesnt_0[20];
// 140B0F028: using guessed type wchar_t aNgender_1[8];
// 140B0F038: using guessed type wchar_t aNrequiredentit_2[23];
// 140B0F068: using guessed type wchar_t aNfaction_1[9];
// 140B0F080: using guessed type wchar_t aBgenderdoesntm_0[19];
// 140B0F0A8: using guessed type wchar_t aNrace_1[6];
// 140B0F0B8: using guessed type wchar_t aBunsupportedve_0[20];
// 140B0F0E0: using guessed type wchar_t aBracedoesntmat_0[17];
// 140B0F108: using guessed type wchar_t aBraceunavailab_0[17];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

