//----- (0000000140030DA0) ----------------------------------------------------
__int64 __fastcall sub_140030DA0(__int64 a1, _BYTE* a2)
{
	__int64 v2; // rsi
	int* v5; // r14

	v2 = *(_QWORD*)(a1 + 8);
	v5 = sub_14018DB00(*(_QWORD*)a1, v2 + 1, 1i64);
	*((_BYTE*)v5 + v2) = *a2;
	if (*(int**)a1 != v5)
	{
		sub_1407DB590(v5, *(int**)a1, *(_QWORD*)(a1 + 8));
		if (*(_QWORD*)a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
		*(_QWORD*)a1 = v5;
	}
	*(_QWORD*)(a1 + 8) = v2 + 1;
	return v2;
}

