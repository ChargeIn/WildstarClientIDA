//----- (00000001403FDF10) ----------------------------------------------------
void __fastcall sub_1403FDF10(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	bool v9; // zf
	__int64 v10; // rcx
	__int64 v11; // r15
	int* v12; // rax
	__int64 v13; // rdi
	int* v14; // r12
	__int64 i; // rbx
	__int64 v16; // r14
	__int64 v17; // rdi
	__int64 v18; // rbx
	_QWORD* v19; // rbp
	_QWORD* j; // rbx
	__int64 v21; // rcx
	char v22[16]; // [rsp+30h] [rbp-88h] BYREF
	__int64 v23; // [rsp+40h] [rbp-78h]
	__int64 v24; // [rsp+68h] [rbp-50h]
	__int64 v25; // [rsp+70h] [rbp-48h]

	v4 = a1[2];
	if (v4 == a1[3])
	{
		v8 = v4 - a1[1];
		v9 = v8 / 112 == 0;
		v10 = 2 * (v8 / 112);
		if (v9)
			v10 = 1i64;
		v11 = 28 * (sub_14018A3E0(112 * v10) / 0x70ui64);
		v12 = sub_14018B280(v11 * 4, 0);
		v13 = a1[1];
		v14 = v12;
		for (i = (__int64)v12; v13 != a2; i += 112i64)
		{
			if (i)
				sub_140474E10(i, v13);
			v13 += 112i64;
		}
		if (i)
			sub_140474E10(i, a3);
		v16 = a1[2];
		v17 = i + 112;
		if (a2 != v16)
		{
			v18 = a2;
			do
			{
				if (v17)
					sub_140474E10(v17, v18);
				v18 += 112i64;
				v17 += 112i64;
			} while (v18 != v16);
		}
		v19 = (_QWORD*)a1[2];
		for (j = (_QWORD*)a1[1]; j != v19; j += 14)
			sub_140474FA0(j);
		v21 = a1[1];
		if (v21)
			sub_14018B900(v21, 0);
		a1[1] = v14;
		a1[2] = v17;
		a1[3] = &v14[v11];
	}
	else
	{
		if (v4)
			sub_140474E10(v4, v4 - 112);
		a1[2] += 112i64;
		sub_140474E10((__int64)v22, a3);
		sub_1403FFA80(a2, a1[2] - 224i64, a1[2] - 112i64);
		sub_140474EC0(a2, (__int64)v22);
		if (qword_140C65898)
		{
			v7 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v7)
				sub_1400EA3E0(v7, "MessageFinished", byte_1409EB834, v22);
		}
		if (v24)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
			v24 = 0i64;
		}
		if (v25)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
			v25 = 0i64;
		}
		if (v23)
			sub_14018B900(v23, 0);
	}
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

