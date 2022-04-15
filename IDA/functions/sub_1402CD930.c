//----- (00000001402CD930) ----------------------------------------------------
__int64 __fastcall sub_1402CD930(__int64* a1, unsigned __int64 a2, _QWORD* a3)
{
	__int64 v3; // rax
	unsigned __int64 v7; // rbp
	__int64 v8; // rax
	unsigned __int64 v9; // rdi
	__int64 v10; // rdx
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v12[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v3 + 64))(a1, v12, 3i64);
	if (a1[4]
		&& (v7 = sub_1402CD1C0(a1), a2 >= v7)
		&& a2 < (*(__int64(__fastcall**)(__int64*))(*a1 + 328))(a1)
		&& (v8 = sub_1402D5890(a1[4]),
			v9 = (a2 - v7) << 7,
			v10 = *(unsigned int*)(*(_QWORD*)(v8 + 16) + v9 + 96),
			(_DWORD)v10))
	{
		if (a3)
			*a3 = v10;
		return *(_QWORD*)(*(_QWORD*)(v8 + 16) + v9 + 104);
	}
	else
	{
		if (a3)
			*a3 = 0i64;
		return 0i64;
	}
}
// 1402CD930: using guessed type int var_18[6];

