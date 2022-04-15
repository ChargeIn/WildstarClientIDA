//----- (000000014049FF30) ----------------------------------------------------
__int64 __fastcall sub_14049FF30(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
	__int64 v6; // rax
	unsigned int v7; // ecx
	BOOL v8; // edx
	int v9; // r8d

	if (!a4)
		return a3 == 2;
	if (*(_DWORD*)(a4 + 14164) && (v6 = *(_QWORD*)(a4 + 24)) != 0 && (*(_QWORD*)(v6 + 392) || *(_QWORD*)(v6 + 456)))
	{
		v7 = 0;
		v8 = (*(_DWORD*)(a4 + 14160) & a5) == 0;
	}
	else
	{
		v7 = 0;
		v8 = 0;
	}
	v9 = a3 - 1;
	if (v9)
	{
		if (v9 == 1)
		{
			LOBYTE(v7) = !v8;
			return v7;
		}
	}
	else
	{
		return v8;
	}
	return v7;
}

