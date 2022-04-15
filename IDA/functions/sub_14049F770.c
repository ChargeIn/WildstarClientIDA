//----- (000000014049F770) ----------------------------------------------------
__int64 __fastcall sub_14049F770(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
	unsigned int v5; // ecx
	__int64 v6; // r11
	int v7; // r10d
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rdx
	int v11; // r8d
	__int64 v13; // [rsp+0h] [rbp-18h]

	v5 = 0;
	v6 = *(_QWORD*)(qword_140C65C28 + 112);
	v7 = 0;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a4)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v6 || (v13 = v9, a4 < *(_DWORD*)(v9 + 32)))
		v13 = *(_QWORD*)(qword_140C65C28 + 112);
	if (v13 != v6)
	{
		v10 = *(_QWORD*)(v13 + 40);
		if (v10)
			LOBYTE(v7) = *(_QWORD*)(v10 + 32) != 0i64;
	}
	v11 = a3 - 1;
	if (v11)
	{
		if (v11 == 1)
		{
			LOBYTE(v5) = v7 != a5;
			return v5;
		}
	}
	else
	{
		LOBYTE(v5) = v7 == a5;
	}
	return v5;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

