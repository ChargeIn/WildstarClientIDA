#include "../winhttp.h"

//----- (0000000140760460) ----------------------------------------------------
__int64 __fastcall sub_140760460(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // eax
	_DWORD* v5; // rdx
	_DWORD* v6; // rbx
	__int64 v7; // rdx
	unsigned __int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rcx
	unsigned __int64 v11; // rsi
	int* v12; // rbx
	unsigned int v13; // r14d
	int* v14; // rax
	int* v15; // rax
	int* v16; // rdi
	const char** v17; // rax
	const char** v18; // rax
	__int64 v19; // rax
	__int64 v20; // rdx
	unsigned int v21; // edi
	__int64(__fastcall * *v23)(); // [rsp+28h] [rbp-49h] BYREF
	int v24; // [rsp+30h] [rbp-41h]
	_QWORD* v25; // [rsp+38h] [rbp-39h]
	int v26; // [rsp+40h] [rbp-31h]
	__int64(__fastcall * *v27)(); // [rsp+48h] [rbp-29h] BYREF
	int v28; // [rsp+50h] [rbp-21h]
	_QWORD* v29; // [rsp+58h] [rbp-19h]
	__int64(__fastcall * **v30)(); // [rsp+60h] [rbp-11h]
	__int64 v31; // [rsp+68h] [rbp-9h] BYREF
	__int64 v32; // [rsp+70h] [rbp-1h]
	__int64 v33; // [rsp+78h] [rbp+7h]
	__int64 v34; // [rsp+80h] [rbp+Fh]
	__int64 v35; // [rsp+88h] [rbp+17h]
	__int64 v36; // [rsp+90h] [rbp+1Fh]
	__int64 v37; // [rsp+98h] [rbp+27h]
	__int64 v38; // [rsp+D8h] [rbp+67h] BYREF

	v25 = a1;
	v26 = 1;
	v31 = 0i64;
	v32 = 0i64;
	v33 = 0i64;
	v34 = 0i64;
	v35 = 0i64;
	v36 = 0i64;
	v37 = 0i64;
	v24 = -2;
	v23 = off_140B569F0;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v4 = sub_1400578C0((__int64)a1);
	v24 = v4;
	v5 = (_DWORD*)v25[3];
	if ((unsigned __int64)v5 >= v25[2] || (v6 = dword_140A12138, v5 == dword_140A12138) || v5[2] != 5)
		sub_140056570(a1, 1u, "must be a table of item ids");
	sub_1400579E0((__int64)v25, (__int64)v5, v4);
	v7 = (__int64)v25;
	v8 = v25[2];
	if (v25[3] < v8)
		v6 = (_DWORD*)v25[3];
	*(_QWORD*)v8 = *(_QWORD*)v6;
	*(_DWORD*)(v8 + 8) = v6[2];
	*(_QWORD*)(v7 + 16) += 16i64;
	v9 = sub_1400578C0((__int64)v25);
	v10 = (__int64)v25;
	v27 = off_140B56A08;
	v24 = v9;
	v29 = v25;
	v28 = -2;
	v11 = 0i64;
	v30 = &v23;
	v12 = 0i64;
	*(_DWORD*)(v25[2] + 8i64) = 0;
	*(_QWORD*)(v10 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v27[2])(&v27, 0xFFFFFFFFi64);
	v25[2] -= 16i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v30)[1])(v30)
		&& (unsigned int)sub_1400FCBA0((__int64)&v27)
		&& v11 < 0xA)
	{
		if ((int)sub_1400FC8E0((__int64)&v27, (int*)&v38) < 0)
			sub_140056570(a1, 1u, "must be a table of item ids");
		v13 = v38;
		v14 = sub_1400B5DF0(qword_140C658F0, v38, 0i64);
		if (!v14
			|| !(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65BC0 + 8i64))(qword_140C65BC0, v14))
		{
			v17 = (const char**)sub_14018DED0(&v38, (__int64)"invalid item id: %d", v13);
			sub_140056570(a1, 1u, *v17);
		}
		v15 = sub_14018DB00((__int64)v12, v11 + 1, 4i64);
		v15[v11] = v13;
		v16 = v15;
		if (v12 != v15)
		{
			sub_1407DB590(v15, v12, 4 * v11);
			if (v12)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
			v12 = v16;
		}
		++v11;
	}
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v30)[1])(v30)
		&& (unsigned int)sub_1400FCBA0((__int64)&v27))
	{
		v18 = (const char**)sub_14018DED0(&v38, (__int64)"number of items may not exceed %d", 10i64);
		sub_140056570(a1, 1u, *v18);
	}
	v19 = v33;
	if ((_DWORD)v11)
		v19 = (__int64)v12;
	HIDWORD(v32) = v11;
	v33 = v19;
	v21 = sub_14075FD90(a1, (__int64)&v31);
	v27 = off_140B56A08;
	if (v29)
		sub_1400579E0((__int64)v29, v20, v28);
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
	v23 = off_140B56A08;
	if (v25)
		sub_1400579E0((__int64)v25, v20, v24);
	return v21;
}
// 14076077C: variable 'v20' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65BC0: using guessed type __int64 qword_140C65BC0;

