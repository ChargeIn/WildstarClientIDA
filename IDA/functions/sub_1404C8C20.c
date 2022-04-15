//----- (00000001404C8C20) ----------------------------------------------------
int* sub_1404C8C20()
{
	_QWORD* v0; // r14
	__int64 v1; // r15
	unsigned __int64 v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rsi
	_QWORD* v6; // r14
	unsigned __int64 v7; // rbp
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rsi
	__int64 v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // rbp
	_QWORD* v14; // rdi
	__int64 v15; // r8
	_QWORD* v16; // rdi
	int* v17; // rdi
	int* v18; // rbx
	int* result; // rax

	v0 = (_QWORD*)qword_140C659F8;
	v1 = qword_140C659F8;
	v2 = 0i64;
	if (*(_QWORD*)(qword_140C659F8 + 40))
	{
		do
		{
			v3 = *(_QWORD*)(v0[6] + 8 * v2);
			if (v3)
			{
				do
				{
					v4 = *(_QWORD*)(v3 + 24);
					v5 = *(_QWORD*)(v3 + 8);
					if (v4)
					{
						sub_1404C6DC0(v4);
						sub_14018B900(v4, 0);
						*(_QWORD*)(v3 + 24) = 0i64;
					}
					v3 = v5;
				} while (v5);
			}
			++v2;
		} while (v2 < v0[5]);
		v0 = (_QWORD*)qword_140C659F8;
	}
	sub_140019490(v0 + 4);
	v6 = (_QWORD*)qword_140C659F8;
	v7 = 0i64;
	if (*(_QWORD*)(qword_140C659F8 + 80))
	{
		do
		{
			v8 = *(_QWORD*)(v6[11] + 8 * v7);
			if (v8)
			{
				do
				{
					v9 = *(_QWORD*)(v8 + 24);
					v10 = *(_QWORD*)(v8 + 8);
					if (v9)
					{
						sub_1404C6DC0(v9);
						sub_14018B900(v9, 0);
						*(_QWORD*)(v8 + 24) = 0i64;
					}
					v8 = v10;
				} while (v10);
			}
			++v7;
		} while (v7 < v6[10]);
		v6 = (_QWORD*)qword_140C659F8;
	}
	sub_140019490(v6 + 9);
	sub_1404CB4D0(v1 + 120);
	sub_140019490((_QWORD*)(v1 + 120));
	sub_1404CB4D0(v1 + 160);
	sub_140019490((_QWORD*)(v1 + 160));
	v11 = qword_140C659F8;
	v12 = *(_QWORD*)(qword_140C659F8 + 8);
	if (v12 != *(_QWORD*)(qword_140C659F8 + 16))
	{
		v13 = v12 + 8;
		do
		{
			if (*(_DWORD*)(*(_QWORD*)v12 + 4i64) == 1)
			{
				v14 = *(_QWORD**)(*(_QWORD*)v12 + 8i64);
				if (v14)
				{
					sub_1404B5280(v14);
					sub_14018B900((__int64)v14, 0);
				}
			}
			sub_14018B900(*(_QWORD*)v12, 0);
			v11 = qword_140C659F8;
			v15 = *(_QWORD*)(qword_140C659F8 + 16);
			v16 = (_QWORD*)(qword_140C659F8 + 16);
			if (v13 != v15)
			{
				sub_1407DB590((int*)v12, (int*)(v12 + 8), (v15 - v13) & 0xFFFFFFFFFFFFFFF8ui64);
				v11 = qword_140C659F8;
			}
			*v16 -= 8i64;
		} while (v12 != *(_QWORD*)(v11 + 16));
	}
	v17 = *(int**)(v11 + 16);
	v18 = *(int**)(v11 + 8);
	result = sub_1407DB590(v18, v17, 0i64);
	*(_QWORD*)(v11 + 16) += -8 * (((char*)v17 - (char*)v18) >> 3);
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

