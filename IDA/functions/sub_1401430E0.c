//----- (00000001401430E0) ----------------------------------------------------
__int64 __fastcall sub_1401430E0(_QWORD* a1, unsigned int* a2)
{
	int* v4; // rax
	int* v5; // rbx
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // r8
	int v10; // edx
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]

	v4 = sub_14018B280(4i64, 0);
	v5 = v4;
	if (v4)
	{
		v6 = *a2;
		v7 = qword_140C63678;
		*v4 = v6;
		if (v6 < *(_QWORD*)(v7 + 48))
		{
			v8 = *(_QWORD*)(v7 + 40);
			v9 = 32i64 * (unsigned int)v6;
			v10 = *(_DWORD*)(v9 + v8 + 16);
			if ((unsigned int)(v10 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v9 + v8 + 16) = v10 + 1;
		}
	}
	else
	{
		v5 = 0i64;
	}
	*(_QWORD*)sub_140059170(a1, 8ui64) = v5;
	v11 = a1[4];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.ApolloColor", 0x12ui64);
	v13 = a1[2];
	v15 = v12;
	v16 = 4;
	sub_14005E8E0((__int64)a1, v11 + 160, (int*)&v15, v13);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;

