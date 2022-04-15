//----- (00000001406CAAA0) ----------------------------------------------------
__int64 __fastcall sub_1406CAAA0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // r8
	_DWORD* v4; // rcx
	int v5; // eax
	BOOL v6; // ecx

	v3 = sub_1406CA0C0(a1);
	if (v3)
	{
		v4 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = v4[2];
		v6 = v5 && (v5 != 1 || *v4);
		LOBYTE(v2) = v6;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 104i64))(v3, v2);
	}
	return 0i64;
}
// 1406CAAF2: variable 'v2' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

