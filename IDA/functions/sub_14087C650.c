//----- (000000014087C650) ----------------------------------------------------
char __fastcall sub_14087C650(__int64 a1, int a2, _WORD* a3)
{
	_DWORD* v3; // r10
	_DWORD* v4; // r9
	_DWORD* i; // rax

	v3 = *(_DWORD**)(a1 + 8);
	v4 = *(_DWORD**)(a1 + 16);
	for (i = v3; i != v4; ++i)
	{
		if (*i == a2)
			break;
	}
	if (i == v4)
		return 0;
	*a3 = i - v3;
	return 1;
}

