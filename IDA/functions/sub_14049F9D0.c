//----- (000000014049F9D0) ----------------------------------------------------
__int64 __fastcall sub_14049F9D0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // edx
	BOOL v11; // r8d
	int v12; // r10d
	__int64 v13; // [rsp+0h] [rbp-18h]

	if (!qword_140C65948)
		return 0i64;
	v7 = *(_QWORD*)(qword_140C65948 + 48);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a4)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v13 = v8, a4 < *(_DWORD*)(v8 + 32)))
		v13 = *(_QWORD*)(qword_140C65948 + 48);
	if (v13 == v7)
	{
		v10 = 0;
		v11 = 0;
	}
	else
	{
		v10 = 0;
		v11 = *(_DWORD*)(*(_QWORD*)(v13 + 40) + 32i64) > a5;
	}
	v12 = a3 - 1;
	if (v12)
	{
		if (v12 == 1)
		{
			LOBYTE(v10) = !v11;
			return v10;
		}
	}
	else
	{
		return v11;
	}
	return v10;
}
// 140C65948: using guessed type __int64 qword_140C65948;

