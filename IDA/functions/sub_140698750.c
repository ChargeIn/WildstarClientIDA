//----- (0000000140698750) ----------------------------------------------------
__int64 __fastcall sub_140698750(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rdx
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+28h] [rbp-20h]
	_QWORD* v14; // [rsp+30h] [rbp-18h]
	int v15; // [rsp+38h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && sub_1405845F0(v3, *(_QWORD*)(v4 + 8)))
	{
		v5 = a1[4];
		v12 = off_140B569F0;
		v6 = *(_QWORD*)(v5 + 112);
		v14 = a1;
		v15 = 1;
		if (*(_QWORD*)(v5 + 120) >= v6)
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		LODWORD(v7) = sub_1400578C0((__int64)a1);
		v13 = v7;
		sub_14069D3D0((__int64)&v12);
		v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v10 = a1[2];
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v10, v7);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140698788: variable 'v3' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

