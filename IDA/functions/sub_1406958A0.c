//----- (00000001406958A0) ----------------------------------------------------
__int64 __fastcall sub_1406958A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	_DWORD* v5; // rax
	__int64 result; // rax
	_DWORD* v7; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		if (*(_DWORD*)(*(_QWORD*)v4 + 4i64) == 75)
		{
			v7 = (_DWORD*)a1[2];
			result = 1i64;
			*v7 = 1;
			v7[2] = 1;
			a1[2] += 16i64;
		}
		else
		{
			v5 = (_DWORD*)a1[2];
			*v5 = 0;
			v5[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

