#include "../winhttp.h"

//----- (00000001407333A0) ----------------------------------------------------
__int64 __fastcall sub_1407333A0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rdx
	unsigned __int64 v7; // rbp
	_QWORD* v8; // rax
	int v9; // r10d
	__int64 v10; // rdx
	unsigned __int64 v11; // rbx
	__int64 v12; // rdx
	unsigned int v13; // esi
	__int64 v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // r8
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]
	_QWORD* v20; // [rsp+30h] [rbp-18h]
	int v21; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v20 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v18 = off_140B569F0;
	v21 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v19 = v5;
	v6 = (__int64)(*(_QWORD*)(qword_140C659F0 + 256) - *(_QWORD*)(qword_140C659F0 + 248)) >> 3;
	v7 = (unsigned int)v6;
	if (!(_DWORD)v6)
	{
		v8 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v10 = v1[2];
		*(_QWORD*)v10 = *v8;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
		goto LABEL_19;
	}
	v11 = 0i64;
	do
	{
		if ((unsigned int)((__int64)(*(_QWORD*)(qword_140C659F0 + 256) - *(_QWORD*)(qword_140C659F0 + 248)) >> 3) <= (unsigned int)v11)
			goto LABEL_13;
		v12 = *(_QWORD*)(*(_QWORD*)(qword_140C659F0 + 248) + 8i64 * (unsigned int)v11);
		if (!v12)
			goto LABEL_13;
		v13 = *(_DWORD*)(v12 + 8);
		if (qword_140C63840)
		{
			v14 = qword_140C63840(off_140A6A980, v13, qword_140C63858);
			goto LABEL_14;
		}
		if (dword_140C65068 || (int)sub_140206A00() < 0)
			LABEL_13:
		v14 = 0i64;
		else
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64258 + 24i64))(qword_140C64258, v13);
	LABEL_14:
		if (v14)
			sub_1406A6C80(v1, v14, (__int64)&v18, 0);
		++v11;
	} while (v11 < v7);
	v1 = v20;
	v15 = sub_14005C3C0(*(_QWORD*)(v20[4] + 160i64), v19);
	v16 = v1[2];
	*(_QWORD*)v16 = *v15;
	v10 = *((unsigned int*)v15 + 2);
	*(_DWORD*)(v16 + 8) = v10;
LABEL_19:
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v10, v9);
	return 1i64;
}
// 14073345A: conditional instruction was optimized away because edx.4!=0
// 140733549: variable 'v9' is possibly undefined
// 140A6A980: using guessed type wchar_t *off_140A6A980[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64258: using guessed type __int64 qword_140C64258;
// 140C65068: using guessed type int dword_140C65068;
// 140C659F0: using guessed type __int64 qword_140C659F0;

