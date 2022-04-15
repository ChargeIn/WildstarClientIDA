//----- (000000014014E2B0) ----------------------------------------------------
_QWORD* __fastcall sub_14014E2B0(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rsi

	result = *(_QWORD**)(a1 + 16);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = v3[8];
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 40);
				if (v5)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
					*(_QWORD*)(v4 + 40) = 0i64;
				}
				v6 = *(_QWORD*)(v4 + 8);
				if (v6)
					sub_14018B900(v6, 0);
				sub_14018B900(v4, 0);
			}
			v7 = v3[3];
			if (v7)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v7 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 16));
	}
	v8 = a1 + 8;
	if (*(_QWORD*)(a1 + 24))
	{
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64);
		if (v9)
		{
			do
			{
				sub_140044CA0(v8, *(_QWORD**)(v9 + 24));
				v10 = *(_QWORD*)(v9 + 40);
				v11 = *(_QWORD*)(v9 + 16);
				if (v10)
					sub_14018B900(v10, 0);
				sub_14018B900(v9, 0);
				v9 = v11;
			} while (v11);
		}
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 16i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v8 + 8);
		result[3] = result;
		*(_QWORD*)(v8 + 16) = 0i64;
	}
	return result;
}

