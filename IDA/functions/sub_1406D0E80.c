//----- (00000001406D0E80) ----------------------------------------------------
__int64 __fastcall sub_1406D0E80(__int64 a1)
{
	int v1; // edx
	int v2; // edx
	int v3; // edx

	v1 = *(_DWORD*)(a1 + 1100);
	if (!v1)
		return *(unsigned int*)(qword_140C65898 + 172);
	v2 = v1 - 1;
	if (v2)
	{
		v3 = v2 - 1;
		if (!v3)
			return *(unsigned int*)(qword_140C65898 + 220);
		if (v3 == 8)
			return *(unsigned int*)(qword_140C65898 + 244);
	}
	return *(unsigned int*)(qword_140C65898 + 196);
}
// 140C65898: using guessed type __int64 qword_140C65898;

