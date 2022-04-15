//----- (0000000140403E90) ----------------------------------------------------
__int64 __fastcall sub_140403E90(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int* a4)
{
	__int64* v4; // rbp
	unsigned __int64 v6; // rsi
	__int64 v7; // r11
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // r10
	unsigned __int64 v11; // rdi
	__int64 v12; // r9
	unsigned int v13; // r8d
	unsigned __int64 v14; // rax
	__int64 result; // rax
	__int64 v16; // rcx
	int* v17; // rsi
	int* v18; // rax
	__int64 v19; // r14
	__int64 v20; // rax
	int* v21; // rsi
	__int64 v22; // rbx
	unsigned __int64 v23; // rbx
	int* v24; // r8
	__int64 v25; // rcx
	__int64 v26; // rbx
	char v27; // [rsp+20h] [rbp-48h] BYREF
	__int64 v28; // [rsp+70h] [rbp+8h] BYREF

	v28 = a1;
	v4 = (__int64*)qword_140C658A0;
	v6 = *(_QWORD*)(qword_140C658A0 + 8);
	v7 = *(_QWORD*)qword_140C658A0;
	v9 = 0i64;
	v10 = v6;
	if (v6)
	{
		while (1)
		{
			v11 = v9 + ((v10 - v9) >> 1);
			v12 = *(_QWORD*)(v7 + 8 * v11);
			v13 = **(_DWORD**)(v12 + 8);
			if (v13 < (unsigned int)a2)
				break;
			if (v13 <= (unsigned int)a2)
			{
				v14 = *(_QWORD*)(v12 + 16);
				if (v14 < a3)
					break;
				if (v14 <= a3)
					goto LABEL_10;
			}
			v10 = v9 + ((v10 - v9) >> 1);
		LABEL_8:
			if (v9 >= v10)
				goto LABEL_9;
		}
		v9 = v11 + 1;
		goto LABEL_8;
	}
LABEL_9:
	v11 = v9;
LABEL_10:
	if (v11 >= v6
		|| (result = *(_QWORD*)(v7 + 8 * v11), **(_DWORD**)(result + 8) != (_DWORD)a2)
		|| *(_QWORD*)(result + 16) != a3)
	{
		if ((unsigned int)a2 <= 0x2F
			&& (v16 = 0x800060038000i64, _bittest64(&v16, a2))
			&& (v17 = (int*)sub_1401F20E0(a2)) != 0i64)
		{
			v18 = sub_14018B280(312i64, 0);
			if (v18)
			{
				v19 = sub_140401690((__int64)v18, v17, a3);
				v28 = v19;
			}
			else
			{
				v19 = 0i64;
				v28 = 0i64;
			}
			v20 = 0i64;
			*(_DWORD*)v19 = 0;
			v21 = 0i64;
			if (*(_WORD*)a4)
			{
				do
					++v20;
				while (*((_WORD*)a4 + v20));
			}
			v22 = (2 * v20) >> 1;
			if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v21 = sub_14018B280(2 * (v22 + 1), 0);
			v23 = 2 * v22;
			sub_1407DB590(v21, a4, v23);
			v24 = (int*)((char*)v21 + v23);
			if ((int*)((char*)v21 + v23))
				*(_WORD*)v24 = 0;
			v25 = v19 + 24;
			if (&v27 != (char*)(v19 + 24))
				sub_14001C480(v25, v21, v24);
			if (v21)
				sub_14018B900((__int64)v21, 0);
			sub_140407990(v25, v19, (unsigned __int16*)a4, 0);
			sub_1400B4DE0(v4, v11, &v28);
			v26 = v28;
			sub_140407E40((__int64)v4, v28);
			if (qword_140C65898)
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatJoin", L"H", v26);
			return v26;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140404020: variable 'v25' is possibly undefined
// 1409EE774: using guessed type wchar_t asc_1409EE774[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

