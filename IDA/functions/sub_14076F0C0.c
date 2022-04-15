//----- (000000014076F0C0) ----------------------------------------------------
__int64 __fastcall sub_14076F0C0(_DWORD* a1, _DWORD* a2)
{
	unsigned int v2; // ecx
	unsigned int v3; // edx
	__int64 result; // rax

	if (*a1 == *a2)
	{
		v2 = a1[1];
		v3 = a2[1];
		if (v2 >= v3)
			return v2 > v3;
		else
			return 0xFFFFFFFFi64;
	}
	else
	{
		result = 1i64;
		if (*a1 < *a2)
			return 0xFFFFFFFFi64;
	}
	return result;
}

