//----- (0000000140121E10) ----------------------------------------------------
int** __fastcall sub_140121E10(__int64 a1, int** a2, __int64* a3, int** a4)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	int* v9; // r10
	char* v10; // r11
	int v11; // r9d
	int v12; // eax
	int v13; // r8d
	int v14; // eax
	__int64 v15; // r9
	int* v16; // r10
	char* v17; // r8
	int v18; // edx
	int v19; // ecx
	int v20; // eax
	_QWORD* v21; // rbx
	_QWORD* i; // rax
	_QWORD* v23; // rax
	char* v24; // r8
	int* v25; // r9
	int v26; // edx
	__int64 v27; // rcx
	int v28; // eax
	char v30[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (*a3 != *(_QWORD*)(v4 + 16))
	{
		if (v5 == v4)
		{
			v15 = *(_QWORD*)(v4 + 24);
			v16 = *a4;
			v17 = *(char**)(v15 + 32);
			LOBYTE(v18) = *v17;
			v19 = *v17 - *(char*)*a4;
			if (v19)
			{
			LABEL_13:
				if (v19 < 0)
				{
					sub_140122020(a1, a2, 0i64, v15, a4);
					return a2;
				}
			}
			else
			{
				while ((_BYTE)v18)
				{
					v18 = v17[1];
					v20 = *((char*)v16 + 1);
					++v17;
					v16 = (int*)((char*)v16 + 1);
					v19 = v18 - v20;
					if (v18 != v20)
						goto LABEL_13;
				}
			}
		}
		else
		{
			if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
			{
				v21 = *(_QWORD**)(v5 + 16);
				if (v21)
				{
					for (i = (_QWORD*)v21[3]; i; i = (_QWORD*)i[3])
						v21 = i;
				}
				else
				{
					v21 = *(_QWORD**)(v5 + 8);
					if (v5 == v21[2])
					{
						do
						{
							v23 = v21;
							v21 = (_QWORD*)v21[1];
						} while (v23 == (_QWORD*)v21[2]);
					}
				}
			}
			else
			{
				v21 = *(_QWORD**)(v5 + 24);
			}
			v24 = (char*)v21[4];
			v25 = *a4;
			LOBYTE(v26) = *v24;
			v27 = (unsigned int)(*v24 - *(char*)v25);
			if ((_DWORD)v27)
			{
			LABEL_28:
				if ((int)v27 < 0 && sub_140121DD0(v27, (char**)a4, (char**)(v5 + 32)))
				{
					if (v21[3])
						sub_140122020(a1, a2, v5, v5, a4);
					else
						sub_140122020(a1, a2, 0i64, (__int64)v21, a4);
					return a2;
				}
			}
			else
			{
				while ((_BYTE)v26)
				{
					v26 = v24[1];
					v28 = *((char*)v25 + 1);
					++v24;
					v25 = (int*)((char*)v25 + 1);
					v27 = (unsigned int)(v26 - v28);
					if (v26 != v28)
						goto LABEL_28;
				}
			}
		}
		*a2 = *(int**)sub_140122150(a1, (__int64)v30, a4);
		return a2;
	}
	if (!*(_QWORD*)(a1 + 16))
		goto LABEL_8;
	v9 = *a4;
	v10 = *(char**)(v5 + 32);
	v11 = *(char*)*a4;
	v12 = *v10;
	v13 = v11 - v12;
	if (v11 == v12)
	{
		while ((_BYTE)v11)
		{
			v11 = *((char*)v9 + 1);
			v14 = v10[1];
			v9 = (int*)((char*)v9 + 1);
			++v10;
			v13 = v11 - v14;
			if (v11 != v14)
				goto LABEL_6;
		}
		goto LABEL_8;
	}
LABEL_6:
	if (v13 >= 0)
	{
	LABEL_8:
		*a2 = *(int**)sub_140122150(a1, (__int64)v30, a4);
		return a2;
	}
	sub_140122020(a1, a2, v5, v5, a4);
	return a2;
}

