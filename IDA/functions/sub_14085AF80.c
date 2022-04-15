//----- (000000014085AF80) ----------------------------------------------------
char __fastcall sub_14085AF80(__int64 a1, __int64 a2)
{
	if (!a1)
		return 0;
	while (a2 != a1)
	{
		a1 = *(_QWORD*)(a1 + 72);
		if (!a1)
			return 0;
	}
	return 1;
}

