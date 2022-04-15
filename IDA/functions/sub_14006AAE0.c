//----- (000000014006AAE0) ----------------------------------------------------
void __fastcall sub_14006AAE0(__int64 a1, int* a2)
{
	int v4; // ecx
	int v5; // ecx

	sub_14006A700(a1, a2);
	if (*a2 == 12)
	{
		v4 = a2[2];
		if ((v4 & 0x100) == 0 && v4 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
	}
	v5 = *(_DWORD*)(a1 + 60) + 1;
	if (v5 > *(unsigned __int8*)(*(_QWORD*)a1 + 115i64))
	{
		if (v5 >= 250)
			sub_140062CF0(*(_QWORD*)(a1 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64));
		*(_BYTE*)(*(_QWORD*)a1 + 115i64) = v5;
	}
	sub_14006A980(a1, a2, (*(_DWORD*)(a1 + 60))++);
}

