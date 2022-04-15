//----- (00000001404F1560) ----------------------------------------------------
__int64 __fastcall sub_1404F1560(__int64 a1)
{
	int v1; // ebx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdi
	unsigned int v8; // eax
	__int64 v9; // rax
	BOOL v10; // eax
	__int64 v11; // rdx
	bool v12; // zf
	__int64 result; // rax
	_DWORD* v14; // rcx
	__int64 v15; // rcx
	_DWORD* v16; // rax

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
	v7 = v6 + 384;
	v8 = sub_1400F26A0(v6 + 384, 1);
	if (v8 == -1)
	{
		v15 = *(_QWORD*)(v7 + 16);
		v16 = *(_DWORD**)(v15 + 16);
		*v16 = 1;
		v16[2] = 1;
		*(_QWORD*)(v15 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v9 = sub_14044FAC0(qword_140C65908, v8);
		v10 = v9 && (*(_DWORD*)(v9 + 12) || *(_DWORD*)(v9 + 24));
		v11 = *(_QWORD*)(v7 + 16);
		v12 = v10;
		result = 1i64;
		v14 = *(_DWORD**)(v11 + 16);
		LOBYTE(v1) = v12;
		*v14 = v1;
		v14[2] = 1;
		*(_QWORD*)(v11 + 16) += 16i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

