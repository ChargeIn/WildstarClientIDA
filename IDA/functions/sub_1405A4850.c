//----- (00000001405A4850) ----------------------------------------------------
__int64 __fastcall sub_1405A4850(__int64 a1, int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v7; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65898 + 26312);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v7 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v7 = *(_QWORD*)(qword_140C65898 + 26312);
	v5 = 0;
	LOBYTE(v5) = v7 != v2 && *(_DWORD*)(v7 + 36) != 0;
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;

