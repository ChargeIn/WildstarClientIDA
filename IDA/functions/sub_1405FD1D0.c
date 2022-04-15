//----- (00000001405FD1D0) ----------------------------------------------------
__int64* __fastcall sub_1405FD1D0(__int64 a1, __int64* a2, int a3)
{
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	__int64 v8; // rax
	int* v9; // r8
	unsigned int v10; // edx
	__int64 v11; // r9
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int v21; // [rsp+40h] [rbp+8h] BYREF
	__int64 v22; // [rsp+48h] [rbp+10h] BYREF
	__int64 v23; // [rsp+58h] [rbp+20h] BYREF

	a2[1] = 0i64;
	*a2 = 0i64;
	v5 = *(_QWORD**)(a1 + 8);
	v6 = (_QWORD*)v5[2];
	if (v6 != v5)
	{
		do
		{
			v8 = sub_1405A8A40(*(_QWORD*)(v6[5] + 8i64), **(_DWORD**)(v6[5] + 8i64));
			if (v8)
			{
				v9 = *(int**)(v8 + 8);
				if (v9)
				{
					if ((v9[3] & 0x80000) != 0)
					{
						v10 = v9[107];
						v11 = *(_QWORD*)(qword_140C65930 + 16);
						v12 = v11;
						v13 = *(_QWORD*)(v11 + 8);
						while (v13)
						{
							if (*(_DWORD*)(v13 + 32) < v10)
							{
								v13 = *(_QWORD*)(v13 + 24);
							}
							else
							{
								v12 = v13;
								v13 = *(_QWORD*)(v13 + 16);
							}
						}
						if (v12 == v11 || v10 < *(_DWORD*)(v12 + 32))
						{
							v23 = *(_QWORD*)(qword_140C65930 + 16);
							v14 = &v23;
						}
						else
						{
							v22 = v12;
							v14 = &v22;
						}
						v15 = *v14;
						if (v15 != v11)
						{
							v16 = *(_QWORD*)(v15 + 40);
							if (v16)
							{
								if (*(_DWORD*)(*(_QWORD*)v16 + 20i64) == a3)
								{
									v21 = *v9;
									sub_140003460(a2, &v21);
								}
							}
						}
					}
				}
			}
			v17 = v6[3];
			if (v17)
			{
				v6 = (_QWORD*)v6[3];
				for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
					v6 = i;
			}
			else
			{
				for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = (_QWORD*)j;
				if (v6[3] != j)
					v6 = (_QWORD*)j;
			}
		} while (v6 != *(_QWORD**)(a1 + 8));
	}
	return a2;
}
// 140C65930: using guessed type __int64 qword_140C65930;

