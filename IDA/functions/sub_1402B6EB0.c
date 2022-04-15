//----- (00000001402B6EB0) ----------------------------------------------------
__int64 __fastcall sub_1402B6EB0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r14
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rax
	bool v10; // zf
	__int64 v11; // rdx
	__int64 v12; // rdi
	int v13; // ebx
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	int v16; // eax
	unsigned __int64 v17; // r12
	unsigned __int64 v18; // rax
	__int64 v19; // rsi
	unsigned __int64 v20; // rbp
	int** v21; // r14
	unsigned __int64 v22; // r15
	__int64* v23; // rcx
	__int64 v24; // rsi
	__int64 v25; // r12
	unsigned __int64 v26; // rbp
	int** v27; // r14
	unsigned __int64 v28; // r15
	__int64 v31; // [rsp+88h] [rbp+20h] BYREF

	v4 = a1;
	v31 = 0i64;
	result = sub_1402B5A20((int*)a2, a2, 0i64, 0i64, (unsigned __int64*)&v31);
	if ((int)result >= 0)
	{
		v7 = v31;
		v8 = 0i64;
		v9 = (_QWORD*)(v4 + 40);
		do
		{
			v7 += *(v9 - 1);
			v10 = *v9 == 0i64;
			v31 = v7;
			if (v10)
				return 2147500035i64;
			++v8;
			v9 += 6;
		} while (!v8);
		if (*(_QWORD*)a3)
		{
			sub_14018B900(*(_QWORD*)a3, 0);
			*(_QWORD*)a3 = 0i64;
		}
		*(_QWORD*)(a3 + 8) = 0i64;
		result = sub_1402B2750((__int64*)a3, v7);
		if ((int)result >= 0)
		{
			v12 = *(_QWORD*)a3;
			v13 = sub_1402B5A20((int*)a2, v11, *(_QWORD*)a3, *(_QWORD*)(a3 + 8), (unsigned __int64*)&v31);
			if (v13 < 0)
			{
				if (*(_QWORD*)a3)
				{
					sub_14018B900(*(_QWORD*)a3, 0);
					*(_QWORD*)a3 = 0i64;
				}
				*(_QWORD*)(a3 + 8) = 0i64;
				return (unsigned int)v13;
			}
			v14 = (int*)(v31 + v12);
			v15 = *(_QWORD*)(a3 + 8) - v31;
			if (!v15)
			{
				if (*(_QWORD*)a3)
				{
					sub_14018B900(*(_QWORD*)a3, 0);
					*(_QWORD*)a3 = 0i64;
				}
				*(_QWORD*)(a3 + 8) = 0i64;
				return 2147500037i64;
			}
			v16 = *(_DWORD*)(a2 + 52);
			if (v16 >= 2)
			{
				if (v16 <= 3)
				{
					v24 = 0i64;
					v25 = 0i64;
					if (*(_QWORD*)(a2 + 24))
					{
						while (1)
						{
							v26 = 0i64;
							if (*(_QWORD*)(a2 + 32))
								break;
						LABEL_42:
							if ((unsigned __int64)++v25 >= *(_QWORD*)(a2 + 24))
								return 0i64;
						}
						v27 = (int**)(48 * v24 + v4 + 40);
						while (!v24)
						{
							v28 = (unsigned __int64)*(v27 - 1);
							if ((unsigned int)sub_1407E15B8(v14, v15, *v27, v28))
							{
								if (*(_QWORD*)a3)
								{
									sub_14018B900(*(_QWORD*)a3, 0);
									*(_QWORD*)a3 = 0i64;
								}
								*(_QWORD*)(a3 + 8) = 0i64;
								return 2147500037i64;
							}
							++v26;
							v14 = (int*)((char*)v14 + v28);
							v15 -= v28;
							v24 = 1i64;
							v27 += 6;
							if (v26 >= *(_QWORD*)(a2 + 32))
							{
								v4 = a1;
								goto LABEL_42;
							}
						}
						goto LABEL_47;
					}
					return 0i64;
				}
				if (v16 == 4 && *(_QWORD*)(a2 + 24) == 1i64)
				{
					v17 = *(_QWORD*)(a2 + 16);
					v18 = 0i64;
					v19 = 0i64;
					v31 = 0i64;
					if (*(_QWORD*)(a2 + 32))
					{
						while (1)
						{
							v20 = 0i64;
							if (v17)
								break;
						LABEL_27:
							if (v17 > 1)
								v17 >>= 1;
							v31 = ++v18;
							if (v18 >= *(_QWORD*)(a2 + 32))
								return 0i64;
						}
						v21 = (int**)(48 * v19 + v4 + 40);
						while (!v19)
						{
							v22 = (unsigned __int64)*(v21 - 1);
							if ((unsigned int)sub_1407E15B8(v14, v15, *v21, v22))
							{
								v23 = (__int64*)a3;
								goto LABEL_32;
							}
							++v20;
							v14 = (int*)((char*)v14 + v22);
							v15 -= v22;
							v19 = 1i64;
							v21 += 6;
							if (v20 >= v17)
							{
								v18 = v31;
								v4 = a1;
								goto LABEL_27;
							}
						}
					LABEL_47:
						if (*(_QWORD*)a3)
						{
							sub_14018B900(*(_QWORD*)a3, 0);
							*(_QWORD*)a3 = 0i64;
						}
						*(_QWORD*)(a3 + 8) = 0i64;
						return 2147500037i64;
					}
					return 0i64;
				}
			}
			v23 = (__int64*)a3;
		LABEL_32:
			sub_1402B2710(v23);
			return 2147500037i64;
		}
	}
	return result;
}
// 1402B6F83: variable 'v11' is possibly undefined

