//----- (0000000140722000) ----------------------------------------------------
__int64 __fastcall sub_140722000(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 i; // rax
	__int64 v7; // r9
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // [rsp+8h] [rbp+8h]
	__int64 v11; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C65978 + 176);
	v4 = v3;
	for (i = *(_QWORD*)(v3 + 8); i; i = *(_QWORD*)(i + 16))
		v4 = i;
	if (v4 == v3 || (v10 = v4, *(_DWORD*)(v4 + 32)))
		v10 = *(_QWORD*)(qword_140C65978 + 176);
	if (v10 == v3)
		return 0i64;
	v7 = *(_QWORD*)(v10 + 48);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v11 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v11 = v7;
	if (v11 == v7)
		return 0i64;
	else
		return *(_QWORD*)(v11 + 40);
}
// 140C65978: using guessed type __int64 qword_140C65978;

