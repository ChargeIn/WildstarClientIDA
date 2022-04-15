//----- (0000000140173A30) ----------------------------------------------------
char __fastcall sub_140173A30(__int64 a1, float a2)
{
	char result; // al
	float v5; // xmm1_4
	float v6; // xmm0_4

	*(_DWORD*)(*(_QWORD*)(a1 + 1040) + 704i64) = *(_DWORD*)(a1 + 704);
	result = sub_1401301F0(*(_QWORD*)(a1 + 1032));
	if (!result)
	{
		result = sub_1401301F0(*(_QWORD*)(a1 + 1024));
		if (!result)
			*(_DWORD*)(a1 + 1068) = 0;
	}
	if (*(_DWORD*)(a1 + 1068))
	{
		v5 = a2 + *(float*)(a1 + 1064);
		v6 = a2 + *(float*)(a1 + 1060);
		*(float*)(a1 + 1064) = v5;
		*(float*)(a1 + 1060) = v6;
		if (v5 > 0.1)
		{
			result = sub_140173690(a1);
			*(float*)(a1 + 1064) = *(float*)(a1 + 1064) - 0.1;
		}
	}
	return result;
}

