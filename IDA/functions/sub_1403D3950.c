//----- (00000001403D3950) ----------------------------------------------------
__int64 __fastcall sub_1403D3950(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 i; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v14; // [rsp+30h] [rbp+8h]
	__int64 v15; // [rsp+30h] [rbp+8h]

	v3 = qword_140C65960;
	if (!sub_1404835C0(qword_140C65918, a2))
		return 0i64;
	v6 = *(_QWORD*)(v3 + 16);
	v7 = v6;
	for (i = *(_QWORD*)(v6 + 8); i; i = *(_QWORD*)(i + 16))
		v7 = i;
	if (v7 == v6 || (v14 = v7, *(_DWORD*)(v7 + 32)))
		v14 = *(_QWORD*)(v3 + 16);
	if (v14 == v6 || v14 == -40)
		return 0i64;
	v9 = *(_QWORD*)(v14 + 144);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a2)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v15 = v10, a2 < *(_DWORD*)(v10 + 32)))
		v15 = v9;
	if (v15 == v9)
		return 0i64;
	v12 = *(_QWORD*)(v15 + 40);
	if (!v12 || !(unsigned int)sub_1403D6310(*(_QWORD**)(v15 + 40), a3))
		return 0i64;
	else
		return v12;
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65960: using guessed type __int64 qword_140C65960;

