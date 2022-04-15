//----- (000000014013D480) ----------------------------------------------------
int** __fastcall sub_14013D480(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (int)sub_1400454D0(
			*(_QWORD*)(a5 + 8),
			*(_QWORD*)(a5 + 16),
			*(unsigned __int16**)(a4 + 40),
			*(_QWORD*)(a4 + 48)) < 0)
	{
		v8 = sub_14018B280(96i64, 0);
		sub_1400B9C20((_QWORD*)v8 + 4, a5);
		*(_QWORD*)(a4 + 16) = v8;
		v10 = *(_QWORD*)(a1 + 8);
		if (a4 == v10)
		{
			*(_QWORD*)(v10 + 8) = v8;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v8;
		}
		else if (a4 == *(_QWORD*)(v10 + 16))
		{
			*(_QWORD*)(v10 + 16) = v8;
		}
	}
	else
	{
		v8 = sub_14018B280(96i64, 0);
		sub_1400B9C20((_QWORD*)v8 + 4, a5);
		*(_QWORD*)(a4 + 24) = v8;
		v9 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v9 + 24))
			*(_QWORD*)(v9 + 24) = v8;
	}
	*((_QWORD*)v8 + 1) = a4;
	*((_QWORD*)v8 + 2) = 0i64;
	*((_QWORD*)v8 + 3) = 0i64;
	sub_1400081C0((__int64)v8, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v8;
	return a2;
}

