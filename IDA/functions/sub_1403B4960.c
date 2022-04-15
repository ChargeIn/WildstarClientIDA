//----- (00000001403B4960) ----------------------------------------------------
__int64 __fastcall sub_1403B4960(__int64 a1, _DWORD* a2, unsigned int a3)
{
	unsigned int v3; // eax

	v3 = 0;
	if (!a3)
		return 89i64;
	while (!*a2 || *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320i64) != *a2)
	{
		++v3;
		++a2;
		if (v3 >= a3)
			return 89i64;
	}
	return 0i64;
}

