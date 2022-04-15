//----- (0000000140701090) ----------------------------------------------------
__int64 sub_140701090()
{
	__int64 v0; // rbx
	__int64 v1; // rcx
	__int64 v2; // rcx
	int v3; // eax
	int v5; // [rsp+38h] [rbp+10h] BYREF

	v0 = qword_140C65898;
	v1 = *(_QWORD*)(qword_140C65898 + 120);
	if (v1
		&& (*(_DWORD*)(v1 + 5544) & 2) == 0
		&& !*(_DWORD*)(v1 + 684)
		&& !(unsigned int)sub_1405FD420(*(_QWORD*)qword_140C65B80))
	{
		v2 = *(_QWORD*)(v0 + 120);
		v5 = 0;
		if (!v2 || !sub_1403B48B0(v2) || (v3 = sub_1403B5EA0(v0), v5 = 0, v3))
			v5 = 1;
		sub_1403F4900(v0, 0x173u, (__int64)&v5);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

