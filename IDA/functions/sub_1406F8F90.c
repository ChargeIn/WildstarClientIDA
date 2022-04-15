#include "../winhttp.h"

//----- (00000001406F8F90) ----------------------------------------------------
__int64 __fastcall sub_1406F8F90(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // r10d
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned int v11; // edi
	__int64 v12; // rax
	__int64 v13; // r14
	__int64 v14; // r8
	__int64 v15; // rdi
	__int64 v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r10d
	__int64 v20; // rcx
	_QWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int16* v23; // r10
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	__int64 v28; // rdx
	__int64 v29; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v32; // rax
	__int64 v33; // r8
	__int64 v34; // rdx
	int v35; // r10d
	__int64(__fastcall * *v37)(); // [rsp+30h] [rbp-38h] BYREF
	int v38; // [rsp+38h] [rbp-30h]
	__int64 v39; // [rsp+40h] [rbp-28h]
	int v40; // [rsp+48h] [rbp-20h]
	__int64 v41; // [rsp+70h] [rbp+8h]

	v1 = a1;
	v39 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v37 = off_140B569F0;
	v40 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = sub_1400578C0(v1);
	v38 = v5;
	v6 = *(_QWORD*)(qword_140C65910 + 8);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(int*)(v8 + 32) < 1)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v41 = v7, *(int*)(v7 + 32) > 1))
		v41 = *(_QWORD*)(qword_140C65910 + 8);
	if (v41 != v6 && v41 != -40)
	{
		v9 = *(_QWORD*)(v41 + 48);
		v10 = *(_QWORD*)(v9 + 16);
		if (v10 != v9)
		{
			while (1)
			{
				if (*(_DWORD*)(v10 + 40) || *(_DWORD*)(v10 + 44))
				{
					v11 = *(_DWORD*)(v10 + 32);
					if (qword_140C63840)
					{
						v12 = qword_140C63840(off_140A6A168, v11, qword_140C63858);
					LABEL_21:
						v13 = v12;
						if (v12)
						{
							if ((*(_BYTE*)(v12 + 4) & 2) != 0)
							{
								v14 = *(unsigned int*)(v12 + 24);
								if (!(_DWORD)v14
									|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD, __int64(__fastcall**)()))(*(_QWORD*)qword_140C659A0 + 24i64))(
										qword_140C659A0,
										*(_QWORD*)(qword_140C65898 + 120),
										v14,
										0i64,
										0i64,
										0,
										v37))
								{
									if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
										sub_14005E2C0(v1);
									v15 = *(_QWORD*)(v1 + 16);
									v16 = sub_14005C1B0(v1, 0, 0);
									*(_DWORD*)(v15 + 8) = 5;
									*(_QWORD*)v15 = v16;
									*(_QWORD*)(v1 + 16) += 16i64;
									LODWORD(v15) = sub_1400578C0(v1);
									v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
									v18 = *(_QWORD*)(v1 + 16);
									*(_QWORD*)v18 = *v17;
									*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F06F0(v1, v18, L"nId", v19);
									*(_QWORD*)(v1 + 16) -= 16i64;
									sub_14034BDD0(v20, *(_DWORD*)(v13 + 8));
									v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
									v22 = *(_QWORD*)(v1 + 16);
									*(_QWORD*)v22 = *v21;
									*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F0870(v1, v22, L"strName", v23);
									*(_QWORD*)(v1 + 16) -= 16i64;
									v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
									*(_QWORD*)v25 = *v24;
									*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F06F0(v1, v26, L"nRampIndex", v27);
									*(_QWORD*)(v1 + 16) -= 16i64;
									sub_1400FB1D0((__int64)&v37);
									sub_1400579E0(v1, v28, v15);
								}
							}
						}
						goto LABEL_28;
					}
					if (!dword_140C63EAC && (int)sub_1401FCCC0() >= 0)
					{
						v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(
							qword_140C63AE0,
							v11);
						goto LABEL_21;
					}
				}
			LABEL_28:
				v29 = *(_QWORD*)(v10 + 24);
				if (v29)
				{
					v10 = *(_QWORD*)(v10 + 24);
					for (i = *(_QWORD*)(v29 + 16); i; i = *(_QWORD*)(i + 16))
						v10 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v10 = j;
					if (*(_QWORD*)(v10 + 24) != j)
						v10 = j;
				}
				if (v10 == *(_QWORD*)(v41 + 48))
				{
					v1 = v39;
					v5 = v38;
					break;
				}
			}
		}
	}
	v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v5);
	v33 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v33 = *v32;
	v34 = *((unsigned int*)v32 + 2);
	*(_DWORD*)(v33 + 8) = v34;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v34, v35);
	return 1i64;
}
// 1406F91B0: variable 'v19' is possibly undefined
// 1406F91BE: variable 'v20' is possibly undefined
// 1406F91FA: variable 'v23' is possibly undefined
// 1406F922B: variable 'v25' is possibly undefined
// 1406F923D: variable 'v26' is possibly undefined
// 1406F923D: variable 'v27' is possibly undefined
// 1406F9259: variable 'v28' is possibly undefined
// 1406F9302: variable 'v35' is possibly undefined
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140B415A8: using guessed type wchar_t aNrampindex[11];
// 140B415C0: using guessed type wchar_t aStrname_85[8];
// 140B415D0: using guessed type wchar_t aNid_30[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65910: using guessed type __int64 qword_140C65910;
// 140C659A0: using guessed type __int64 qword_140C659A0;

