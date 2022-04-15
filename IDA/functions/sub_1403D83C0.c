//----- (00000001403D83C0) ----------------------------------------------------
__int64 __fastcall sub_1403D83C0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	unsigned int** v5; // rax
	__int64 v6; // r8
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v11; // [rsp+40h] [rbp+18h]

	v2 = qword_140C65968;
	v4 = sub_140491C60(qword_140C65968, a2);
	if (!v4)
		return 0i64;
	v5 = (unsigned int**)sub_140491BD0(v2, *(_DWORD*)(*(_QWORD*)v4 + 32i64));
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 64);
	v7 = **v5;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v7)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v6 || (v11 = v9, v7 < *(_DWORD*)(v9 + 32)))
		v11 = *(_QWORD*)(a1 + 64);
	if (v11 != v6)
		return *(_QWORD*)(v11 + 40);
	else
		return 0i64;
}
// 140C65968: using guessed type __int64 qword_140C65968;

