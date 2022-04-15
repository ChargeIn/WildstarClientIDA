//----- (000000014049C010) ----------------------------------------------------
_BOOL8 __fastcall sub_14049C010(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v4; // rdi
	__int64 v7[2]; // [rsp+20h] [rbp-48h] BYREF
	int* v8; // [rsp+30h] [rbp-38h]
	int* v9; // [rsp+38h] [rbp-30h]
	__int64 v10; // [rsp+40h] [rbp-28h]
	__int64 v11; // [rsp+48h] [rbp-20h]
	int v12; // [rsp+50h] [rbp-18h]

	v4 = qword_140C659A0;
	if (!a2)
	{
		a2 = *(_QWORD*)(qword_140C65898 + 120);
		if (!a2)
			return 0i64;
	}
	v7[0] = a2;
	v10 = 8i64;
	v12 = -1;
	v7[1] = 0i64;
	v11 = 0i64;
	v8 = sub_1400B5DF0(qword_140C658F0, a4, 0i64);
	v9 = v8 + 2;
	return sub_1404A1CA0(v4, v7, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;

