//----- (00000001405848F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1405848F0(__int64 a1, unsigned __int64* a2, __int64 a3, __int64 a4, int a5)
{
	__int64 v5; // r10
	__int64 v6; // rbp
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // r11
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // rbx
	unsigned __int64* v14; // rax
	int* v15; // rax
	__int64 v16; // rsi
	int* v17; // rax
	__int64 v18; // rdi
	__int64 v19; // rdi
	int* v20; // rax
	__int64 v21; // r14
	int* v22; // rsi

	v5 = qword_140C7DE18;
	v6 = 0i64;
	v10 = 0i64;
	v11 = qword_140C7DE20;
	if (qword_140C7DE20)
	{
		v12 = *a2;
		while (1)
		{
			v13 = v10 + ((v11 - v10) >> 1);
			v14 = *(unsigned __int64**)(qword_140C7DE18 + 8 * v13);
			if (v12 == *v14)
				break;
			if (v12 <= *v14)
				v10 = v13 + 1;
			else
				v11 = v10 + ((v11 - v10) >> 1);
			if (v10 >= v11)
				goto LABEL_8;
		}
	}
	else
	{
	LABEL_8:
		v13 = v10;
	}
	if (v13 < qword_140C7DE20)
	{
		v19 = 2 * v13;
		if (*a2 != **(_QWORD**)(8 * v13 + qword_140C7DE18))
		{
			v20 = sub_14018B280(896i64, 0);
			if (v20)
				v6 = sub_14057AE60((__int64)v20);
			v21 = qword_140C7DE20 + 1;
			v22 = sub_14018DB00(qword_140C7DE18, qword_140C7DE20 + 1, 8i64);
			sub_1407DB590(&v22[v19 + 2], (int*)(v19 * 4 + qword_140C7DE18), 8 * (qword_140C7DE20 - v13));
			*(_QWORD*)&v22[v19] = v6;
			v5 = qword_140C7DE18;
			if ((int*)qword_140C7DE18 != v22)
			{
				sub_1407DB590(v22, (int*)qword_140C7DE18, 8 * v13);
				if (qword_140C7DE18)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7DE18 - 16) + 8i64))(qword_140C7DE18 - 16);
				v5 = (__int64)v22;
				qword_140C7DE18 = (__int64)v22;
			}
			qword_140C7DE20 = v21;
		}
	}
	else
	{
		v15 = sub_14018B280(896i64, 0);
		if (v15)
			v6 = sub_14057AE60((__int64)v15);
		v13 = qword_140C7DE20;
		v16 = qword_140C7DE20 + 1;
		v17 = sub_14018DB00(qword_140C7DE18, qword_140C7DE20 + 1, 8i64);
		v18 = (__int64)v17;
		*(_QWORD*)&v17[2 * v13] = v6;
		v5 = qword_140C7DE18;
		if ((int*)qword_140C7DE18 != v17)
		{
			sub_1407DB590(v17, (int*)qword_140C7DE18, 8 * qword_140C7DE20);
			if (qword_140C7DE18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7DE18 - 16) + 8i64))(qword_140C7DE18 - 16);
			v5 = v18;
			qword_140C7DE18 = v18;
		}
		qword_140C7DE20 = v16;
	}
	sub_14057B840(*(_QWORD*)(v5 + 8 * v13), a2, a3, a4, a5);
	return v13;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

