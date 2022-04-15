//----- (0000000140685F70) ----------------------------------------------------
__int64 __fastcall sub_140685F70(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int16* v12; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = a1[2];
		v6 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		a1[2] += 16i64;
		LODWORD(v5) = *(_DWORD*)(v4 + 56);
		sub_140058710((__int64)a1, (unsigned __int64*)"idZone", 6ui64);
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)(int)v5;
		a1[2] += 16i64;
		v8 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v8, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v9 = sub_14024DB80(*(_DWORD*)(v4 + 56));
		if (v9)
			v12 = sub_14034BDD0(v11, *(_DWORD*)(v9 + 4));
		else
			v12 = (__int16*)&unk_1409F537C;
		sub_1400F0090((__int64)a1, v10, (unsigned __int64*)"strZoneName", (unsigned __int16*)v12);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140686070: variable 'v11' is possibly undefined
// 14068608B: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

