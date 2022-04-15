//----- (00000001402C1660) ----------------------------------------------------
__int64 __fastcall sub_1402C1660(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v7; // r12
	__int64 result; // rax
	unsigned __int64 v9; // rbx
	unsigned __int64* v10; // r13
	int v11; // eax
	unsigned __int64 v12; // rax
	__int64 v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // r14
	int* v16; // rbp
	unsigned __int64* v17; // r15
	unsigned __int64 v18; // rax
	unsigned __int64* v19; // r9
	unsigned __int64 v20; // [rsp+30h] [rbp-48h]
	unsigned __int64 v21; // [rsp+80h] [rbp+8h] BYREF
	unsigned __int64 v22; // [rsp+88h] [rbp+10h]

	v22 = a2;
	if (!a1 || !a2)
		return 2147942487i64;
	v7 = *(_QWORD*)(a1 + 8);
	v20 = v7;
	result = sub_1402B3170(a4, *(_DWORD*)(a1 + 16), *(_QWORD*)a1, v7, a2, a3);
	if ((int)result >= 0)
	{
		v9 = 0i64;
		if (a2)
		{
			v10 = (unsigned __int64*)(a1 + 24);
			while (*(_QWORD*)(a4 + 48))
			{
				v11 = *(_DWORD*)(a4 + 68);
				if (v11 < 2)
					break;
				if (v11 <= 3)
				{
					if (v9 || !*(_QWORD*)(a4 + 40))
						break;
					v12 = 0i64;
				}
				else
				{
					if (v11 != 4 || v9 >= *(_QWORD*)(a4 + 32))
						break;
					v12 = v9;
				}
				v13 = *(_QWORD*)(a4 + 72) + 48 * v12;
				if (!v13)
					break;
				v14 = *(int**)(v13 + 40);
				if (!v14)
					break;
				v15 = *v10;
				v16 = (int*)v10[2];
				v21 = *v10;
				if (v7)
				{
					v17 = (unsigned __int64*)(v13 + 24);
					v18 = *(_QWORD*)(v13 + 24);
					do
					{
						v19 = &v21;
						if (v15 >= v18)
							v19 = v17;
						sub_1407E15B8(v14, v18, v16, *v19);
						v18 = *v17;
						v16 = (int*)((char*)v16 + v15);
						v14 = (int*)((char*)v14 + *v17);
						--v7;
					} while (v7);
					v7 = v20;
				}
				++v9;
				v10 += 6;
				if (v9 >= v22)
					return 0i64;
			}
			sub_1402B34D0((_QWORD*)a4);
			return 2147500035i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

