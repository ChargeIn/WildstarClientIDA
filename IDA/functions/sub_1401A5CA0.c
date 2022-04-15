//----- (00000001401A5CA0) ----------------------------------------------------
__int64 __fastcall sub_1401A5CA0(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	_QWORD* v5; // rdi
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rax

	result = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 96i64))(a1);
	v5 = (_QWORD*)result;
	if (result)
	{
		v6 = a1[6];
		if (v6)
		{
			do
			{
				v7 = sub_1401A5CA0(v6, a2);
				if (*(_QWORD*)(v7 + 8) == v5[1])
				{
					v8 = *(_QWORD*)(v7 + 16);
					if (v8)
					{
						v9 = *(_QWORD*)(v8 + 48);
						if (v7 == v9)
							*(_QWORD*)(v8 + 48) = *(_QWORD*)(v9 + 72);
						v10 = *(_QWORD*)(v8 + 56);
						if (v7 == v10)
							*(_QWORD*)(v8 + 56) = *(_QWORD*)(v10 + 64);
						v11 = *(_QWORD*)(v7 + 64);
						if (v11)
							*(_QWORD*)(v11 + 72) = *(_QWORD*)(v7 + 72);
						v12 = *(_QWORD*)(v7 + 72);
						if (v12)
							*(_QWORD*)(v12 + 64) = *(_QWORD*)(v7 + 64);
						*(_QWORD*)(v7 + 16) = 0i64;
					}
					else
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 80) + 32i64))(*(_QWORD*)(v7 + 80));
					}
					v13 = v5[7];
					if (v13)
					{
						*(_QWORD*)(v13 + 72) = v7;
						*(_QWORD*)(v7 + 64) = v5[7];
						v5[7] = v7;
					}
					else
					{
						v5[7] = v7;
						v5[6] = v7;
						*(_QWORD*)(v7 + 64) = 0i64;
					}
					*(_QWORD*)(v7 + 72) = 0i64;
					*(_QWORD*)(v7 + 16) = v5;
				}
				v6 = *(_QWORD*)(v6 + 72);
			} while (v6);
			return (__int64)v5;
		}
	}
	return result;
}

