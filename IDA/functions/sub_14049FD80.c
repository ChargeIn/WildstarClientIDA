//----- (000000014049FD80) ----------------------------------------------------
__int64 __fastcall sub_14049FD80(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // edx
	unsigned int v5; // r10d
	__int64 v6; // rax
	int v7; // r8d

	v4 = 0;
	v5 = 0;
	if (qword_140C65970)
	{
		v6 = *(_QWORD*)(qword_140C65970 + 88);
		if (v6)
			LOBYTE(v5) = a4 == ***(_DWORD***)(v6 + 72);
	}
	v7 = a3 - 1;
	if (!v7)
		return v5;
	if (v7 == 1)
		LOBYTE(v4) = v5 == 0;
	return v4;
}
// 140C65970: using guessed type __int64 qword_140C65970;

