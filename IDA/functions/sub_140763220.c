//----- (0000000140763220) ----------------------------------------------------
__int64 __fastcall sub_140763220(__int64 a1)
{
	int v1; // r10d
	__int64 v3; // r8
	__int64 v4; // rdx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // [rsp+8h] [rbp+8h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 7168);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(int*)(v5 + 32) < 11)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v6 = *(_DWORD*)(v4 + 32), v6 > 11) || v6 >= 11 && *(_DWORD*)(v4 + 36))
		v9 = *(_QWORD*)(qword_140C65898 + 7168);
	else
		v9 = v4;
	if (v9 != v3 && *(_DWORD*)(v9 + 48) == 1)
		v1 = *(_DWORD*)(v9 + 52);
	v7 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	result = 1i64;
	*(double*)v7 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

