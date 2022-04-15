//----- (00000001402FA120) ----------------------------------------------------
int* __fastcall sub_1402FA120(__int64* a1)
{
	unsigned __int64 v2; // rcx
	int* result; // rax
	int* v4; // rdi
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // r14
	int* v8; // rdx
	__int64 v9; // rcx

	v2 = a1[149];
	if (v2 >= a1[148])
	{
		v4 = sub_14018B280(72i64, 0);
		if (v4)
		{
			*((_QWORD*)v4 + 4) = 0i64;
			*((_QWORD*)v4 + 5) = 0i64;
			*(_QWORD*)v4 = &off_140B62AC0;
			*((_QWORD*)v4 + 1) = 3i64;
			v4[4] = 0;
			*((_QWORD*)v4 + 3) = 0i64;
			*((_QWORD*)v4 + 6) = 0i64;
			*((_QWORD*)v4 + 7) = 0i64;
			*((_QWORD*)v4 + 8) = 0i64;
		}
		else
		{
			v4 = 0i64;
		}
		v5 = a1[148];
		v6 = sub_14018DB00(a1[147], v5 + 1, 8i64);
		v7 = v6;
		*(_QWORD*)&v6[2 * v5] = v4;
		v8 = (int*)a1[147];
		if (v8 != v6)
		{
			sub_1407DB590(v6, v8, 8 * a1[148]);
			v9 = a1[147];
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			a1[147] = (__int64)v7;
		}
		a1[148] = v5 + 1;
		++a1[149];
		return v4;
	}
	else
	{
		result = *(int**)(a1[147] + 8 * v2);
		++a1[149];
	}
	return result;
}
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();

