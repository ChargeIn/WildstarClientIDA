//----- (0000000140496390) ----------------------------------------------------
__int64 __fastcall sub_140496390(__int64* a1)
{
	__int64 v1; // rax
	unsigned int v2; // ebx
	int v3; // ecx
	__int64 v4; // rax
	__int64 v6; // rax

	v1 = *a1;
	if (*a1)
		v2 = *(_DWORD*)(v1 + 20);
	else
		v2 = 0;
	v3 = *(_DWORD*)(v1 + 12);
	if (v3 == 27)
	{
		v4 = sub_14021D1C0(v2);
		if (v4)
			return *(unsigned int*)(v4 + 4);
	}
	else if (v3 == 21)
	{
		v6 = sub_140221E40(v2);
		if (v6)
			return *(unsigned int*)(v6 + 4);
	}
	return v2;
}

