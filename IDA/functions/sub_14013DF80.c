//----- (000000014013DF80) ----------------------------------------------------
char __fastcall sub_14013DF80(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	char result; // al

	if (*(_BYTE*)(a1 + 24))
		return 1;
	v3 = *(_QWORD*)(a1 + 40);
	if (!v3 || (result = sub_140100DA0(v3, a2)) != 0)
	{
		*(_BYTE*)(a1 + 24) = 1;
		return 1;
	}
	return result;
}

