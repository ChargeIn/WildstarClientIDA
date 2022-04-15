//----- (000000014059D130) ----------------------------------------------------
__int64 __fastcall sub_14059D130(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	_DWORD* v7; // rcx
	int v8; // esi
	__int64* v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // rdx
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	_QWORD* v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+38h] [rbp-10h]

	v1 = a1[4];
	v13 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v15 = a1;
	v16 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v7 = (_DWORD*)a1[3];
	v8 = v6;
	v14 = v6;
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || v7[2])
		v9 = (__int64*)sub_140056AB0(a1, 1u);
	else
		v9 = 0i64;
	sub_1405A2A60(a1, (__int64)&v13, v9);
	sub_1405A24F0(a1, (__int64)&v13, v9);
	sub_1405A20D0(a1, (__int64)&v13, v9);
	v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
	v11 = a1[2];
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v11, v8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

