//----- (000000014049E730) ----------------------------------------------------
__int64 __fastcall sub_14049E730(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rcx
	int v4; // r9d

	v3 = *(_QWORD*)(a2 + 3840);
	if (!v3 || (v4 = *(_DWORD*)(v3 + 128), ((v4 - 3) & 0xFFFFFFF9) != 0) || v4 == 5)
		v3 = a2;
	if (*(_QWORD*)(v3 + 3840))
	{
		if (a3 == 1)
			return 1i64;
	}
	else if (a3 == 2)
	{
		return 1i64;
	}
	return 0i64;
}

