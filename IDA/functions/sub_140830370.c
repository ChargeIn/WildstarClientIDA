//----- (0000000140830370) ----------------------------------------------------
_QWORD* __fastcall sub_140830370(__int64 a1, _QWORD* a2, __int64 a3, int a4)
{
	_DWORD* v4; // rax
	_DWORD* v5; // rcx
	_QWORD* v6; // rax

	if (!a3)
		goto LABEL_8;
	v4 = *(_DWORD**)(a3 + 56);
	v5 = *(_DWORD**)(a3 + 64);
	if (v4 == v5)
		goto LABEL_8;
	do
	{
		if (*v4 == a4)
			break;
		v4 += 3;
	} while (v4 != v5);
	if (v4 == v5 || (v6 = v4 + 1) == 0i64)
	{
	LABEL_8:
		*a2 = 0i64;
		return a2;
	}
	else
	{
		*a2 = *v6;
		return a2;
	}
}

