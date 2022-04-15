//----- (0000000140724CD0) ----------------------------------------------------
void __fastcall sub_140724CD0(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rdi
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD* v8; // rsi
	int* v9; // r14
	__int64 v10; // rdx
	unsigned int v11; // ebx
	int* v12; // r8
	int* v13; // rdi
	int* v14; // rbx
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	int* v16; // [rsp+28h] [rbp-20h]
	int* v17; // [rsp+30h] [rbp-18h]
	__int64 v18; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
		if (v4)
		{
			v5 = *(_QWORD*)(qword_140C659F0 + 824);
			v6 = *(_QWORD*)(v5 + 16);
			v7 = *(_QWORD*)(v5 + 24);
			if (v6 != v7)
			{
				while (*(_DWORD*)(*(_QWORD*)v6 + 188i64) != a3)
				{
					v6 += 8i64;
					if (v6 == v7)
						return;
				}
				v8 = *(_QWORD**)v6;
				if (*(_QWORD*)v6)
				{
					v9 = 0i64;
					v10 = 0i64;
					v16 = 0i64;
					v17 = 0i64;
					v18 = 0i64;
					v11 = 0;
					if (*(_DWORD*)(v4 + 64))
					{
						do
						{
							v12 = (int*)(88i64 * v11 + *(_QWORD*)(v4 + 72) + 4i64);
							if (v9 == (int*)v10)
							{
								sub_14017B140(&v15, v9, v12);
								v10 = v18;
								v9 = v17;
							}
							else
							{
								if (v9)
									*v9 = *v12;
								v17 = ++v9;
							}
							++v11;
						} while (v11 < *(_DWORD*)(v4 + 64));
						v9 = v16;
					}
					v13 = (int*)v8[27];
					v14 = (int*)v8[26];
					sub_1407DB590(v14, v13, 0i64);
					v8[27] += -4 * (v13 - v14);
					sub_14004EDB0(v8 + 25, (__int64)&v15);
					if (v9)
						sub_14018B900((__int64)v9, 0);
				}
			}
		}
	}
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

