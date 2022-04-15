//----- (0000000140109100) ----------------------------------------------------
__int64 __fastcall sub_140109100(__int64 a1, __int64 a2)
{
	int v2; // r12d
	__int64 result; // rax
	__int64 v5; // r13
	int v6; // esi
	__int64 v7; // rbx
	__int64 v8; // rbp
	__int64 v9; // rax
	__int64 v10; // r14
	__int64 v11; // rax
	_QWORD* v12; // rdi
	__int64 v13; // [rsp+50h] [rbp+8h]

	v13 = a1;
	v2 = 0;
	result = (__int64)(*(_QWORD*)(a2 + 72) - *(_QWORD*)(a2 + 64)) >> 3;
	if ((int)result > 0)
	{
		v5 = 0i64;
		do
		{
			v6 = 0;
			v7 = 0i64;
			v8 = *(_QWORD*)(v5 + *(_QWORD*)(a2 + 64));
			v9 = (__int64)(*(_QWORD*)(v8 + 40) - *(_QWORD*)(v8 + 32)) >> 3;
			if ((int)v9 > 0)
			{
				v10 = a1 + 48;
				do
				{
					if (v7 >= 0 && v6 < (int)v9)
					{
						v11 = *(_QWORD*)(v8 + 32);
						v12 = *(_QWORD**)(v11 + 8 * v7);
						if (v12)
						{
							sub_1400FDDF0(v10, 0, *(_QWORD**)(v11 + 8 * v7));
							sub_1400FDDF0(v10, 1, v12);
						}
					}
					++v6;
					++v7;
					v9 = (__int64)(*(_QWORD*)(v8 + 40) - *(_QWORD*)(v8 + 32)) >> 3;
				} while (v6 < (int)v9);
				a1 = v13;
			}
			++v2;
			v5 += 8i64;
			result = (__int64)(*(_QWORD*)(a2 + 72) - *(_QWORD*)(a2 + 64)) >> 3;
		} while (v2 < (int)result);
	}
	return result;
}

