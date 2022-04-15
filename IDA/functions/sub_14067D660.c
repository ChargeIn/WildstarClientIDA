#include "../winhttp.h"

//----- (000000014067D660) ----------------------------------------------------
__int64 __fastcall sub_14067D660(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // r12
	__int64 v4; // rcx
	__int64 v6; // r14
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // r15d
	__int64 v13; // r14
	int v14; // edx
	__int16* v15; // rax
	unsigned __int16* v16; // rsi
	__int64 v17; // rdi
	__int64 v18; // rax
	int v19; // edi
	_QWORD* v20; // rax
	__int64 v21; // rdx
	int v22; // esi
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	_DWORD* v27; // rcx
	__int64* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int v32; // r11d
	__int64 v33; // rdx
	__int64* v34; // rax
	__int64 v35; // r11
	__int64 v36; // r9
	int v37; // r8d
	__int64 v38; // rdx
	__int64(__fastcall * *v39)(); // [rsp+20h] [rbp-58h] BYREF
	int v40; // [rsp+28h] [rbp-50h]
	_QWORD* v41; // [rsp+30h] [rbp-48h]
	int v42; // [rsp+38h] [rbp-40h]
	__int64 v43; // [rsp+40h] [rbp-38h] BYREF
	__int64 v44; // [rsp+48h] [rbp-30h]

	v2 = sub_14067B760(a1);
	v3 = (_QWORD*)v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& (v4 = v3[6], *(_DWORD*)(*(_QWORD*)v4 + 12i64) == 20))
	{
		v6 = sub_140220D40(*(_DWORD*)(*(_QWORD*)v4 + 20i64));
		if (v6)
		{
			v7 = a1[4];
			v39 = off_140B569F0;
			v8 = *(_QWORD*)(v7 + 112);
			v41 = a1;
			v42 = 1;
			if (*(_QWORD*)(v7 + 120) >= v8)
				sub_14005E2C0((__int64)a1);
			v9 = a1[2];
			v10 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			a1[2] += 16i64;
			v40 = sub_1400578C0((__int64)a1);
			v12 = 0;
			v13 = v6 + 80;
			do
			{
				v14 = *(_DWORD*)(v13 - 64);
				if (v14)
				{
					v15 = sub_14034BDD0(v11, v14);
					v16 = (unsigned __int16*)v15;
					if (v15)
					{
						if (*v15)
						{
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v17 = a1[2];
							v18 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v17 + 8) = 5;
							*(_QWORD*)v17 = v18;
							a1[2] += 16i64;
							v19 = sub_1400578C0((__int64)a1);
							v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
							v21 = a1[2];
							*(_QWORD*)v21 = *v20;
							*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
							a1[2] += 16i64;
							sub_1400F0870((__int64)a1, v21, L"strName", v16);
							a1[2] -= 16i64;
							v22 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v3 + 80i64))(v3, v12);
							v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
							v24 = a1[2];
							*(_QWORD*)v24 = *v23;
							*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
							a1[2] += 16i64;
							v25 = (unsigned __int64*)sub_14018F0E0(&v43, L"bIsCompleted")[1];
							if (v25)
							{
								v26 = -1i64;
								do
									++v26;
								while (*((_BYTE*)v25 + v26));
								sub_140058710((__int64)a1, v25, v26);
							}
							else
							{
								*(_DWORD*)(a1[2] + 8i64) = 0;
								a1[2] += 16i64;
							}
							if (v44)
								sub_14018B900(v44, 0);
							v27 = (_DWORD*)a1[2];
							v27[2] = 1;
							*v27 = v22 != 0;
							a1[2] += 16i64;
							v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
							sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
							a1[2] -= 48i64;
							v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
							*(_QWORD*)v30 = *v29;
							*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
							a1[2] += 16i64;
							sub_1400F06F0((__int64)a1, v31, L"eBehavior", v32);
							a1[2] -= 16i64;
							sub_1400FB1D0((__int64)&v39);
							sub_1400579E0((__int64)a1, v33, v19);
						}
					}
				}
				++v12;
				v13 += 4i64;
			} while (v12 < 8);
			v34 = sub_14005C3C0(*(_QWORD*)(v41[4] + 160i64), v40);
			v36 = *(_QWORD*)(v35 + 16);
			v37 = v40;
			v38 = *v34;
			*(_QWORD*)v36 = *v34;
			*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
			*(_QWORD*)(v35 + 16) += 16i64;
			sub_1400579E0(v35, v38, v37);
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
// 14067D76C: variable 'v11' is possibly undefined
// 14067D8F0: variable 'v30' is possibly undefined
// 14067D902: variable 'v31' is possibly undefined
// 14067D902: variable 'v32' is possibly undefined
// 14067D91E: variable 'v33' is possibly undefined
// 14067D94D: variable 'v35' is possibly undefined
// 140B31708: using guessed type wchar_t aStrname_69[8];
// 140B31898: using guessed type wchar_t aBiscompleted[13];
// 140B318B8: using guessed type wchar_t aEbehavior[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

