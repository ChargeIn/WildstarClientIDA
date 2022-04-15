//----- (00000001402B3300) ----------------------------------------------------
__int64 __fastcall sub_1402B3300(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // r15
	__int64 v5; // rsi
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // r12
	__int64 v8; // rax
	unsigned __int64 v9; // r8
	int v10; // r13d
	__int64 result; // rax
	unsigned __int64 v12; // r14
	__int64 v13; // rcx
	__int64 v14; // rbx
	int* v15; // rdi
	__int64 v16; // rax
	__int64 v17; // rsi
	unsigned __int64 v18; // rcx
	unsigned __int64 v19; // rax
	unsigned __int64 v20; // rbp
	__int64 v22; // [rsp+88h] [rbp+10h]
	unsigned __int64 v24; // [rsp+98h] [rbp+20h]

	v3 = a3;
	v5 = a1;
	if (!a2 || !a3)
		return 2147942487i64;
	v6 = *(_QWORD*)a2;
	v7 = *(_QWORD*)(a2 + 8);
	v8 = a2 + 16;
	v9 = 0i64;
	v10 = *(_DWORD*)(a2 + 16);
	v24 = v7;
	if (v3)
	{
		while (*(_QWORD*)(v8 + 24))
		{
			if (*(_DWORD*)v8 != v10 || *(_QWORD*)(v8 - 16) != v6 || *(_QWORD*)(v8 - 8) != v7)
				return 2147500037i64;
			++v9;
			v8 += 48i64;
			if (v9 >= v3)
				goto LABEL_9;
		}
		return 2147500035i64;
	}
	else
	{
	LABEL_9:
		result = sub_1402B3170(v5, v10, v6, v7, v3, 1i64);
		if ((int)result >= 0)
		{
			v12 = 0i64;
			if (v3)
			{
				v13 = a2 + 24;
				v14 = 0i64;
				v22 = a2 + 24;
				while (1)
				{
					v15 = *(int**)(v13 + v14 + 16);
					if (!v15)
						break;
					v16 = *(_QWORD*)(v5 + 72);
					v17 = *(_QWORD*)(v16 + v14 + 40);
					if (!v17)
						break;
					if (v7)
					{
						v18 = *(_QWORD*)(v13 + v14);
						v19 = *(_QWORD*)(v16 + v14 + 24);
						v20 = v7;
						do
						{
							sub_1402C2A00(v17, v19, v15, v18, v10, 0);
							v18 = *(_QWORD*)(v22 + v14);
							v19 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + v14 + 24);
							v15 = (int*)((char*)v15 + v18);
							v17 += v19;
							--v20;
						} while (v20);
						v3 = a3;
						v7 = v24;
						v13 = v22;
					}
					v5 = a1;
					++v12;
					v14 += 48i64;
					if (v12 >= v3)
						return 0i64;
				}
				return 2147500035i64;
			}
			else
			{
				return 0i64;
			}
		}
	}
	return result;
}

