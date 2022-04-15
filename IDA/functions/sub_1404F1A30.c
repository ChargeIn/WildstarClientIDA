//----- (00000001404F1A30) ----------------------------------------------------
__int64 __fastcall sub_1404F1A30(__int64 a1)
{
	int v1; // ebx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rdi
	int v7; // eax
	int v8; // edx
	int v9; // r8d
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 result; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = dword_140DC3248;
	if ((dword_140DC3248 & 1) != 0)
	{
		v8 = dword_140DC3254;
	}
	else
	{
		v7 = dword_140DC3248 | 1;
		v8 = 0;
		dword_140DC3254 = 0;
		dword_140DC3248 |= 1u;
	}
	if ((v7 & 2) != 0)
	{
		v9 = dword_140DC325C;
	}
	else
	{
		v9 = 0;
		dword_140DC325C = 0;
		dword_140DC3248 = v7 | 2;
	}
	if ((*(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
	{
		if (v9)
		{
			v1 = dword_140DC3258;
		}
		else
		{
			dword_140DC325C = 1;
			v10 = sub_140200220(0x528u);
			if (v10)
				v1 = *(_DWORD*)(v10 + 8);
			dword_140DC3258 = v1;
		}
		v11 = *(_QWORD*)(v6 + 400);
		result = 1i64;
		v13 = *(_QWORD*)(v11 + 16);
		*(double*)v13 = (double)v1;
		*(_DWORD*)(v13 + 8) = 3;
		*(_QWORD*)(v11 + 16) += 16i64;
	}
	else
	{
		if (v8)
		{
			v1 = dword_140DC3250;
		}
		else
		{
			dword_140DC3254 = 1;
			v14 = sub_140200220(0x528u);
			if (v14)
				v1 = *(_DWORD*)(v14 + 4);
			dword_140DC3250 = v1;
		}
		v15 = *(_QWORD*)(v6 + 400);
		v16 = *(_QWORD*)(v15 + 16);
		*(double*)v16 = (double)v1;
		*(_DWORD*)(v16 + 8) = 3;
		*(_QWORD*)(v15 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140DC3248: using guessed type int dword_140DC3248;
// 140DC3250: using guessed type int dword_140DC3250;
// 140DC3254: using guessed type int dword_140DC3254;
// 140DC3258: using guessed type int dword_140DC3258;
// 140DC325C: using guessed type int dword_140DC325C;

