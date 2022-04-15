//----- (00000001405A48C0) ----------------------------------------------------
__int64 __fastcall sub_1405A48C0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // eax

	v2 = *(_DWORD*)(a1 + 12);
	if (!v2)
		return 0i64;
	while (a2 > v2)
		a2 = *(_DWORD*)(a1 + 12);
	if (a2)
		return *(unsigned int*)(a1 + 48i64 * (a2 - 1) + 32);
	else
		return 0i64;
}

