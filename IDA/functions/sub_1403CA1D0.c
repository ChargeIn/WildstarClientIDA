//----- (00000001403CA1D0) ----------------------------------------------------
__int64 sub_1403CA1D0()
{
	__int64 v0; // rsi
	__int64 v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // rax
	unsigned int v7; // edx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v0 = qword_140C65898;
	v1 = 0i64;
	v9 = 0xB00000000i64;
	v2 = sub_1403AC780(qword_140C65898 + 160, (int*)&v9);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 80);
	if (!v4)
		v4 = *(_QWORD*)(v2 + 64) + 156i64;
	v5 = *(_DWORD*)(v4 + 128);
	if (!v5 || !sub_1403ACD90(qword_140C65B70, v5, *(_QWORD*)(v0 + 120)))
		return 0i64;
	v6 = *(_QWORD*)(v3 + 80);
	if (!v6)
		v6 = *(_QWORD*)(v3 + 64) + 156i64;
	v7 = *(_DWORD*)(v6 + 128);
	if (v7)
		v1 = sub_1403ACD90(qword_140C65B70, v7, *(_QWORD*)(qword_140C65898 + 120));
	return **(unsigned int**)(v1 + 112);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

