//----- (000000014049EF70) ----------------------------------------------------
__int64 __fastcall sub_14049EF70(__int64 a1, int a2, int a3)
{
	unsigned int v3; // ecx
	int v4; // edx

	v3 = 0;
	v4 = a2 - 1;
	if (!v4)
		return *(_DWORD*)(qword_140C65898 + 25636) == a3;
	if (v4 == 1)
		LOBYTE(v3) = *(_DWORD*)(qword_140C65898 + 25636) != a3;
	return v3;
}
// 140C65898: using guessed type __int64 qword_140C65898;

