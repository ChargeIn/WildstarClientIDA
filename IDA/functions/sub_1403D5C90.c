//----- (00000001403D5C90) ----------------------------------------------------
__int64 __fastcall sub_1403D5C90(__int64 a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // rdx
	__int64 v6; // r8
	bool v8; // al
	__int64 v9; // r9
	unsigned int v10; // r11d
	unsigned int v11; // eax
	bool v12; // cf
	int v13; // eax
	int v14; // ecx
	__int64 v15; // rcx
	int* v16; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v19; // rax
	unsigned int v20; // eax
	bool v21; // cf
	int v22; // eax
	int v23; // edx
	bool v24; // al
	int* v25; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = 1;
	v9 = v4;
	if (v6)
	{
		v10 = *a3;
		while (1)
		{
			v11 = *(_DWORD*)(v6 + 32);
			v9 = v6;
			v12 = v10 < v11;
			if (v10 != v11)
				goto LABEL_7;
			v13 = a3[1];
			v14 = *(_DWORD*)(v6 + 36);
			if (v13 == v14)
				break;
			v8 = v13 < v14;
		LABEL_8:
			if (v8)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
			if (!v6)
				goto LABEL_12;
		}
		v12 = a3[2] < *(_DWORD*)(v6 + 40);
	LABEL_7:
		v8 = v12;
		goto LABEL_8;
	}
LABEL_12:
	v15 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
		{
		LABEL_14:
			v16 = *sub_1403D78A0(a1, &v25, v6, v9, (__int64)a3);
			result = a2;
			*(_QWORD*)a2 = v16;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v15 = *(_QWORD*)(v9 + 16);
			if (v15)
			{
				for (i = *(_QWORD*)(v15 + 24); i; i = *(_QWORD*)(i + 24))
					v15 = i;
			}
			else
			{
				v15 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v15 + 16))
				{
					do
					{
						v19 = v15;
						v15 = *(_QWORD*)(v15 + 8);
					} while (v19 == *(_QWORD*)(v15 + 16));
				}
			}
		}
		else
		{
			v15 = *(_QWORD*)(v9 + 24);
		}
	}
	v20 = *(_DWORD*)(v15 + 32);
	v21 = v20 < *a3;
	if (v20 == *a3)
	{
		v22 = *(_DWORD*)(v15 + 36);
		v23 = a3[1];
		if (v22 != v23)
		{
			v24 = v22 < v23;
			goto LABEL_29;
		}
		v21 = *(_DWORD*)(v15 + 40) < a3[2];
	}
	v24 = v21;
LABEL_29:
	if (v24)
		goto LABEL_14;
	*(_QWORD*)a2 = v15;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

