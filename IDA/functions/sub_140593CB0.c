//----- (0000000140593CB0) ----------------------------------------------------
__int64 __fastcall sub_140593CB0(__int64 a1)
{
	int v1; // esi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned int v8; // ebx
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // r10d
	unsigned int v12; // edx
	__int64 v13; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	sub_1400F26A0(v7 + 384, 2);
	v10 = sub_1405BE150(v9, v8);
	if (v10)
	{
		v12 = *(_DWORD*)(v10 + 12);
		if (v12)
		{
			if (v11 <= v12)
			{
				if (v11)
					v1 = *(_DWORD*)(v10 + 48i64 * (v11 - 1) + 32);
			}
			else
			{
				v1 = sub_1405A48C0(v10, v12);
			}
		}
	}
	v13 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v13 + 8) = 3;
	result = 1i64;
	*(double*)v13 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140593D36: variable 'v9' is possibly undefined
// 140593D4A: variable 'v11' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

