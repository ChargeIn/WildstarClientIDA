#include "../winhttp.h"

//----- (00000001404E3E10) ----------------------------------------------------
__int64 __fastcall sub_1404E3E10(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	int v7; // r10d
	_QWORD* v8; // rax
	int v9; // r10d
	__int64 v10; // rdx
	unsigned __int64 v11; // rbp
	unsigned __int64 v12; // r13
	__int64 v13; // r15
	__int64 v14; // rax
	__int64* v15; // r14
	unsigned int v16; // ebx
	__int64 v17; // rax
	__int64 v18; // rsi
	__int64 v19; // rcx
	unsigned __int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // r12d
	__int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // rdx
	unsigned __int64 v27; // r8
	__int64 v28; // rax
	__int64 v29; // rdx
	_QWORD* v30; // rcx
	__int64* v31; // rcx
	BOOL v32; // ebx
	_QWORD* v33; // rax
	__int64 v34; // rdx
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // r8
	BOOL* v37; // rcx
	__int64* v38; // rax
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r8
	__int64(__fastcall * *v43)(); // [rsp+20h] [rbp-78h] BYREF
	int v44; // [rsp+28h] [rbp-70h]
	__int64 v45; // [rsp+30h] [rbp-68h]
	int v46; // [rsp+38h] [rbp-60h]
	__int64(__fastcall * *v47)(); // [rsp+40h] [rbp-58h] BYREF
	__int64 v48; // [rsp+48h] [rbp-50h]
	__int64 v49; // [rsp+50h] [rbp-48h]
	int v50; // [rsp+58h] [rbp-40h]
	__int64 v51; // [rsp+A0h] [rbp+8h] BYREF
	__int64 v52; // [rsp+A8h] [rbp+10h] BYREF

	v1 = a1;
	v45 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v46 = 1;
	v43 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v7 = v6;
	v44 = v6;
	if (!qword_140C65898)
	{
		v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v6);
		v10 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v10 = *v8;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
		goto LABEL_38;
	}
	v11 = 0i64;
	v12 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 112i64);
	if (!v12)
		goto LABEL_37;
	v13 = 0i64;
	do
	{
		v14 = *(_QWORD*)(qword_140C635F0 + 5584);
		if (v11 < *(_QWORD*)(v14 + 112))
		{
			v15 = (__int64*)(v13 + *(_QWORD*)(v14 + 104));
			if (v15)
			{
				v16 = *((_DWORD*)v15 + 2);
				if (qword_140C63840)
				{
					v17 = qword_140C63840(off_140A690C8, v16, qword_140C63858);
				}
				else
				{
					if (dword_140C64170 || (int)sub_1401E89C0() < 0)
						goto LABEL_35;
					v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v16);
				}
				v18 = v17;
				if (v17 && !*(_DWORD*)(v17 + 28))
				{
					v19 = *(_QWORD*)(v1 + 32);
					v47 = off_140B569F0;
					v49 = v1;
					v20 = *(_QWORD*)(v19 + 112);
					v50 = 1;
					if (*(_QWORD*)(v19 + 120) >= v20)
						sub_14005E2C0(v1);
					v21 = *(_QWORD*)(v1 + 16);
					v22 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v21 + 8) = 5;
					*(_QWORD*)v21 = v22;
					*(_QWORD*)(v1 + 16) += 16i64;
					v23 = sub_1400578C0(v1);
					v24 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
					LODWORD(v48) = v23;
					v25 = sub_14005C3C0(v24, v23);
					v26 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v26 = *v25;
					*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F06F0(v1, v26, L"index", v11 + 1);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_1404E34B0((__int64)&v47, v18);
					sub_1404E1D10((__int64)&v47, v18);
					v27 = *v15;
					v28 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 80i64);
					v29 = v28;
					v30 = *(_QWORD**)(v28 + 8);
					while (v30)
					{
						if (v30[4] < v27)
						{
							v30 = (_QWORD*)v30[3];
						}
						else
						{
							v29 = (__int64)v30;
							v30 = (_QWORD*)v30[2];
						}
					}
					if (v29 == v28 || v27 < *(_QWORD*)(v29 + 32))
					{
						v52 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 80i64);
						v31 = &v52;
					}
					else
					{
						v51 = v29;
						v31 = &v51;
					}
					v32 = *v31 != v28;
					v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v23);
					v34 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v34 = *v33;
					*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					v35 = (unsigned __int64*)sub_14018F0E0(&v47, L"bIsNew")[1];
					if (v35)
					{
						v36 = -1i64;
						do
							++v36;
						while (*((_BYTE*)v35 + v36));
						sub_140058710(v1, v35, v36);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
						*(_QWORD*)(v1 + 16) += 16i64;
					}
					if (v48)
						sub_14018B900(v48, 0);
					v37 = *(BOOL**)(v1 + 16);
					v37[2] = 1;
					*v37 = v32;
					*(_QWORD*)(v1 + 16) += 16i64;
					v38 = (__int64*)sub_1400580E0(v1, -3);
					sub_14005EA50(v1, v38, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
					*(_QWORD*)(v1 + 16) -= 48i64;
					sub_1400FB1D0((__int64)&v43);
					sub_1400579E0(v1, v39, v23);
				}
			}
		}
	LABEL_35:
		++v11;
		v13 += 64i64;
	} while (v11 < v12);
	v1 = v45;
	v7 = v44;
LABEL_37:
	v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v7);
	v41 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v41 = *v40;
	v10 = *((unsigned int*)v40 + 2);
	*(_DWORD*)(v41 + 8) = v10;
LABEL_38:
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v10, v9);
	return 1i64;
}
// 1404E4169: variable 'v39' is possibly undefined
// 1404E41DA: variable 'v9' is possibly undefined
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140B0B920: using guessed type wchar_t aIndex_38[6];
// 140B0B930: using guessed type wchar_t aBisnew_0[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C65898: using guessed type __int64 qword_140C65898;

