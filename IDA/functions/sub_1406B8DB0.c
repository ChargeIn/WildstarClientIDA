//----- (00000001406B8DB0) ----------------------------------------------------
__int64 __fastcall sub_1406B8DB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // r14
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 i; // rax
	__int64 v8; // rsi
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	unsigned int v16; // eax
	__int64 v17; // [rsp+48h] [rbp+10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_DWORD**)(v3 + 8)) != 0i64)
	{
		v5 = *(_QWORD*)(qword_140C65980 + 16);
		v6 = v5;
		for (i = *(_QWORD*)(v5 + 8); i; i = *(_QWORD*)(i + 16))
			v6 = i;
		if (v6 == v5 || (v17 = v6, *(_DWORD*)(v6 + 32)))
			v17 = *(_QWORD*)(qword_140C65980 + 16);
		if (v17 == v5 || (v8 = *(_QWORD*)(v17 + 40)) == 0 || (v9 = *(_QWORD**)(v8 + 8), v10 = (_QWORD*)v9[2], v10 == v9))
		{
		LABEL_24:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		else
		{
			while (1)
			{
				v11 = v10[5];
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 104i64))(v11))
				{
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 40i64))(v11) == 16
						&& *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11) + 36) == *v4)
					{
						break;
					}
				}
				v12 = v10[3];
				if (v12)
				{
					v10 = (_QWORD*)v10[3];
					for (j = *(_QWORD**)(v12 + 16); j; j = (_QWORD*)j[2])
						v10 = j;
				}
				else
				{
					for (k = v10[1]; v10 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v10 = (_QWORD*)k;
					if (v10[3] != k)
						v10 = (_QWORD*)k;
				}
				if (v10 == *(_QWORD**)(v8 + 8))
					goto LABEL_24;
			}
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
			sub_140688BF0(a1, v16);
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65980: using guessed type __int64 qword_140C65980;

