//----- (00000001403FBED0) ----------------------------------------------------
int* __fastcall sub_1403FBED0(_QWORD* a1, unsigned int* a2)
{
	unsigned __int64 v4; // r15
	__int64* v5; // rbp
	__int64* v6; // rax
	int* v7; // rbx
	int* result; // rax

	sub_1403FE3A0(a1, a1[5] + 1i64);
	v4 = 8 * ((*((_QWORD*)a2 + 1) & 0xFFFFFFi64 | ((unsigned __int64)*a2 << 48)) % ((__int64)(a1[3] - a1[2]) >> 3));
	v5 = *(__int64**)(v4 + a1[2]);
	v6 = v5;
	if (v5)
	{
		while (*((_DWORD*)v6 + 2) != *a2 || v6[2] != *((_QWORD*)a2 + 1))
		{
			v6 = (__int64*)*v6;
			if (!v6)
				goto LABEL_5;
		}
		return (int*)(v6 + 1);
	}
	else
	{
	LABEL_5:
		v7 = sub_14018B280(56i64, 0);
		*(_QWORD*)v7 = 0i64;
		if (v7 != (int*)-8i64)
		{
			*((_QWORD*)v7 + 1) = *(_QWORD*)a2;
			*((_QWORD*)v7 + 2) = *((_QWORD*)a2 + 1);
			*((_QWORD*)v7 + 4) = 0i64;
			*((_QWORD*)v7 + 5) = 0i64;
			*((_QWORD*)v7 + 6) = 0i64;
			sub_14001C1B0((_QWORD*)v7 + 3, *((int**)a2 + 3), *((_QWORD*)a2 + 4));
		}
		*(_QWORD*)v7 = v5;
		result = v7 + 2;
		*(_QWORD*)(v4 + a1[2]) = v7;
		++a1[5];
	}
	return result;
}

