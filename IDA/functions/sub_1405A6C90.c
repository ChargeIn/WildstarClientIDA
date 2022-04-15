//----- (00000001405A6C90) ----------------------------------------------------
void __fastcall sub_1405A6C90(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rsi
	unsigned int v6; // eax
	__int64 v7; // rcx
	unsigned int v8; // ebx
	__int64 v9; // r12
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 v12; // rdx
	int* v13; // rdi
	int* v14; // rax
	unsigned int v15; // ebx
	int v16; // eax
	_DWORD* v17; // r10
	int v18; // ecx
	unsigned int v19; // eax
	int v20; // eax
	int v21; // ebx
	_QWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
	int v23; // [rsp+30h] [rbp-48h] BYREF
	__int64 v24; // [rsp+38h] [rbp-40h]
	void(__fastcall * v25)(__int64, __int64); // [rsp+40h] [rbp-38h]
	__int64 v26; // [rsp+48h] [rbp-30h]
	__int64 v27; // [rsp+80h] [rbp+8h]

	v4 = a2;
	if (*(_QWORD*)(a1 + 120))
	{
		v6 = sub_1403BAD30(a1, a2, *(_BYTE*)(a1 + 28140));
		v8 = v6;
		if (v6)
		{
			v9 = sub_1407A16F0(v7, v6);
			if (v9)
			{
				v10 = *(_QWORD*)(a1 + 28064);
				v11 = *(_QWORD*)(v10 + 8);
				v12 = v10;
				while (v11)
				{
					if (*(_DWORD*)(v11 + 32) < (unsigned int)v4)
					{
						v11 = *(_QWORD*)(v11 + 24);
					}
					else
					{
						v12 = v11;
						v11 = *(_QWORD*)(v11 + 16);
					}
				}
				if (v12 == v10 || (v27 = v12, (unsigned int)v4 < *(_DWORD*)(v12 + 32)))
					v27 = *(_QWORD*)(a1 + 28064);
				if (v27 == v10)
				{
					v14 = sub_14018B280(80i64, 0);
					v13 = v14;
					if (v14)
					{
						*((_QWORD*)v14 + 3) = 0i64;
						*((_QWORD*)v14 + 4) = 0i64;
						*((_QWORD*)v14 + 6) = 0i64;
						*((_QWORD*)v14 + 7) = 0i64;
						v14[2] = 1414420037;
						v14[19] = 0;
						*(_QWORD*)v14 = 0i64;
					}
					else
					{
						v13 = 0i64;
					}
					*v13 = v4;
					v13[1] = 0;
					LODWORD(v22[0]) = v4;
					v22[1] = v13;
					sub_140055F80(a1 + 28056, (__int64)&v23, v22);
				}
				else
				{
					v13 = *(int**)(v27 + 40);
				}
				if (*(_QWORD*)(a1 + 120))
				{
					if (sub_1407A16F0(v11, v8))
					{
						v16 = sub_1405A76A0(a1, v4);
						v15 = *v17 + v16;
					}
					else
					{
						v15 = 0;
					}
				}
				else
				{
					v15 = 0;
				}
				v18 = v13[1];
				if (a3 > v15)
					a3 = v15;
				v13[1] = a3;
				if ((int)(a3 - v18) > 0)
					sub_140195D70((__int64)(v13 + 2));
				v19 = v13[1];
				if (v19 >= v15)
					goto LABEL_35;
				if (!*((_QWORD*)v13 + 3))
				{
					v20 = *(_DWORD*)(v9 + 4);
					v23 = 1;
					v21 = (int)(float)((float)v20 * *(float*)(*(_QWORD*)(a1 + 120) + 2564i64));
					v24 = sub_14001C280(a1);
					v26 = v4;
					v25 = sub_1405A7090;
					sub_140195960((__int64)(v13 + 2), v21, (__int64)&v23, 4);
					return;
				}
				if (v19 >= v15)
				{
				LABEL_35:
					if (*((_QWORD*)v13 + 3))
						sub_140195D70((__int64)(v13 + 2));
				}
			}
		}
	}
}
// 1405A6CD7: variable 'v7' is possibly undefined
// 1405A6DC6: variable 'v11' is possibly undefined
// 1405A6DE4: variable 'v17' is possibly undefined

