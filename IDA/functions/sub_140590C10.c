//----- (0000000140590C10) ----------------------------------------------------
__int64 __fastcall sub_140590C10(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	__int64 v3; // r10
	_QWORD* v6; // r8
	bool v8; // al
	_QWORD* v9; // rbx
	unsigned __int64 v10; // rdx
	_QWORD* v11; // rcx
	int* v12; // rcx
	__int64 result; // rax
	_QWORD* i; // rax
	_QWORD* v15; // rax
	int* v16; // rax
	int* v17; // rdi
	__int64 v18; // rax
	_QWORD* v19; // rax
	int* v20; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD**)(v3 + 8);
	v8 = 1;
	v9 = (_QWORD*)v3;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v9 = v6;
			v8 = v10 < v6[4];
			if (v10 >= v6[4])
				v6 = (_QWORD*)v6[3];
			else
				v6 = (_QWORD*)v6[2];
		} while (v6);
	}
	v11 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD**)(v3 + 16))
		{
			v12 = *sub_140590B50(a1, &v20, (__int64)v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v12;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD**)(v9[1] + 8i64) != v9)
		{
			v11 = (_QWORD*)v9[2];
			if (v11)
			{
				for (i = (_QWORD*)v11[3]; i; i = (_QWORD*)i[3])
					v11 = i;
			}
			else
			{
				v11 = (_QWORD*)v9[1];
				if (v9 == (_QWORD*)v11[2])
				{
					do
					{
						v15 = v11;
						v11 = (_QWORD*)v11[1];
					} while (v15 == (_QWORD*)v11[2]);
				}
			}
		}
		else
		{
			v11 = (_QWORD*)v9[3];
		}
	}
	if (v11[4] >= *a3)
	{
		*(_QWORD*)a2 = v11;
		*(_BYTE*)(a2 + 8) = 0;
		return a2;
	}
	else
	{
		if (v9 == (_QWORD*)v3 || *a3 < v9[4])
		{
			v17 = sub_1405911C0((__int64)v11, a3);
			v9[2] = v17;
			v19 = *(_QWORD**)(a1 + 8);
			if (v9 == v19)
			{
				v19[1] = v17;
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v17;
			}
			else if (v9 == (_QWORD*)v19[2])
			{
				v19[2] = v17;
			}
		}
		else
		{
			v16 = sub_1405911C0((__int64)v11, a3);
			v9[3] = v16;
			v17 = v16;
			v18 = *(_QWORD*)(a1 + 8);
			if (v9 == *(_QWORD**)(v18 + 24))
				*(_QWORD*)(v18 + 24) = v17;
		}
		*((_QWORD*)v17 + 1) = v9;
		*((_QWORD*)v17 + 2) = 0i64;
		*((_QWORD*)v17 + 3) = 0i64;
		sub_1400081C0((__int64)v17, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
		++* (_QWORD*)(a1 + 16);
		*(_QWORD*)a2 = v17;
		*(_BYTE*)(a2 + 8) = 1;
		return a2;
	}
}
// 140590D17: conditional instruction was optimized away because r8.8==0

