//----- (00000001406A97C0) ----------------------------------------------------
__int64 __fastcall sub_1406A97C0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	_DWORD* v4; // rdx
	__int64 result; // rax
	int v6; // edx
	_DWORD* v7; // rax

	v2 = sub_1406A93C0(a1);
	v3 = 0;
	if (v2)
	{
		if (!qword_140C7DFE0 || (v6 = 1, v2 != qword_140C7DFE0))
			v6 = 0;
		v7 = (_DWORD*)a1[2];
		LOBYTE(v3) = v6 != 0;
		v7[2] = 1;
		*v7 = v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

