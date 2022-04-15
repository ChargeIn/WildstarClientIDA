#include "../winhttp.h"

//----- (000000014067D9A0) ----------------------------------------------------
__int64 __fastcall sub_14067D9A0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // r12
	__int64 v4; // rcx
	__int64 v6; // r15
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // r14d
	int* v13; // r15
	__int16* v14; // rax
	unsigned __int16* v15; // rbp
	__int64 v16; // rdi
	__int64 v17; // rax
	int v18; // edi
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // ebp
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	_DWORD* v26; // rcx
	__int64* v27; // rax
	__int64 v28; // rdx
	__int64* v29; // rax
	__int64 v30; // r11
	__int64 v31; // r9
	int v32; // r8d
	__int64 v33; // rdx
	__int64(__fastcall * *v34)(); // [rsp+20h] [rbp-58h] BYREF
	int v35; // [rsp+28h] [rbp-50h]
	_QWORD* v36; // [rsp+30h] [rbp-48h]
	int v37; // [rsp+38h] [rbp-40h]
	__int64 v38; // [rsp+40h] [rbp-38h] BYREF
	__int64 v39; // [rsp+48h] [rbp-30h]

	v2 = sub_14067B760(a1);
	v3 = (_QWORD*)v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& (v4 = v3[6], *(_DWORD*)(*(_QWORD*)v4 + 12i64) == 23))
	{
		v6 = sub_140221180(*(_DWORD*)(*(_QWORD*)v4 + 20i64));
		if (v6)
		{
			v7 = a1[4];
			v34 = off_140B569F0;
			v8 = *(_QWORD*)(v7 + 112);
			v36 = a1;
			v37 = 1;
			if (*(_QWORD*)(v7 + 120) >= v8)
				sub_14005E2C0((__int64)a1);
			v9 = a1[2];
			v10 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			a1[2] += 16i64;
			v35 = sub_1400578C0((__int64)a1);
			v12 = 0;
			v13 = (int*)(v6 + 4);
			do
			{
				if (*v13)
				{
					v14 = sub_14034BDD0(v11, *v13);
					v15 = (unsigned __int16*)v14;
					if (v14)
					{
						if (*v14)
						{
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v16 = a1[2];
							v17 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v16 + 8) = 5;
							*(_QWORD*)v16 = v17;
							a1[2] += 16i64;
							v18 = sub_1400578C0((__int64)a1);
							v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
							v20 = a1[2];
							*(_QWORD*)v20 = *v19;
							*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
							a1[2] += 16i64;
							sub_1400F0870((__int64)a1, v20, L"strName", v15);
							a1[2] -= 16i64;
							v21 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v3 + 80i64))(v3, v12);
							v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
							v23 = a1[2];
							*(_QWORD*)v23 = *v22;
							*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
							a1[2] += 16i64;
							v24 = (unsigned __int64*)sub_14018F0E0(&v38, L"bIsCompleted")[1];
							if (v24)
							{
								v25 = -1i64;
								do
									++v25;
								while (*((_BYTE*)v24 + v25));
								sub_140058710((__int64)a1, v24, v25);
							}
							else
							{
								*(_DWORD*)(a1[2] + 8i64) = 0;
								a1[2] += 16i64;
							}
							if (v39)
								sub_14018B900(v39, 0);
							v26 = (_DWORD*)a1[2];
							v26[2] = 1;
							*v26 = v21 != 0;
							a1[2] += 16i64;
							v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
							sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
							a1[2] -= 48i64;
							sub_1400FB1D0((__int64)&v34);
							sub_1400579E0((__int64)a1, v28, v18);
						}
					}
				}
				++v12;
				++v13;
			} while (v12 < 0xA);
			v29 = sub_14005C3C0(*(_QWORD*)(v36[4] + 160i64), v35);
			v31 = *(_QWORD*)(v30 + 16);
			v32 = v35;
			v33 = *v29;
			*(_QWORD*)v31 = *v29;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
			*(_QWORD*)(v30 + 16) += 16i64;
			sub_1400579E0(v30, v33, v32);
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
// 14067DAAB: variable 'v11' is possibly undefined
// 14067DC1B: variable 'v28' is possibly undefined
// 14067DC4A: variable 'v30' is possibly undefined
// 140B31868: using guessed type wchar_t aStrname_70[8];
// 140B31878: using guessed type wchar_t aBiscompleted_0[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

