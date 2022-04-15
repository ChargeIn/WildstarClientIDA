//----- (00000001403A0D80) ----------------------------------------------------
__int64 sub_1403A0D80()
{
	__int64 v0; // rdi
	__int64 v1; // rdx
	__int64 v2; // rcx
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v9; // [rsp+30h] [rbp+8h]

	v0 = qword_140C65898;
	v1 = *(_QWORD*)(qword_140C65898 + 26312);
	v2 = v1;
	v3 = *(_QWORD*)(v1 + 8);
	while (v3)
	{
		if (*(int*)(v3 + 32) < 44)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v2 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v2 == v1 || (v9 = v2, *(int*)(v2 + 32) > 44))
		v9 = *(_QWORD*)(qword_140C65898 + 26312);
	if (v9 == v1)
		v4 = 0;
	else
		v4 = *(_DWORD*)(v9 + 36);
	v5 = sub_1403D90D0(qword_140C65898, v4);
	v6 = v5;
	if (!v5)
		return 3i64;
	v7 = *(_QWORD*)(v5 + 24);
	if (!v7 || !*(_DWORD*)(v7 + 68))
		return 3i64;
	sub_14039E400(qword_140C65898);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "InvokeCraftingWindow", byte_1409E9F14, *(unsigned int*)(v6 + 8));
	sub_1403A71F0(v0, *(_DWORD*)(v6 + 8), 0x2Cu, 1);
	return 0i64;
}
// 1409E9F14: using guessed type _BYTE byte_1409E9F14[24];
// 140C65898: using guessed type __int64 qword_140C65898;

