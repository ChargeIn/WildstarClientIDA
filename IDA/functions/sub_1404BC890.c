//----- (00000001404BC890) ----------------------------------------------------
int* __fastcall sub_1404BC890(_QWORD* a1, unsigned int* a2)
{
	unsigned __int64 v4; // r14
	__int64* v5; // rsi
	__int64* v6; // rax
	int* v7; // rax

	sub_14043F640(a1, a1[5] + 1i64);
	v4 = 8 * (*a2 % (unsigned __int64)((__int64)(a1[3] - a1[2]) >> 3));
	v5 = *(__int64**)(v4 + a1[2]);
	v6 = v5;
	if (v5)
	{
		while (*((_DWORD*)v6 + 2) != *a2)
		{
			v6 = (__int64*)*v6;
			if (!v6)
				goto LABEL_4;
		}
		return (int*)(v6 + 1);
	}
	else
	{
	LABEL_4:
		v7 = sub_14018B280(24i64, 0);
		*(_QWORD*)v7 = 0i64;
		if (v7 != (int*)-8i64)
		{
			*((_QWORD*)v7 + 1) = *(_QWORD*)a2;
			*((_QWORD*)v7 + 2) = *((_QWORD*)a2 + 1);
		}
		*(_QWORD*)v7 = v5;
		*(_QWORD*)(v4 + a1[2]) = v7;
		++a1[5];
		return v7 + 2;
	}
}

