//----- (00000001404CDE70) ----------------------------------------------------
__int64* __fastcall sub_1404CDE70(_QWORD* a1, _DWORD* a2)
{
	unsigned __int64 v4; // r15
	__int64* v5; // rbp
	__int64* v6; // rax
	int* v7; // rax
	int* v8; // rbx
	__int64* v9; // rdi
	__int64* result; // rax

	sub_14043F640(a1, a1[5] + 1i64);
	v4 = 8 * ((unsigned int)*a2 % (unsigned __int64)((__int64)(a1[3] - a1[2]) >> 3));
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
		return v6 + 1;
	}
	else
	{
	LABEL_4:
		v7 = sub_14018B280(48i64, 0);
		v8 = v7;
		v9 = (__int64*)(v7 + 2);
		*(_QWORD*)v7 = 0i64;
		if (v7 != (int*)-8i64)
		{
			*(_DWORD*)v9 = *a2;
			sub_1401DDFD0((_QWORD*)v7 + 2, (__int64)(a2 + 2));
		}
		*(_QWORD*)v8 = v5;
		result = v9;
		*(_QWORD*)(v4 + a1[2]) = v8;
		++a1[5];
	}
	return result;
}

