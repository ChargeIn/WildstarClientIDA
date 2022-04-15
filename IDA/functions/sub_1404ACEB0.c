//----- (00000001404ACEB0) ----------------------------------------------------
__int64 __fastcall sub_1404ACEB0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rcx
	int v9; // edx
	int v10; // ecx
	__int64 v11; // [rsp+30h] [rbp+8h]
	unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

	v12 = a2;
	v2 = qword_140C659D0;
	if (!a2)
		return 2147500037i64;
	v4 = *(_QWORD*)(qword_140C659D0 + 16);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v11 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v11 = *(_QWORD*)(qword_140C659D0 + 16);
	if (v11 == v4)
		return 2147500037i64;
	v7 = *(_QWORD*)(v11 + 40);
	if (!v7)
		return 2147500037i64;
	v8 = *(_QWORD*)(qword_140C65898 + 7152);
	v9 = v8 ? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8) : 0;
	v10 = *(_DWORD*)(*(_QWORD*)v7 + 20i64);
	if (v10 && (v10 != 1 || v9 != 167) && (v10 != 2 || v9 != 166))
		return 2147500037i64;
	*(_QWORD*)sub_140055BE0(v2 + 264, &v12) = v7;
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;

