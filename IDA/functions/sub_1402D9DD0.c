//----- (00000001402D9DD0) ----------------------------------------------------
__int64 __fastcall sub_1402D9DD0(unsigned int a1, unsigned int a2, __int64 a3)
{
	unsigned int v3; // ecx
	unsigned int v4; // edx

	v3 = *(_DWORD*)(a3 + 4i64 * a1);
	v4 = *(_DWORD*)(a3 + 4i64 * a2);
	if (v3 >= v4)
		return v3 > v4;
	else
		return 0xFFFFFFFFi64;
}

