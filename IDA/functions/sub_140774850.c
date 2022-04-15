//----- (0000000140774850) ----------------------------------------------------
__int64 __fastcall sub_140774850(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 v8; // [rsp+30h] [rbp+8h]
	unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

	v9 = a2;
	v2 = a1 + 816;
	v3 = *(_QWORD*)(a1 + 824);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(a1 + 824);
	result = v8;
	if (v8 != *(_QWORD*)(a1 + 824))
	{
		v7 = *(_QWORD*)(v8 + 40);
		if (v7)
		{
			sub_1407748F0(*(_QWORD**)(v8 + 40));
			sub_14018B900(v7, 0);
		}
		return sub_140776810(v2, &v9);
	}
	return result;
}

