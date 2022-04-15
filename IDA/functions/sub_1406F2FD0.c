//----- (00000001406F2FD0) ----------------------------------------------------
__int64 __fastcall sub_1406F2FD0(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // eax
	__int64 v4; // rdx
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && (int)v1[2] > 0)
	{
		v3 = sub_140056D60(a1, 1u);
		if (v3 < 5)
		{
			v4 = *(_QWORD*)(qword_140C65A38 + 8i64 * v3 + 184);
			if (v4)
				return sub_1404338E0(a1, *(_QWORD*)(v4 + 8));
		}
	}
	result = 1i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65A38: using guessed type __int64 qword_140C65A38;

