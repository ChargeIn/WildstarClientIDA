//----- (000000014085EF80) ----------------------------------------------------
char __fastcall sub_14085EF80(__int64 a1)
{
	if ((*(_BYTE*)(a1 + 91) & 8) != 0)
		return 1;
	while (*(_QWORD*)(a1 + 72))
	{
		a1 = *(_QWORD*)(a1 + 72);
	LABEL_5:
		if ((*(_BYTE*)(a1 + 91) & 8) != 0)
			return 1;
	}
	a1 = *(_QWORD*)(a1 + 64);
	if (a1)
		goto LABEL_5;
	return 0;
}

