//----- (00000001406D1BD0) ----------------------------------------------------
_DWORD* __fastcall sub_1406D1BD0(__int64 a1, _DWORD* a2)
{
	_DWORD* v2; // r9
	int v3; // eax
	int v4; // ecx
	int v5; // r8d
	int v6; // r9d
	_DWORD* result; // rax

	v2 = *(_DWORD**)(a1 + 1104);
	if (v2)
	{
		v3 = v2[5];
		v4 = v2[6];
		v5 = v2[7];
		v6 = v2[8];
		*a2 = v3;
		a2[1] = v4;
		a2[2] = v5;
		result = a2;
		a2[3] = v6;
	}
	else
	{
		*(_QWORD*)a2 = 0i64;
		*((_QWORD*)a2 + 1) = 0i64;
		return a2;
	}
	return result;
}

