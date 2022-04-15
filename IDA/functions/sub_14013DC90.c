//----- (000000014013DC90) ----------------------------------------------------
char __fastcall sub_14013DC90(__int64 a1)
{
	int v2; // eax

	if (*(_BYTE*)(a1 + 24))
		goto LABEL_4;
	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 216i64))(*(_QWORD*)(a1 + 40));
	if (v2)
	{
		*(_BYTE*)(a1 + 24) = 1;
	LABEL_4:
		LOBYTE(v2) = 1;
	}
	return v2;
}

