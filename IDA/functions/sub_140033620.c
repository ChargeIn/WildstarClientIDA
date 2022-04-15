//----- (0000000140033620) ----------------------------------------------------
void __fastcall sub_140033620(__int64 a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rsi

	if (*(_QWORD*)(a1 + 8) > a2)
	{
		*(_QWORD*)(a1 + 8) = a2;
	}
	else
	{
		v4 = sub_14018DB00(*(_QWORD*)a1, a2, 1i64);
		v5 = v4;
		if (*(int**)a1 != v4)
		{
			sub_1407DB590(v4, *(int**)a1, *(_QWORD*)(a1 + 8));
			if (*(_QWORD*)a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
			*(_QWORD*)a1 = v5;
		}
		*(_QWORD*)(a1 + 8) = a2;
	}
}

