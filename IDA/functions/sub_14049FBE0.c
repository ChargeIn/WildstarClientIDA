//----- (000000014049FBE0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049FBE0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v7; // rdx
	unsigned int v8; // r8d
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // [rsp+20h] [rbp-18h]

	if (!qword_140C65948)
		return 0i64;
	v7 = *(_QWORD*)(qword_140C65948 + 48);
	v8 = 0;
	v9 = *(_QWORD*)(v7 + 8);
	v10 = v7;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a4)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == v7 || (v11 = v10, a4 < *(_DWORD*)(v10 + 32)))
		v11 = *(_QWORD*)(qword_140C65948 + 48);
	if (v11 != v7)
	{
		v10 = *(_QWORD*)(v11 + 40);
		if (v10)
			v8 = *(_DWORD*)(v10 + 20);
	}
	return sub_1404A2090(v10, a3, v8, a5);
}
// 140C65948: using guessed type __int64 qword_140C65948;

