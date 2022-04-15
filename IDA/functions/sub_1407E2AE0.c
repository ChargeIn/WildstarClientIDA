//----- (00000001407E2AE0) ----------------------------------------------------
__int64 __fastcall sub_1407E2AE0(__int64 a1, unsigned __int64 a2)
{
	unsigned int v2; // r9d
	__int64 v4; // r8
	__int64 result; // rax
	unsigned __int64 v6; // rdx

	v2 = 0;
	v4 = a1 + *(int*)(a1 + 60);
	result = v4 + *(unsigned __int16*)(v4 + 20) + 24i64;
	if (!*(_WORD*)(v4 + 6))
		return 0i64;
	while (1)
	{
		v6 = *(unsigned int*)(result + 12);
		if (a2 >= v6 && a2 < (unsigned int)(v6 + *(_DWORD*)(result + 8)))
			break;
		++v2;
		result += 40i64;
		if (v2 >= *(unsigned __int16*)(v4 + 6))
			return 0i64;
	}
	return result;
}

