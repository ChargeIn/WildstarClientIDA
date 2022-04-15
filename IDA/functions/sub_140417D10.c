//----- (0000000140417D10) ----------------------------------------------------
int* __fastcall sub_140417D10(_QWORD* a1, unsigned int a2)
{
	__int64* v4; // rax
	__int64 v5; // r8
	int* v7; // rax

	v4 = (__int64*)sub_140417660((__int64)a1, a2);
	if (v4 && (v5 = *v4) != 0 && *(_DWORD*)(v5 + 1180) && v5 != -344)
	{
		if (*(_DWORD*)(v5 + 1180))
			return (int*)(v5 + 344);
	}
	else
	{
		v7 = sub_140417BF0(a1, a2);
		if (v7)
			return v7 + 39;
	}
	return 0i64;
}

