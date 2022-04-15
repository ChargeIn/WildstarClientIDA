//----- (00000001403A69B0) ----------------------------------------------------
__int64 sub_1403A69B0()
{
	unsigned int v0; // r9d
	__int64 v1; // rdx
	int v2; // r10d
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // eax
	__int64 v7; // [rsp+8h] [rbp+8h]

	v0 = 0;
	v1 = *(_QWORD*)(qword_140C65898 + 7168);
	v2 = 0;
	v3 = *(_QWORD*)(v1 + 8);
	v4 = v1;
	while (v3)
	{
		if (*(int*)(v3 + 32) < 12)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == v1 || (v5 = *(_DWORD*)(v4 + 32), v5 > 12) || v5 >= 12 && *(_DWORD*)(v4 + 36))
		v7 = *(_QWORD*)(qword_140C65898 + 7168);
	else
		v7 = v4;
	if (v7 != v1 && *(_DWORD*)(v7 + 48) == 1)
		v2 = *(_DWORD*)(v7 + 52);
	LOBYTE(v0) = v2 != 0;
	return v0;
}
// 140C65898: using guessed type __int64 qword_140C65898;

