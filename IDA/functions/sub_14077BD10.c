//----- (000000014077BD10) ----------------------------------------------------
__int64 __fastcall sub_14077BD10(__int64* a1, unsigned int* a2)
{
	__int64 result; // rax
	__int64 v5; // rax
	__int64 v6; // rbp
	unsigned int v7; // esi
	int* v8; // rax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int v16; // ebp

	if (!*a2)
		return 2147942487i64;
	v5 = sub_1401F42E0(*a2);
	v6 = v5;
	if (!v5)
		return 2147942487i64;
	v7 = 416;
	switch (*(_DWORD*)(v5 + 4))
	{
	case 0:
		v8 = sub_14018B280(200i64, 0);
		v9 = (__int64)v8;
		if (v8)
		{
			v8[2] = 0;
			v7 = 164;
			*(_QWORD*)v8 = off_140B769C0;
			*((_QWORD*)v8 + 2) = 0i64;
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 5) = 0i64;
			*((_QWORD*)v8 + 6) = 0i64;
			*((_QWORD*)v8 + 7) = 0i64;
			*((_QWORD*)v8 + 8) = 0i64;
			*((_QWORD*)v8 + 9) = 0i64;
			*((_QWORD*)v8 + 10) = 0i64;
			*((_QWORD*)v8 + 11) = 0i64;
			*((_QWORD*)v8 + 12) = 0i64;
			*((_QWORD*)v8 + 18) = 0i64;
			v8[38] = 1;
			*(_QWORD*)(v8 + 39) = 0i64;
			*(_QWORD*)(v8 + 41) = 0i64;
			*((_QWORD*)v8 + 13) = 0i64;
			*((_QWORD*)v8 + 14) = 0i64;
			*((_QWORD*)v8 + 15) = 0i64;
			*((_QWORD*)v8 + 16) = 0i64;
			*((_QWORD*)v8 + 17) = 0i64;
			*((_QWORD*)v8 + 22) = 0i64;
			*((_QWORD*)v8 + 23) = 0i64;
			v8[48] = 0;
			*(_QWORD*)v8 = off_140B76A50;
		}
		else
		{
			v9 = 0i64;
			v7 = 164;
		}
		goto LABEL_28;
	case 1:
		v7 = 165;
		goto LABEL_10;
	case 2:
		v11 = sub_14018B280(240i64, 0);
		if (v11)
		{
			v7 = 166;
			v9 = sub_14077A2A0((__int64)v11);
		}
		else
		{
			v9 = 0i64;
			v7 = 166;
		}
		goto LABEL_28;
	case 3:
		v12 = sub_14018B280(248i64, 0);
		if (v12)
		{
			v7 = 169;
			v9 = sub_14077AA10((__int64)v12);
		}
		else
		{
			v9 = 0i64;
			v7 = 169;
		}
		goto LABEL_28;
	case 4:
		v13 = sub_14018B280(208i64, 0);
		v9 = (__int64)v13;
		if (!v13)
			goto LABEL_12;
		v13[2] = 0;
		*(_QWORD*)v13 = off_140B769C0;
		*((_QWORD*)v13 + 2) = 0i64;
		*((_QWORD*)v13 + 3) = 0i64;
		*((_QWORD*)v13 + 4) = 0i64;
		*((_QWORD*)v13 + 5) = 0i64;
		*((_QWORD*)v13 + 6) = 0i64;
		*((_QWORD*)v13 + 7) = 0i64;
		*((_QWORD*)v13 + 8) = 0i64;
		*((_QWORD*)v13 + 9) = 0i64;
		*((_QWORD*)v13 + 10) = 0i64;
		*((_QWORD*)v13 + 11) = 0i64;
		*((_QWORD*)v13 + 12) = 0i64;
		*((_QWORD*)v13 + 18) = 0i64;
		v13[38] = 1;
		*(_QWORD*)(v13 + 39) = 0i64;
		*(_QWORD*)(v13 + 41) = 0i64;
		*((_QWORD*)v13 + 13) = 0i64;
		*((_QWORD*)v13 + 14) = 0i64;
		*((_QWORD*)v13 + 15) = 0i64;
		*((_QWORD*)v13 + 16) = 0i64;
		*((_QWORD*)v13 + 17) = 0i64;
		*(_QWORD*)v13 = off_140B76780;
		v13[44] = 0;
		goto LABEL_28;
	case 5:
		v14 = sub_14018B280(304i64, 0);
		if (v14)
		{
			v7 = 167;
			v9 = sub_14077C2D0((__int64)v14);
		}
		else
		{
			v9 = 0i64;
			v7 = 167;
		}
		goto LABEL_28;
	case 6:
		v15 = sub_14018B280(192i64, 0);
		v9 = (__int64)v15;
		if (v15)
		{
			v15[2] = 0;
			*(_QWORD*)v15 = off_140B769C0;
			*((_QWORD*)v15 + 2) = 0i64;
			*((_QWORD*)v15 + 3) = 0i64;
			*((_QWORD*)v15 + 4) = 0i64;
			*((_QWORD*)v15 + 5) = 0i64;
			*((_QWORD*)v15 + 6) = 0i64;
			*((_QWORD*)v15 + 7) = 0i64;
			*((_QWORD*)v15 + 8) = 0i64;
			*((_QWORD*)v15 + 9) = 0i64;
			*((_QWORD*)v15 + 10) = 0i64;
			*((_QWORD*)v15 + 11) = 0i64;
			*((_QWORD*)v15 + 12) = 0i64;
			*((_QWORD*)v15 + 18) = 0i64;
			v15[38] = 1;
			*(_QWORD*)(v15 + 39) = 0i64;
			*(_QWORD*)(v15 + 41) = 0i64;
			*((_QWORD*)v15 + 13) = 0i64;
			*((_QWORD*)v15 + 14) = 0i64;
			*((_QWORD*)v15 + 15) = 0i64;
			*((_QWORD*)v15 + 16) = 0i64;
			*((_QWORD*)v15 + 17) = 0i64;
			*(_QWORD*)v15 = off_140B76660;
		}
		else
		{
			v9 = 0i64;
		}
		v7 = 168;
		goto LABEL_28;
	case 7:
	LABEL_10:
		v10 = sub_14018B280(192i64, 0);
		v9 = (__int64)v10;
		if (v10)
		{
			v10[2] = 0;
			*(_QWORD*)v10 = off_140B769C0;
			*((_QWORD*)v10 + 2) = 0i64;
			*((_QWORD*)v10 + 3) = 0i64;
			*((_QWORD*)v10 + 4) = 0i64;
			*((_QWORD*)v10 + 5) = 0i64;
			*((_QWORD*)v10 + 6) = 0i64;
			*((_QWORD*)v10 + 7) = 0i64;
			*((_QWORD*)v10 + 8) = 0i64;
			*((_QWORD*)v10 + 9) = 0i64;
			*((_QWORD*)v10 + 10) = 0i64;
			*((_QWORD*)v10 + 11) = 0i64;
			*((_QWORD*)v10 + 12) = 0i64;
			*((_QWORD*)v10 + 18) = 0i64;
			v10[38] = 1;
			*(_QWORD*)(v10 + 39) = 0i64;
			*(_QWORD*)(v10 + 41) = 0i64;
			*((_QWORD*)v10 + 13) = 0i64;
			*((_QWORD*)v10 + 14) = 0i64;
			*((_QWORD*)v10 + 15) = 0i64;
			*((_QWORD*)v10 + 16) = 0i64;
			*((_QWORD*)v10 + 17) = 0i64;
			*((_QWORD*)v10 + 22) = 0i64;
			*((_QWORD*)v10 + 23) = 0i64;
			*(_QWORD*)v10 = off_140B76810;
		}
		else
		{
		LABEL_12:
			v9 = 0i64;
		}
	LABEL_28:
		v16 = (*(__int64(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v9 + 128i64))(v9, v6, a2);
		if (v16 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		}
		else
		{
			*a1 = v9;
			if (v7 != 416)
			{
				sub_140437A10((_QWORD*)qword_140C658D8, v7, 0, 0i64, 0, 0, 1);
				return (unsigned int)v16;
			}
		}
		result = (unsigned int)v16;
		break;
	default:
		return 2147942487i64;
	}
	return result;
}
// 140B76660: using guessed type __int64 (__fastcall *off_140B76660[111])();
// 140B76780: using guessed type __int64 (__fastcall *off_140B76780[75])();
// 140B76810: using guessed type __int64 (__fastcall *off_140B76810[57])();
// 140B769C0: using guessed type __int64 (__fastcall *off_140B769C0[3])();
// 140B76A50: using guessed type __int64 (__fastcall *off_140B76A50[18])();
// 140C658D8: using guessed type __int64 qword_140C658D8;

