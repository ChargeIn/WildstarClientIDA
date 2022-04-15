//----- (00000001406A9830) ----------------------------------------------------
__int64 __fastcall sub_1406A9830(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	__int64 v4; // rdx
	_DWORD* v5; // rdx
	__int64 result; // rax
	_DWORD* v7; // rax

	v2 = sub_1406A93C0(a1);
	v3 = 0;
	v4 = v2;
	if (v2)
	{
		v7 = (_DWORD*)a1[2];
		LOBYTE(v3) = *(_DWORD*)(v4 + 48) == 5;
		v7[2] = 1;
		*v7 = v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v5 = (_DWORD*)a1[2];
		result = 1i64;
		*v5 = 0;
		v5[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}

