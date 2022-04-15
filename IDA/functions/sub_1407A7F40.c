//----- (00000001407A7F40) ----------------------------------------------------
__int64 __fastcall sub_1407A7F40(__int64 a1)
{
	__int64* v2; // rbx
	__int64 v3; // rbp
	__int64 v4; // rsi
	__int64 v5; // rdi
	__int64 i; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rdx
	__int64* v9; // rbx
	__int64 v10; // rbp
	__int64 v11; // rsi
	__int64 v12; // rdi
	__int64 result; // rax
	_QWORD* v14; // rdx
	__int64 v15; // rdx

	v2 = (__int64*)(a1 + 160);
	v3 = 512i64;
	do
	{
		v4 = 8i64;
		do
		{
			v5 = 2i64;
			do
			{
				for (i = *v2; *v2; i = *v2)
				{
					v7 = *(_QWORD**)(i + 24);
					if (v7)
						*v7 = *(_QWORD*)(i + 32);
					v8 = *(_QWORD*)(i + 32);
					if (v8)
						*(_QWORD*)(v8 + 24) = *(_QWORD*)(i + 24);
					*(_QWORD*)(i + 24) = 0i64;
					*(_QWORD*)(i + 32) = 0i64;
					sub_14018B900(i, 0);
				}
				++v2;
				--v5;
			} while (v5);
			--v4;
		} while (v4);
		--v3;
	} while (v3);
	v9 = (__int64*)(a1 + 65696);
	v10 = 7i64;
	do
	{
		v11 = 8i64;
		do
		{
			v12 = 2i64;
			do
			{
				for (result = *v9; *v9; result = *v9)
				{
					v14 = *(_QWORD**)(result + 24);
					if (v14)
						*v14 = *(_QWORD*)(result + 32);
					v15 = *(_QWORD*)(result + 32);
					if (v15)
						*(_QWORD*)(v15 + 24) = *(_QWORD*)(result + 24);
					*(_QWORD*)(result + 24) = 0i64;
					*(_QWORD*)(result + 32) = 0i64;
					sub_14018B900(result, 0);
				}
				++v9;
				--v12;
			} while (v12);
			--v11;
		} while (v11);
		--v10;
	} while (v10);
	return result;
}

