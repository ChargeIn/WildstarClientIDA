//----- (00000001400DFCD0) ----------------------------------------------------
__int64 __fastcall sub_1400DFCD0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r13
	_QWORD* v6; // rdi
	int* v7; // rbp
	char v8; // al
	__int64 v9; // rsi
	unsigned __int64* v10; // r12
	__int64 v11; // rbp
	__int64 v12; // rdx
	__int64 v13; // rbx
	__int64* v14; // r8
	int v15; // eax
	bool v16; // sf
	int v17; // eax
	_QWORD* v18; // rbx
	_QWORD* i; // rax
	_QWORD* v20; // rax
	__int64 v22; // [rsp+30h] [rbp-48h] BYREF
	int* v23; // [rsp+80h] [rbp+8h] BYREF
	__int64 v24; // [rsp+98h] [rbp+20h] BYREF

	v23 = (int*)a1;
	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD**)(v3 + 8);
	v7 = (int*)a1;
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *(unsigned __int64**)(a3 + 8);
		v11 = *(_QWORD*)(a3 + 16) - (_QWORD)v10;
		v22 = v11;
		do
		{
			v12 = v6[5];
			v14 = &v24;
			v24 = v6[6] - v12;
			v13 = v24;
			v9 = (__int64)v6;
			if (v24 >= v11)
				v14 = &v22;
			v15 = sub_1407E6AF0(v10, v12, *v14);
			v16 = v15 < 0;
			if (!v15)
			{
				if (v11 >= v13)
					v17 = v11 > v13;
				else
					v17 = -1;
				v16 = v17 < 0;
			}
			v8 = v16;
			if (v16)
				v6 = (_QWORD*)v6[2];
			else
				v6 = (_QWORD*)v6[3];
		} while (v6);
		v7 = v23;
	}
	v18 = (_QWORD*)v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
			goto LABEL_17;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v18 = *(_QWORD**)(v9 + 16);
			if (v18)
			{
				for (i = (_QWORD*)v18[3]; i; i = (_QWORD*)i[3])
					v18 = i;
			}
			else
			{
				v18 = *(_QWORD**)(v9 + 8);
				if (v9 == v18[2])
				{
					do
					{
						v20 = v18;
						v18 = (_QWORD*)v18[1];
					} while (v20 == (_QWORD*)v18[2]);
				}
			}
		}
		else
		{
			v18 = *(_QWORD**)(v9 + 24);
		}
	}
	if (!sub_1400E1180((__int64)(v18 + 4), a3))
	{
		*(_QWORD*)a2 = v18;
		*(_BYTE*)(a2 + 8) = 0;
		return a2;
	}
LABEL_17:
	*(_QWORD*)a2 = *sub_1400E0E20((__int64)v7, &v23, (__int64)v6, v9, a3);
	*(_BYTE*)(a2 + 8) = 1;
	return a2;
}

