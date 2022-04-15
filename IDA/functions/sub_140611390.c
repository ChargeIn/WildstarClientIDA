//----- (0000000140611390) ----------------------------------------------------
__int64 __fastcall sub_140611390(__int64 a1, unsigned int a2)
{
	int v2; // edx

	if (a2 < 6 && (v2 = 1 << (a2 + 2)) != 0)
		return (unsigned int)v2 & *(_DWORD*)(a1 + 68);
	else
		return 0i64;
}

