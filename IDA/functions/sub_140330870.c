//----- (0000000140330870) ----------------------------------------------------
__int64 __fastcall sub_140330870(__int64 a1, int** a2)
{
	__int64 result; // rax
	int* v4; // rax
	int* v5; // rbx
	int* v6; // rax
	__int64 v7; // rdx

	if (!a2)
		return 2147500035i64;
	v4 = sub_14018B280(64i64, 0);
	v5 = v4;
	if (v4)
	{
		v4[2] = 1;
		*(_QWORD*)v4 = off_140B648F0;
		*((_QWORD*)v4 + 2) = 131070i64;
		*((_QWORD*)v4 + 3) = 131070i64;
		v6 = sub_14018B280(131070i64, 0);
		v7 = *((_QWORD*)v5 + 3);
		*((_QWORD*)v5 + 4) = v6;
		*((_QWORD*)v5 + 6) = v6;
		v5[14] = 1;
		*((_QWORD*)v5 + 5) = (char*)v6 + v7;
		*a2 = v5;
		return 0i64;
	}
	else
	{
		result = 0i64;
		*a2 = 0i64;
	}
	return result;
}
// 140B648F0: using guessed type __int64 (__fastcall *off_140B648F0[17])();

