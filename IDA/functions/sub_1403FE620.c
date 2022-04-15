//----- (00000001403FE620) ----------------------------------------------------
__int64 __fastcall sub_1403FE620(__int64 a1, __int64 a2, int* a3)
{
	__int64 v3; // r11
	__int64 v6; // r8
	bool v8; // al
	__int64 v9; // r9
	int v10; // edx
	int v11; // eax
	__int64 v12; // rcx
	int* v13; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v16; // rax
	int v17; // eax
	int* v18; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v9 = v6;
			v11 = v10 - *(_DWORD*)(v6 + 32);
			if (v10 == *(_DWORD*)(v6 + 32))
			{
				v11 = a3[1] - *(_DWORD*)(v6 + 36);
				if (!v11)
					v11 = a3[2] - *(_DWORD*)(v6 + 40);
			}
			v8 = v11 < 0;
			if (v8)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
	}
	v12 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
		{
		LABEL_12:
			v13 = *sub_1403FE500(a1, &v18, v6, v9, (__int64)a3);
			result = a2;
			*(_QWORD*)a2 = v13;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v12 = *(_QWORD*)(v9 + 16);
			if (v12)
			{
				for (i = *(_QWORD*)(v12 + 24); i; i = *(_QWORD*)(i + 24))
					v12 = i;
			}
			else
			{
				v12 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v12 + 16))
				{
					do
					{
						v16 = v12;
						v12 = *(_QWORD*)(v12 + 8);
					} while (v16 == *(_QWORD*)(v12 + 16));
				}
			}
		}
		else
		{
			v12 = *(_QWORD*)(v9 + 24);
		}
	}
	v17 = *(_DWORD*)(v12 + 32) - *a3;
	if (!v17)
	{
		v17 = *(_DWORD*)(v12 + 36) - a3[1];
		if (!v17)
			v17 = *(_DWORD*)(v12 + 40) - a3[2];
	}
	if (v17 < 0)
		goto LABEL_12;
	*(_QWORD*)a2 = v12;
	result = a2;
	*(_BYTE*)(a2 + 8) = 0;
	return result;
}

