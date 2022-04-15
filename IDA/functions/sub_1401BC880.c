//----- (00000001401BC880) ----------------------------------------------------
__int64 __fastcall sub_1401BC880(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // rdx
	_QWORD* v6; // r8
	char v8; // al
	__int64 v9; // r9
	unsigned __int64 v10; // r10
	unsigned __int64 v11; // rax
	bool v12; // cf
	__int64 v13; // rcx
	int* v14; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v17; // rax
	int* v18; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD**)(v4 + 8);
	v8 = 1;
	v9 = v4;
	if (v6)
	{
		v10 = a3[1];
		do
		{
			v11 = v6[5];
			v9 = (__int64)v6;
			v12 = v10 < v11;
			if (v10 == v11)
				v12 = *a3 < v6[4];
			v8 = v12;
			if (v12)
				v6 = (_QWORD*)v6[2];
			else
				v6 = (_QWORD*)v6[3];
		} while (v6);
	}
	v13 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
		{
		LABEL_11:
			v14 = *sub_1401BCAA0(a1, &v18, (__int64)v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v14;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v13 = *(_QWORD*)(v9 + 16);
			if (v13)
			{
				for (i = *(_QWORD*)(v13 + 24); i; i = *(_QWORD*)(i + 24))
					v13 = i;
			}
			else
			{
				v13 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v13 + 16))
				{
					do
					{
						v17 = v13;
						v13 = *(_QWORD*)(v13 + 8);
					} while (v17 == *(_QWORD*)(v13 + 16));
				}
			}
		}
		else
		{
			v13 = *(_QWORD*)(v9 + 24);
		}
	}
	if (*(_OWORD*)(v13 + 32) < *(_OWORD*)a3)
		goto LABEL_11;
	*(_QWORD*)a2 = v13;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

