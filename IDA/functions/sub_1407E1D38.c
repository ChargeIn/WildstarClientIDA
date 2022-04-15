//----- (00000001407E1D38) ----------------------------------------------------
__int64 __fastcall sub_1407E1D38(int a1)
{
	int v1; // edx
	_DWORD* i; // r8

	v1 = 0;
	for (i = &unk_14095D610; a1 != *i; i += 4)
	{
		if ((unsigned __int64)++v1 >= 0x17)
			return 0i64;
	}
	return *((_QWORD*)&unk_14095D610 + 2 * v1 + 1);
}

