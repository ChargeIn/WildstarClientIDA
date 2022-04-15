//----- (00000001406650D0) ----------------------------------------------------
__int64 __fastcall sub_1406650D0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	int v5; // eax
	int v6; // r8d
	int v7; // ecx
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64));
		v6 = 0;
		if (((v5 - 1) & 0xFFFFFFFC) != 0 || (v7 = 1, v5 == 3))
			v7 = 0;
		v8 = (_DWORD*)a1[2];
		LOBYTE(v6) = v7 != 0;
		v8[2] = 1;
		*v8 = v6;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

