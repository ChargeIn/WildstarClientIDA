//----- (0000000140698B80) ----------------------------------------------------
__int64 __fastcall sub_140698B80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rbx
	_QWORD* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+30h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = *(_QWORD*)(v5 + 496);
		v14 = 0i64;
		v13 = 1i64;
		v7 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v7 = v6;
		v7[1] = v13;
		v7[2] = v14;
		v8 = a1[4];
		v9 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v10 = a1[2];
		v12 = v9;
		LODWORD(v13) = 4;
		sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v12, v10);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140698BB4: variable 'v3' is possibly undefined

