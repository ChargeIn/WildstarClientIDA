//----- (00000001401C3020) ----------------------------------------------------
__int64 __fastcall sub_1401C3020(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	__int64 v3; // rbp
	__int64 v6; // rdi
	bool v8; // al
	__int64 v9; // rsi
	_QWORD* v10; // rbx
	_QWORD* i; // rax
	_QWORD* v12; // rax
	int* v14; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	while (v6)
	{
		v9 = v6;
		v8 = (int)sub_1407E6AF0(a3, v6 + 32, 0x14ui64) < 0;
		if (v8)
			v6 = *(_QWORD*)(v6 + 16);
		else
			v6 = *(_QWORD*)(v6 + 24);
	}
	v10 = (_QWORD*)v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
			goto LABEL_8;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v10 = *(_QWORD**)(v9 + 16);
			if (v10)
			{
				for (i = (_QWORD*)v10[3]; i; i = (_QWORD*)i[3])
					v10 = i;
			}
			else
			{
				v10 = *(_QWORD**)(v9 + 8);
				if (v9 == v10[2])
				{
					do
					{
						v12 = v10;
						v10 = (_QWORD*)v10[1];
					} while (v12 == (_QWORD*)v10[2]);
				}
			}
		}
		else
		{
			v10 = *(_QWORD**)(v9 + 24);
		}
	}
	if ((int)sub_1407E6AF0(v10 + 4, (__int64)a3, 0x14ui64) >= 0)
	{
		*(_QWORD*)a2 = v10;
		*(_BYTE*)(a2 + 8) = 0;
		return a2;
	}
LABEL_8:
	*(_QWORD*)a2 = *sub_1401C3480(a1, &v14, v6, v9, (__int64)a3);
	*(_BYTE*)(a2 + 8) = 1;
	return a2;
}

