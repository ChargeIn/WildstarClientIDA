//----- (00000001405A96F0) ----------------------------------------------------
__int64 __fastcall sub_1405A96F0(_QWORD* a1, __int64 a2, int* a3)
{
	unsigned __int64 v6; // r14
	__int64* v7; // rbp
	__int64* v8; // rax
	int* v9; // rax
	__int64 v10; // rcx

	v6 = 8 * ((unsigned int)*a3 % (unsigned __int64)((__int64)(a1[3] - a1[2]) >> 3));
	v7 = *(__int64**)(v6 + a1[2]);
	v8 = v7;
	if (v7)
	{
		while (*((_DWORD*)v8 + 2) != *a3)
		{
			v8 = (__int64*)*v8;
			if (!v8)
				goto LABEL_4;
		}
		*(_QWORD*)a2 = v8;
		*(_BYTE*)(a2 + 16) = 0;
		*(_QWORD*)(a2 + 8) = a1;
	}
	else
	{
	LABEL_4:
		v9 = sub_14018B280(16i64, 0);
		*(_QWORD*)v9 = 0i64;
		if (v9 != (int*)-8i64)
			v9[2] = *a3;
		*(_QWORD*)v9 = v7;
		v10 = a1[2];
		*(_QWORD*)a2 = v9;
		*(_QWORD*)(v6 + v10) = v9;
		++a1[5];
		*(_QWORD*)(a2 + 8) = a1;
		*(_BYTE*)(a2 + 16) = 1;
	}
	return a2;
}

