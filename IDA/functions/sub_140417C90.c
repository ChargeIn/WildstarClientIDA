//----- (0000000140417C90) ----------------------------------------------------
int* __fastcall sub_140417C90(_QWORD* a1, unsigned int a2)
{
	__int64* v4; // rax
	__int64 v5; // r8
	int* v7; // rax

	v4 = (__int64*)sub_140417660((__int64)a1, a2);
	if (v4 && (v5 = *v4) != 0 && *(_DWORD*)(v5 + 1176) && v5 != -32)
	{
		if (*(_DWORD*)(v5 + 1176))
			return (int*)(v5 + 32);
	}
	else
	{
		v7 = sub_140417BF0(a1, a2);
		if (v7)
			return v7 + 2;
	}
	return 0i64;
}

