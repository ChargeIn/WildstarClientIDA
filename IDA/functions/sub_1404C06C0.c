//----- (00000001404C06C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404C06C0(__int64 a1)
{
	int v1; // edx

	v1 = *(_DWORD*)(a1 + 128);
	return (unsigned int)(v1 - 1) <= 2 || v1 == 4 && (unsigned int)sub_140724910(a1);
}

