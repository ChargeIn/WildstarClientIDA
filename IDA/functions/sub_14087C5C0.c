//----- (000000014087C5C0) ----------------------------------------------------
char __fastcall sub_14087C5C0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // r8

	v2 = *(_DWORD**)(a1 + 8);
	v3 = *(_DWORD**)(a1 + 16);
	if (v2 == v3)
		return 0;
	while (*v2 != a2)
	{
		v2 += 2;
		if (v2 == v3)
			return 0;
	}
	return 1;
}

