//----- (000000014049C560) ----------------------------------------------------
__int64 __fastcall sub_14049C560(__int64 a1, __int64 a2, int a3, int a4)
{
	int v4; // eax
	__int64 v5; // rcx
	unsigned int v6; // ecx
	int v7; // r8d

	if (a2)
	{
		v4 = *(_DWORD*)(a2 + 220);
	}
	else
	{
		v5 = *(_QWORD*)(qword_140C65898 + 120);
		if (v5)
			v4 = *(_DWORD*)(v5 + 220);
		else
			v4 = 23;
	}
	v6 = 0;
	v7 = a3 - 1;
	if (!v7)
		return a4 == v4;
	if (v7 == 1)
		LOBYTE(v6) = a4 != v4;
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

