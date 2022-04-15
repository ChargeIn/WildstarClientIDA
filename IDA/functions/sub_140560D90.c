//----- (0000000140560D90) ----------------------------------------------------
__int64 __fastcall sub_140560D90(__int64 a1)
{
	__int64 v1; // r15
	unsigned int v2; // eax
	unsigned int v3; // ebp
	__int64 v4; // rax
	int* v5; // rax
	int* v6; // rbx
	unsigned int v7; // esi
	__int64 v8; // r13
	__int64 v9; // rax
	_DWORD* v10; // rbx
	_DWORD* v11; // r14
	__int64 v12; // rdi
	unsigned __int64 v13; // rax
	__int64 v14; // r12
	unsigned __int64 v15; // r15
	int* v16; // rax
	__int64 v17; // rcx
	unsigned __int64 v20; // [rsp+68h] [rbp+10h]

	v1 = a1;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6A130, qword_140C63858);
	}
	else
	{
		if (dword_140C64920)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401FC880() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65540 + 40i64))(qword_140C65540);
	}
	v3 = v2;
LABEL_9:
	v4 = 44i64 * v3;
	if (!is_mul_ok(v3, 0x2Cui64))
		v4 = -1i64;
	v5 = sub_14018B280(v4, 0);
	v6 = v5;
	if (v5)
	{
		if ((int)(v3 - 1) >= 0)
			sub_1407E4830(v5, 0i64, 44i64 * v3);
	}
	else
	{
		v6 = 0i64;
	}
	v7 = 0;
	*(_QWORD*)(v1 + 80) = v6;
	if (v3)
	{
		v8 = 0i64;
		while (!qword_140C63848)
		{
			if (dword_140C64920)
			{
				v10 = 0i64;
			}
			else
			{
				if ((int)sub_1401FC880() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65540 + 32i64))(qword_140C65540, v7);
					goto LABEL_24;
				}
				v10 = 0i64;
			}
		LABEL_25:
			v11 = (_DWORD*)(v8 + *(_QWORD*)(v1 + 80));
			*v11 = *v10;
			v12 = *(_QWORD*)(v1 + 1416);
			v11[1] = v10[1];
			v11[6] = v10[6];
			v11[2] = v10[2];
			v11[7] = v10[7];
			v11[3] = v10[3];
			v11[8] = v10[8];
			v11[4] = v10[4];
			v11[9] = v10[9];
			v11[5] = v10[5];
			v11[10] = v10[10];
			if (*(_QWORD*)v12 == *(_QWORD*)(v12 + 8))
				sub_1400290D0(v12);
			v13 = (*(__int64(__fastcall**)(_DWORD*))(v12 + 24))(v10);
			v14 = *(_QWORD*)(v12 + 16);
			v20 = v13;
			v15 = v13 % *(_QWORD*)(v12 + 8);
			v16 = sub_14018B280(32i64, 0);
			if (v16)
			{
				v17 = *(_QWORD*)(v14 + 8 * v15);
				*(_QWORD*)v16 = v20;
				*((_QWORD*)v16 + 1) = v17;
				v16[4] = *v10;
				*((_QWORD*)v16 + 3) = v11;
			}
			*(_QWORD*)(v14 + 8 * v15) = v16;
			++* (_QWORD*)v12;
			v1 = a1;
			++v7;
			v8 += 44i64;
			if (v7 >= v3)
				return 0i64;
		}
		v9 = qword_140C63848(off_140A6A130, v7, qword_140C63858);
	LABEL_24:
		v10 = (_DWORD*)v9;
		goto LABEL_25;
	}
	return 0i64;
}
// 140A6A130: using guessed type wchar_t *off_140A6A130[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64920: using guessed type int dword_140C64920;
// 140C65540: using guessed type __int64 qword_140C65540;

