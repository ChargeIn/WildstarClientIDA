//----- (000000014068B410) ----------------------------------------------------
__int64 __fastcall sub_14068B410(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // r11
	__int64 v13; // r9
	int v14; // r8d
	__int64 v15; // rdx
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]
	_QWORD* v19; // [rsp+30h] [rbp-18h]
	int v20; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			(v5 = sub_140498A40(qword_140C65980, v4, 0)) != 0))
	{
		v6 = a1[4];
		v17 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v19 = a1;
		v20 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v18 = sub_1400578C0((__int64)a1);
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5);
		sub_1405F13F0((__int64)&v17, v10);
		v11 = sub_14005C3C0(*(_QWORD*)(v19[4] + 160i64), v18);
		v13 = *(_QWORD*)(v12 + 16);
		v14 = v18;
		*(_QWORD*)v13 = *v11;
		v15 = *((unsigned int*)v11 + 2);
		*(_DWORD*)(v13 + 8) = v15;
		*(_QWORD*)(v12 + 16) += 16i64;
		sub_1400579E0(v12, v15, v14);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14068B50C: variable 'v12' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

