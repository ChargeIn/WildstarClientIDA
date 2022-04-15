//----- (000000014017B960) ----------------------------------------------------
void __fastcall sub_14017B960(__int64 a1, __int64 a2, int a3, float a4, int a5)
{
	__int64 v8; // rax
	unsigned int v9; // r9d
	__int64 v10; // rdx
	__int64 v11; // r8
	int* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rbx
	int* v15; // rax
	char v16[16]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v17; // [rsp+68h] [rbp+10h] BYREF

	if (a2 && *(_QWORD*)(a2 + 16) == a1)
	{
		v8 = *(_QWORD*)(a1 + 1064);
		v9 = *(_DWORD*)(a2 + 24);
		v10 = *(_QWORD*)(v8 + 8);
		v11 = v8;
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < v9)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v11 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v11 == v8 || (v17 = v11, v9 < *(_DWORD*)(v11 + 32)))
			v17 = v8;
		if (v17 == v8)
		{
			v12 = sub_14018B280(104i64, 0);
			if (v12)
				v13 = sub_14017B280((__int64)v12, a2, a3, a4, a5);
			else
				v13 = 0i64;
			LODWORD(v17) = *(_DWORD*)(a2 + 24);
			sub_1400293C0(a1 + 1056, (__int64)v16, (int*)&v17);
			v14 = *(_QWORD*)(a1 + 1048);
			v15 = sub_14018B280(24i64, 0);
			if (v15 != (int*)-16i64)
				*((_QWORD*)v15 + 2) = v13;
			*(_QWORD*)v15 = v14;
			*((_QWORD*)v15 + 1) = *(_QWORD*)(v14 + 8);
			**(_QWORD**)(v14 + 8) = v15;
			*(_QWORD*)(v14 + 8) = v15;
			sub_1400D42F0(a2, 0, 1, 4.0);
		}
	}
}
// 14017B960: using guessed type char var_28[16];

