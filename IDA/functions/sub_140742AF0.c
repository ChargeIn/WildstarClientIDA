//----- (0000000140742AF0) ----------------------------------------------------
__int64 sub_140742AF0()
{
	__int64 v0; // rax
	__int64 v1; // rax
	__int64 v3; // [rsp+20h] [rbp-18h] BYREF
	__int64 v4; // [rsp+28h] [rbp-10h]

	v0 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v0)
	{
		v3 = 0i64;
		v4 = 0i64;
		v1 = *(_QWORD*)(v0 + 72);
		LODWORD(v4) = 1;
		v3 = v1;
		sub_1403F4740(qword_140C65898, 0x42Bu, (__int64)&v3);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

