//----- (0000000140566810) ----------------------------------------------------
void __fastcall sub_140566810(unsigned int a1, __int64 a2, __int64 a3)
{
	unsigned int v5; // esi
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // rdx
	__int64* v11; // rax
	__int64 v12; // rax
	int* v13; // rbx
	int* v14; // rax
	int v15; // eax
	__int64 v16; // rbx
	int* v17; // rax
	_QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
	char v19[40]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v20; // [rsp+70h] [rbp+18h] BYREF
	__int64 v21; // [rsp+78h] [rbp+20h] BYREF

	if (a1)
	{
		v20 = a3;
		v5 = 0;
		do
		{
			v6 = sub_1402383A0(v5);
			v7 = *(_QWORD*)(a2 + 8);
			v8 = *(_QWORD*)(v7 + 8);
			v9 = v6;
			v10 = v7;
			while (v8)
			{
				if (*(_DWORD*)(v8 + 32) < *(_DWORD*)(v6 + 4))
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v10 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			}
			if (v10 == v7 || *(_DWORD*)(v6 + 4) < *(_DWORD*)(v10 + 32))
			{
				v21 = *(_QWORD*)(a2 + 8);
				v11 = &v21;
			}
			else
			{
				v20 = v10;
				v11 = &v20;
			}
			v12 = *v11;
			if (v12 == v7)
			{
				v13 = sub_14018B280(16i64, 0);
				if (v13)
				{
					v14 = sub_14018B280(24i64, 0);
					*((_QWORD*)v13 + 1) = v14;
					*(_QWORD*)v14 = v14;
					*(_QWORD*)(*((_QWORD*)v13 + 1) + 8i64) = *((_QWORD*)v13 + 1);
				}
				else
				{
					v13 = 0i64;
				}
				v15 = *(_DWORD*)(v9 + 4);
				v18[1] = v13;
				LODWORD(v18[0]) = v15;
				sub_140055F80(a2, (__int64)v19, v18);
			}
			else
			{
				v13 = *(int**)(v12 + 40);
			}
			v16 = *((_QWORD*)v13 + 1);
			v17 = sub_14018B280(24i64, 0);
			if (v17 != (int*)-16i64)
				*((_QWORD*)v17 + 2) = v9;
			*(_QWORD*)v17 = v16;
			++v5;
			*((_QWORD*)v17 + 1) = *(_QWORD*)(v16 + 8);
			**(_QWORD**)(v16 + 8) = v17;
			*(_QWORD*)(v16 + 8) = v17;
		} while (v5 < a1);
	}
}
// 140566810: using guessed type char var_28[40];

