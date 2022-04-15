//----- (0000000140698310) ----------------------------------------------------
__int64 __fastcall sub_140698310(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64(__fastcall * *v15)(); // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	_QWORD* v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+38h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = a1[4];
		v15 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v17 = a1;
		v18 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v10 = sub_1400578C0((__int64)a1);
		v11 = *(unsigned int*)(v5 + 20);
		LODWORD(v8) = v10;
		v16 = v10;
		sub_1400FAFE0((__int64)&v15, v11, (__int64)off_140C39558, 4ui64);
		v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		v13 = a1[2];
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v13, v8);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140698348: variable 'v3' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C39558: using guessed type wchar_t *off_140C39558[4];

