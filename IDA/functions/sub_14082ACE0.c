//----- (000000014082ACE0) ----------------------------------------------------
__int64 __fastcall sub_14082ACE0(__int64 a1, int a2, int a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	_DWORD** v5; // rax

	v3 = *(_DWORD**)a1;
	v4 = *(_DWORD**)(a1 + 8);
	if (v3 == v4)
		return 20i64;
	do
	{
		if (*v3 == a2)
			break;
		v3 += 4;
	} while (v3 != v4);
	if (v3 == v4)
		return 20i64;
	v5 = (_DWORD**)(v3 + 2);
	if (!v5)
		return 20i64;
	**v5 = a3;
	return 1i64;
}

