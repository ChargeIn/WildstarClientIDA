//----- (0000000140395460) ----------------------------------------------------
unsigned __int64 __fastcall sub_140395460(__int64 a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int v8; // ecx
	int* v9; // rdx
	_QWORD* v10; // rax
	unsigned __int64 result; // rax
	unsigned __int64 v12; // rbx
	__int64 v13; // rdi
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // r12
	__int64 v16; // r13
	_QWORD** v17; // rsi
	unsigned __int64 v18; // rdi
	unsigned __int64 i; // r15
	__int64 v20; // rbx
	unsigned __int64 j; // r15
	__int64 v22; // rsi
	unsigned __int64 v23; // rcx
	unsigned __int64 v24; // r12
	unsigned __int64 v25; // rdi
	unsigned __int64 v26; // rbx
	__int64 v27; // rbx
	unsigned __int64 v28; // [rsp+50h] [rbp+8h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 280i64))(*(_QWORD*)(a1 + 16));
	v3 = v2;
	*(_QWORD*)(a1 + 24) = v2;
	if (!v2)
		goto LABEL_11;
	v4 = 336 * v2;
	if (!is_mul_ok(v3, 0x150ui64))
		v4 = -1i64;
	v5 = __CFADD__(v4, 16i64);
	v6 = v4 + 16;
	if (v5)
		v6 = -1i64;
	v7 = sub_14018B280(v6, 0);
	if (v7)
	{
		v8 = v3 - 1;
		*v7 = v3;
		v9 = v7 + 4;
		if ((int)v3 - 1 >= 0)
		{
			v10 = v7 + 86;
			do
			{
				--v8;
				*(v10 - 41) = off_140B65F80;
				*(v10 - 38) = 0i64;
				*(v10 - 26) = 0i64;
				*(v10 - 25) = 0i64;
				*(v10 - 24) = 0i64;
				*(v10 - 23) = 0i64;
				*(v10 - 22) = 0i64;
				*(v10 - 3) = 0i64;
				*(v10 - 2) = 0i64;
				*(v10 - 1) = 0i64;
				*v10 = 0i64;
				*(v10 - 27) = 0i64;
				*(v10 - 21) = 0i64;
				*((_DWORD*)v10 - 40) = 0;
				v10 += 42;
			} while (v8 >= 0);
		}
	}
	else
	{
	LABEL_11:
		v9 = 0i64;
	}
	result = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 32) = v9;
	if (result)
	{
		v12 = 0i64;
		v13 = 0i64;
		do
		{
			v14 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 16) + 288i64))(
				*(_QWORD*)(a1 + 16),
				v12);
			result = sub_140390730((__m128*)(v13 + *(_QWORD*)(a1 + 32)), *(_QWORD*)(a1 + 8), v14);
			++v12;
			v13 += 336i64;
		} while (v12 < *(_QWORD*)(a1 + 24));
		v15 = 0i64;
		if (*(_QWORD*)(a1 + 24))
		{
			v16 = 0i64;
			do
			{
				v17 = (_QWORD**)(v16 + *(_QWORD*)(a1 + 32));
				result = (*(__int64(__fastcall**)(_QWORD*))(*v17[2] + 144i64))(v17[2]);
				v18 = 0i64;
				for (i = result; v18 < i; ++v18)
				{
					result = (*(__int64(__fastcall**)(_QWORD*, unsigned __int64))(*v17[2] + 152i64))(v17[2], v18);
					if (result < *(_QWORD*)(a1 + 40))
					{
						v20 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * result);
						if (v20)
						{
							result = ((__int64(__fastcall*)(_QWORD**))(*v17)[3])(v17);
							if ((_DWORD)result)
							{
								*(_DWORD*)(v20 + 1048) = 1;
							}
							else
							{
								result = (unsigned __int64)sub_14018B280(48i64, 0);
								if (result)
									result = (unsigned __int64)sub_14038FB20((_QWORD*)result, (__int64)v17, v20);
							}
							*(_DWORD*)(v20 + 1112) = 1;
						}
					}
				}
				++v15;
				v16 += 336i64;
			} while (v15 < *(_QWORD*)(a1 + 24));
		}
		for (j = 0i64; j < *(_QWORD*)(a1 + 40); ++j)
		{
			result = *(_QWORD*)(a1 + 48);
			v22 = *(_QWORD*)(result + 8 * j);
			if (v22)
			{
				result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64, unsigned __int64*))(**(_QWORD**)(a1 + 16)
					+ 384i64))(
						*(_QWORD*)(a1 + 16),
						j,
						&v28);
				v23 = v28;
				v24 = result;
				if (v28)
				{
					v25 = 0i64;
					do
					{
						v26 = *(unsigned int*)(v24 + 4 * v25);
						if (v26 < *(_QWORD*)(a1 + 24))
						{
							v27 = *(_QWORD*)(a1 + 32) + 336 * v26;
							result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 24i64))(v27);
							if ((_DWORD)result)
							{
								*(_DWORD*)(v22 + 1048) = 1;
							}
							else
							{
								result = (unsigned __int64)sub_14018B280(48i64, 0);
								if (result)
									result = (unsigned __int64)sub_14038FB20((_QWORD*)result, v27, v22);
							}
							*(_DWORD*)(v22 + 1112) = 1;
							v23 = v28;
						}
						++v25;
					} while (v25 < v23);
				}
			}
		}
	}
	return result;
}
// 140B65F80: using guessed type __int64 (__fastcall *off_140B65F80[19])();

