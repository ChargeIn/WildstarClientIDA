//----- (0000000140777C50) ----------------------------------------------------
void __fastcall sub_140777C50(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rdi
	unsigned __int64 v5; // rsi
	__int64 v6; // rbp
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD** v15; // rax
	_QWORD* v16; // rbx
	__int64 v17; // rdi
	__int64 v18; // rcx

	*a1 = &off_140B76650;
	v2 = (_QWORD*)a1[4];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = (_QWORD*)v3[5];
			if (v4)
			{
				v5 = 0i64;
				if (v4[14])
				{
					v6 = 0i64;
					do
					{
						v7 = *(_QWORD*)(v4[13] + v6 + 8);
						if (v7)
							sub_14018B900(v7, 0);
						++v5;
						v6 += 32i64;
					} while (v5 < v4[14]);
				}
				v8 = v4[13];
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				v9 = v4[10];
				if (v9)
					sub_14018B900(v9, 0);
				v10 = v4[6];
				if (v10)
					sub_14018B900(v10, 0);
				v11 = v4[2];
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900((__int64)v4, 0);
			}
			v12 = v3[3];
			if (v12)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[4]);
	}
	v15 = (_QWORD**)a1[8];
	v16 = *v15;
	if (*v15 != v15)
	{
		do
		{
			v17 = (__int64)v16;
			v16 = (_QWORD*)*v16;
			v18 = *(_QWORD*)(v17 + 24);
			if (v18)
				sub_14018B900(v18, 0);
			sub_14018B900(v17, 0);
		} while (v16 != (_QWORD*)a1[8]);
	}
	*(_QWORD*)a1[8] = a1[8];
	*(_QWORD*)(a1[8] + 8i64) = a1[8];
	sub_14018B900(a1[8], 0);
	sub_140008410((__int64)(a1 + 3));
	sub_14018B900(a1[4], 0);
}
// 140B76650: using guessed type __int64 (__fastcall *off_140B76650)();

