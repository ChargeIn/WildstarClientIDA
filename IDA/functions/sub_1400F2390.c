//----- (00000001400F2390) ----------------------------------------------------
char __fastcall sub_1400F2390(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rbx
	__int64 v7; // rax
	__int64 v8; // r8
	_QWORD* v9; // rax
	__int64 v10; // rcx

	v3 = *(_QWORD**)(a1 + 16);
	if (!v3)
		return 0;
	if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
		sub_14005E2C0((__int64)v3);
	v7 = v3[5];
	if (v7 == v3[10])
		v8 = v3[15];
	else
		v8 = *(_QWORD*)(**(_QWORD**)(v7 + 8) + 24i64);
	v9 = sub_140060AB0((__int64)v3, 0, v8);
	v9[4] = a3;
	v10 = v3[2];
	*(_QWORD*)v10 = v9;
	*(_DWORD*)(v10 + 8) = 6;
	v3[2] += 16i64;
	sub_140058A40(*(_QWORD*)(a1 + 16), -10002);
	return 1;
}

