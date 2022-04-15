//----- (000000014049E610) ----------------------------------------------------
__int64 __fastcall sub_14049E610(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // ecx
	int v5; // r8d

	v4 = 0;
	v5 = a3 - 1;
	if (!v5)
		return (a4 & *(_DWORD*)(qword_140C65898 + 26456)) != 0;
	if (v5 == 1)
		LOBYTE(v4) = (a4 & *(_DWORD*)(qword_140C65898 + 26456)) == 0;
	return v4;
}
// 140C65898: using guessed type __int64 qword_140C65898;

