//----- (00000001408F8160) ----------------------------------------------------
__int64 __fastcall sub_1408F8160(__int64 a1)
{
	int v1; // eax
	unsigned int v2; // ecx

	v1 = sub_140837E30(
		a1 + 8,
		*(int**)(*(_QWORD*)(a1 + 24) + 8i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 20i64));
	v2 = 52;
	if (v1 != 52)
		return 1;
	return v2;
}

