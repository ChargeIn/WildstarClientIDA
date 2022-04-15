//----- (0000000140418240) ----------------------------------------------------
__int64 __fastcall sub_140418240(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	unsigned int v9; // edx
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // rdx
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]
	_QWORD* v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = v2;
	if (v2 && v2[118])
	{
		v4 = a1[4];
		v14 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v16 = a1;
		v17 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0((__int64)a1);
		v6 = a1[2];
		v7 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		a1[2] += 16i64;
		v8 = sub_1400578C0((__int64)a1);
		v9 = v3[118];
		LODWORD(v6) = v8;
		v15 = v8;
		sub_140452AD0(v10, v9, (__int64)&v14);
		v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v12 = a1[2];
		*(_QWORD*)v12 = *v11;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v12, v6);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1404182DD: variable 'v10' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

