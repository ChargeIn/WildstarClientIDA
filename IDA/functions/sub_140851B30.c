//----- (0000000140851B30) ----------------------------------------------------
char __fastcall sub_140851B30(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v3; // rax
	int v4; // edx
	_DWORD* v5; // rax
	_DWORD* v6; // rcx

	v3 = *(_QWORD*)(a1 + 32);
	if (!v3)
	{
	LABEL_11:
		LOBYTE(v3) = 0;
		return v3;
	}
	while (*(_DWORD*)(v3 + 64) != a2)
	{
		v3 = *(_QWORD*)(v3 + 16);
		if (!v3)
			return v3;
	}
	v4 = *(unsigned __int8*)(v3 + 72);
	v5 = (_DWORD*)*a3;
	if (v4)
	{
		v6 = (_DWORD*)a3[1];
		if (v5 == v6)
		{
		LABEL_10:
			sub_14087C4C0((__int64)a3, v4);
		}
		else
		{
			while (*v5 != v4)
			{
				if (++v5 == v6)
					goto LABEL_10;
			}
		}
		goto LABEL_11;
	}
	a3[1] = v5;
	sub_14087C4C0((__int64)a3, 0);
	LOBYTE(v3) = 1;
	return v3;
}

