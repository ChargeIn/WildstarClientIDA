//----- (00000001407E6A74) ----------------------------------------------------
__int64 __fastcall sub_1407E6A74(char** a1, __int64 a2)
{
	char* v3; // rbx

	if (!a2 || !a1)
		return 0i64;
	v3 = *a1;
	if (*a1 != (char*)a2)
	{
		*a1 = (char*)a2;
		sub_1407E6734(a2);
		if (v3)
		{
			sub_1407E6958((__int64)v3);
			if (!*(_DWORD*)v3 && v3 != (char*)&unk_140C102F0)
				sub_1407E67C0(v3);
		}
	}
	return a2;
}

