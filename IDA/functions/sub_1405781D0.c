//----- (00000001405781D0) ----------------------------------------------------
__int64 __fastcall sub_1405781D0(__int64 a1, unsigned int* a2)
{
	__int64* v2; // r14
	unsigned __int64 i; // rdi
	__int64 v5; // rcx
	int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 j; // rax
	__int64 k; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx

	v2 = (__int64*)qword_140C65B78;
	for (i = 0i64; i < *a2; ++i)
	{
		v5 = *v2;
		v6 = 0;
		if (*v2)
		{
			while (*(_DWORD*)(v5 + 216) != *(_DWORD*)(*((_QWORD*)a2 + 1) + 4 * i))
			{
				v5 = *(_QWORD*)(v5 + 32);
				if (!v5)
					goto LABEL_7;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
			v6 = 1;
		}
	LABEL_7:
		v7 = v2[3];
		v8 = *(_QWORD*)(v7 + 16);
		if (v8 != v7)
		{
			do
			{
				v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v8 + 32));
				if (v9)
				{
					v10 = *(_QWORD*)(v9 + 1440);
					v11 = 0i64;
					if (v10)
					{
						v12 = 0i64;
						while (*(_DWORD*)(*((_QWORD*)a2 + 1) + 4 * i) != *(_DWORD*)(*(_QWORD*)(v9 + 1432) + 36 * v12))
						{
							v11 = (unsigned int)(v11 + 1);
							v12 = (unsigned int)v11;
							if ((unsigned int)v11 >= v10)
								goto LABEL_15;
						}
						sub_140579BF0((__int64*)(v9 + 1432), v11);
						v6 = 1;
					}
				}
			LABEL_15:
				v13 = *(_QWORD*)(v8 + 24);
				if (v13)
				{
					v8 = *(_QWORD*)(v8 + 24);
					for (j = *(_QWORD*)(v13 + 16); j; j = *(_QWORD*)(j + 16))
						v8 = j;
				}
				else
				{
					for (k = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
						v8 = k;
					if (*(_QWORD*)(v8 + 24) != k)
						v8 = k;
				}
			} while (v8 != v2[3]);
		}
		if (!v6)
		{
			v16 = v2[1];
			if (v16)
			{
				do
				{
					v17 = *(_QWORD*)(v16 + 32);
					if (*(_DWORD*)(v16 + 40) == *(_DWORD*)(*((_QWORD*)a2 + 1) + 4 * i))
						(**(void(__fastcall***)(__int64, __int64))v16)(v16, 1i64);
					v16 = v17;
				} while (v17);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

