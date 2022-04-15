//----- (00000001405CE970) ----------------------------------------------------
__int64 __fastcall sub_1405CE970(__int64 a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rbx
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rsi
	unsigned __int64 v12; // r15
	__int64* v13; // r14
	__int64 v14; // rcx

	v4 = sub_14018B280(32i64, 0);
	v5 = (__int64)v4;
	if (v4)
	{
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		*(_QWORD*)v4 = 0i64;
		*((_QWORD*)v4 + 1) = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	result = sub_1405CB870(v5, a1, a2);
	if ((int)result >= 0)
	{
		if (*(_DWORD*)(a1 + 28))
		{
			v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 8));
			if (v7)
			{
				++* (_DWORD*)(v7 + 4920);
				v8 = *(_QWORD*)(v7 + 5864);
				if (v8)
					(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)v8 + 392i64))(v8, *(_DWORD*)(v7 + 4920) != 0);
				sub_140003460((__int64*)(a1 + 616), (int*)(a2 + 8));
			}
		}
		v9 = (__int64*)(a1 + 632);
		if (!*(_QWORD*)(v5 + 16))
		{
			*(_QWORD*)(v5 + 16) = v9;
			*(_QWORD*)(v5 + 24) = *v9;
			*v9 = v5;
			v10 = *(_QWORD*)(v5 + 24);
			if (v10)
				*(_QWORD*)(v10 + 16) = v5 + 24;
		}
		v11 = a1 + 640;
		if (*(_QWORD*)v11 == *(_QWORD*)(v11 + 8))
			sub_1400290D0(v11);
		v12 = (*(__int64(__fastcall**)(__int64))(v11 + 24))(a2 + 24);
		v13 = (__int64*)(*(_QWORD*)(v11 + 16) + 8 * (v12 % *(_QWORD*)(v11 + 8)));
		result = (__int64)sub_14018B280(32i64, 0);
		if (result)
		{
			v14 = *v13;
			*(_QWORD*)result = v12;
			*(_QWORD*)(result + 8) = v14;
			LODWORD(v14) = *(_DWORD*)(a2 + 24);
			*(_QWORD*)(result + 24) = v5;
			*(_DWORD*)(result + 16) = v14;
		}
		else
		{
			result = 0i64;
		}
		*v13 = result;
		++* (_QWORD*)v11;
	}
	else if (v5)
	{
		return sub_1405CC920(v5);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

