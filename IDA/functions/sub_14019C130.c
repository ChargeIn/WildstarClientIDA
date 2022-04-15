//----- (000000014019C130) ----------------------------------------------------
void __fastcall sub_14019C130(__int64 a1, unsigned int* a2)
{
	unsigned int v2; // r9d
	unsigned int v3; // r8d

	v2 = *a2;
	v3 = *(_DWORD*)(a1 + 52);
	if (*(_DWORD*)(a1 + 56) < *a2)
		v2 = *(_DWORD*)(a1 + 56);
	if (v3 < v2)
		v3 = v2;
	*a2 = v3;
}

