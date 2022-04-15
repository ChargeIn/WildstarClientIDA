//----- (0000000140689580) ----------------------------------------------------
__int64 __fastcall sub_140689580(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // r8
	__int64 v7; // rcx
	unsigned __int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	_DWORD* v12; // rdx
	int v13; // eax
	BOOL v14; // eax
	int v15; // edi
	__int64 v16; // rdx
	__int64 result; // rax
	__int64 v18; // [rsp+38h] [rbp+10h] BYREF

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			(v5 = sub_140498A40(qword_140C65980, v4, 0)) != 0))
	{
		v6 = qword_140C63650;
		v7 = 0i64;
		v8 = *(_QWORD*)(qword_140C63650 + 768);
		if (v8)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v9 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v9) + 400i64) != a1)
			{
				v7 = (unsigned int)(v7 + 1);
				v9 = (unsigned int)v7;
				if ((unsigned int)v7 >= v8)
					goto LABEL_9;
			}
			v10 = *(_QWORD*)(v6 + 8 * v7);
		}
		else
		{
		LABEL_9:
			v10 = 0i64;
		}
		v11 = *(_QWORD*)(v10 + 400);
		v12 = dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 16i64) < *(_QWORD*)(v11 + 16))
			v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64);
		v13 = v12[2];
		v14 = v13 && (v13 != 1 || *v12);
		v15 = v14;
		if (*(_DWORD*)(v5 + 472) != v15)
		{
			v16 = *(_QWORD*)v5;
			*(_DWORD*)(v5 + 472) = v15;
			v18 = 0i64;
			LODWORD(v18) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(v16 + 16))(v5, v16, v6);
			HIDWORD(v18) = v15;
			sub_1403F4900(qword_140C65898, 0x6FAu, (__int64)&v18);
		}
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

