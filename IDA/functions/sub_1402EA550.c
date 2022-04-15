//----- (00000001402EA550) ----------------------------------------------------
__int64 __fastcall sub_1402EA550(__int64 a1, int a2)
{
	unsigned int v2; // r9d
	unsigned int v3; // r8d
	__int64 v5; // rax
	int v6; // edx

	v2 = *(_DWORD*)(a1 + 32);
	v3 = 0;
	if (!v2)
		return *(unsigned __int16*)(a1 + 28);
	while (1)
	{
		v5 = v3 + ((v2 - v3) >> 1);
		v6 = *(unsigned __int16*)(*(_QWORD*)(a1 + 40) + 2 * v5);
		if (a2 >= v6)
			break;
		v2 = v3 + ((v2 - v3) >> 1);
	LABEL_6:
		if (v3 >= v2)
			return *(unsigned __int16*)(a1 + 28);
	}
	if (a2 > v6)
	{
		v3 = v5 + 1;
		goto LABEL_6;
	}
	return *(unsigned __int16*)(*(_QWORD*)(a1 + 48) + 2i64 * (unsigned int)v5);
}

