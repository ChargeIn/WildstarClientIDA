//----- (000000014049F810) ----------------------------------------------------
__int64 __fastcall sub_14049F810(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v7; // r8
	unsigned int v8; // ebx
	__int64 v9; // rax
	unsigned int v10; // edx
	__int64 v11; // rcx
	_DWORD* v12; // rcx
	int v13; // edi
	__int64 v14; // [rsp+20h] [rbp-18h]

	if (!qword_140C65C28)
		return 0i64;
	v7 = *(_QWORD*)(qword_140C65C28 + 112);
	v8 = 0;
	v9 = *(_QWORD*)(v7 + 8);
	v10 = 0;
	v11 = v7;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a4)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v11 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v11 == v7 || (v14 = v11, a4 < *(_DWORD*)(v11 + 32)))
		v14 = *(_QWORD*)(qword_140C65C28 + 112);
	if (v14 != v7)
	{
		v12 = *(_DWORD**)(v14 + 40);
		if (v12)
			v10 = sub_140642A00(v12, a5);
	}
	v13 = a3 - 1;
	if (v13)
	{
		if (v13 == 1)
		{
			LOBYTE(v8) = v10 == 0;
			return v8;
		}
	}
	else
	{
		return v10;
	}
	return v8;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

