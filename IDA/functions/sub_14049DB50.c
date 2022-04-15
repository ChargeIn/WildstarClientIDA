//----- (000000014049DB50) ----------------------------------------------------
__int64 __fastcall sub_14049DB50(__int64 a1, __int64 a2, int a3)
{
	unsigned int v4; // ecx
	int v5; // r8d

	if (!a2 || a2 != *(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v4 = 0;
	v5 = a3 - 1;
	if (v5)
	{
		if (v5 == 1)
		{
			LOBYTE(v4) = *(_DWORD*)(qword_140C65898 + 28388) != 3;
			return v4;
		}
	}
	else
	{
		return *(_DWORD*)(qword_140C65898 + 28388) == 3;
	}
	return v4;
}
// 140C65898: using guessed type __int64 qword_140C65898;

