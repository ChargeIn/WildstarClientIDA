//----- (0000000140487750) ----------------------------------------------------
__int64 __fastcall sub_140487750(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r9
	__int64 v4; // r10
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 i; // rax
	__int64 v10; // [rsp+8h] [rbp+8h]
	__int64 v11; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C65928 + 8);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v5;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v4 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v4 == v3 || (v10 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v10 = *(_QWORD*)(qword_140C65928 + 8);
	v7 = v10;
	if (v10 != v3)
		return *(_QWORD*)(v7 + 40);
	if (!a3)
		return 0i64;
	for (i = *(_QWORD*)(qword_140C65928 + 8); v5; v5 = *(_QWORD*)(v5 + 16))
		i = v5;
	if (i == v3 || (v11 = i, *(_DWORD*)(i + 32)))
		v11 = *(_QWORD*)(qword_140C65928 + 8);
	v7 = v11;
	if (v11 == v3)
		return 0i64;
	else
		return *(_QWORD*)(v7 + 40);
}
// 140C65928: using guessed type __int64 qword_140C65928;

