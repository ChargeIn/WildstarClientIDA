//----- (00000001406E9B70) ----------------------------------------------------
__int64 __fastcall sub_1406E9B70(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	unsigned __int8* v9; // r8
	_QWORD* v10; // rax
	__int64 v11; // rdx
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+28h] [rbp-20h]
	_QWORD* v14; // [rsp+30h] [rbp-18h]
	int v15; // [rsp+38h] [rbp-10h]

	v2 = sub_1406E8880(a1, 1u);
	if (*(_QWORD*)(v2 + 2368))
	{
		v4 = a1[4];
		v12 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v14 = a1;
		v15 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0((__int64)a1);
		v6 = a1[2];
		v7 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		a1[2] += 16i64;
		v8 = sub_1400578C0((__int64)a1);
		v9 = *(unsigned __int8**)(v2 + 2368);
		LODWORD(v6) = v8;
		v13 = v8;
		sub_1406E9330(v2, (__int64)&v12, v9);
		v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v11 = a1[2];
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v11, v6);
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

