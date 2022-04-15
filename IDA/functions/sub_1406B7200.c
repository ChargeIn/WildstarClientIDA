#include "../winhttp.h"

//----- (00000001406B7200) ----------------------------------------------------
__int64 __fastcall sub_1406B7200(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rax
	int* v4; // r15
	_DWORD* v5; // rax
	int v6; // eax
	unsigned int v7; // r8d
	int v8; // edx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	unsigned __int64 v14; // r12
	__int64(__fastcall * *v15)(); // r13
	unsigned __int64 v16; // rbp
	int v17; // r11d
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rcx
	int v24; // r14d
	_QWORD* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rdx
	int v28; // r11d
	unsigned int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rdx
	_QWORD* v32; // rax
	__int64 v33; // r8
	__int64 v34; // rdx
	int v35; // r11d
	__int64(__fastcall * *v37)(); // [rsp+30h] [rbp-58h] BYREF
	unsigned __int64 v38; // [rsp+38h] [rbp-50h]
	_QWORD* v39; // [rsp+40h] [rbp-48h]
	int v40; // [rsp+48h] [rbp-40h]
	__int64(__fastcall * *v41)(); // [rsp+50h] [rbp-38h] BYREF
	int v42; // [rsp+58h] [rbp-30h]
	_QWORD* v43; // [rsp+60h] [rbp-28h]
	int v44; // [rsp+68h] [rbp-20h]

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_1403A8810(qword_140C65898, *(_DWORD*)(v3 + 8), *(_DWORD*)(v3 + 12))) != 0i64
		&& (v5 = (_DWORD*)(v1[3] + 16i64), (unsigned __int64)v5 < v1[2])
		&& v5 != dword_140A12138
		&& *(int*)(v1[3] + 24i64) > 0
		&& (v6 = sub_140056D60(v1, 2u), v6 < 8))
	{
		v7 = v4[1];
		v8 = *v4;
		v38 = 0i64;
		v37 = 0i64;
		sub_1403A9AB0((__int64)&v37, v8, v7, v6, (__int64*)&v37);
		v9 = v1[4];
		v10 = *(_QWORD*)(v9 + 112);
		v41 = off_140B569F0;
		v43 = v1;
		v44 = 1;
		if (*(_QWORD*)(v9 + 120) >= v10)
			sub_14005E2C0((__int64)v1);
		v11 = v1[2];
		v12 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		v1[2] += 16i64;
		v13 = sub_1400578C0((__int64)v1);
		v14 = v38;
		v15 = v37;
		v16 = 0i64;
		v17 = v13;
		v42 = v13;
		if (v38)
		{
			do
			{
				v18 = v1[4];
				v37 = off_140B569F0;
				v39 = v1;
				v19 = *(_QWORD*)(v18 + 112);
				v40 = 1;
				if (*(_QWORD*)(v18 + 120) >= v19)
					sub_14005E2C0((__int64)v1);
				v20 = v1[2];
				v21 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v20 + 8) = 5;
				*(_QWORD*)v20 = v21;
				v1[2] += 16i64;
				v22 = sub_1400578C0((__int64)v1);
				v23 = *(_QWORD*)(v1[4] + 160i64);
				v24 = v22;
				LODWORD(v38) = v22;
				v25 = sub_14005C3C0(v23, v22);
				v26 = v1[2];
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v27, L"nSlot", v28);
				v1[2] -= 16i64;
				v29 = *((unsigned __int16*)v4 + *((unsigned int*)v15 + v16) + 36);
				if (qword_140C63840)
				{
					v30 = qword_140C63840(
						off_140A6C238,
						*((unsigned __int16*)v4 + *((unsigned int*)v15 + v16) + 36),
						qword_140C63858);
				}
				else if (dword_140C65364)
				{
					v30 = 0i64;
				}
				else if ((int)sub_140224AA0() >= 0)
				{
					v30 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A38 + 24i64))(qword_140C64A38, v29);
				}
				else
				{
					v30 = 0i64;
				}
				if ((unsigned int)sub_140434100(v1, v30))
				{
					sub_1400FB540((__int64)&v37);
					v1[2] -= 16i64;
				}
				sub_1400FB1D0((__int64)&v41);
				sub_1400579E0((__int64)v1, v31, v24);
				++v16;
			} while (v16 < v14);
			v1 = v43;
			v17 = v42;
		}
		v32 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
		v33 = v1[2];
		*(_QWORD*)v33 = *v32;
		v34 = *((unsigned int*)v32 + 2);
		*(_DWORD*)(v33 + 8) = v34;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v34, v35);
		if (v15)
			(*((void(__fastcall**)(__int64(__fastcall**)())) * (v15 - 2) + 1))(v15 - 2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 1406B73F4: variable 'v27' is possibly undefined
// 1406B73F4: variable 'v28' is possibly undefined
// 1406B748A: variable 'v31' is possibly undefined
// 1406B74DF: variable 'v35' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6C238: using guessed type wchar_t *off_140A6C238[2];
// 140B37598: using guessed type wchar_t aNslot[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A38: using guessed type __int64 qword_140C64A38;
// 140C65364: using guessed type int dword_140C65364;
// 140C65898: using guessed type __int64 qword_140C65898;

