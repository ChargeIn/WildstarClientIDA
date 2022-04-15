//----- (0000000140481C40) ----------------------------------------------------
__int64 __fastcall sub_140481C40(__int64 a1, __int64 a2, int* a3)
{
	__int64 v3; // r10
	__int64 v6; // r8
	bool v8; // al
	__int64 v9; // rbx
	int v10; // edx
	__int64 v11; // rcx
	int* v12; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v15; // rax
	int* v16; // rax
	int* v17; // rdi
	__int64 v18; // rax
	__int64 v19; // rax
	int* v20; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v9 = v6;
			v8 = v10 < *(_DWORD*)(v6 + 32);
			if (v10 >= *(_DWORD*)(v6 + 32))
				v6 = *(_QWORD*)(v6 + 24);
			else
				v6 = *(_QWORD*)(v6 + 16);
		} while (v6);
	}
	v11 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
		{
			v12 = *sub_140481B80(a1, &v20, v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v12;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v11 = *(_QWORD*)(v9 + 16);
			if (v11)
			{
				for (i = *(_QWORD*)(v11 + 24); i; i = *(_QWORD*)(i + 24))
					v11 = i;
			}
			else
			{
				v11 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v11 + 16))
				{
					do
					{
						v15 = v11;
						v11 = *(_QWORD*)(v11 + 8);
					} while (v15 == *(_QWORD*)(v11 + 16));
				}
			}
		}
		else
		{
			v11 = *(_QWORD*)(v9 + 24);
		}
	}
	if (*(_DWORD*)(v11 + 32) >= *a3)
	{
		*(_QWORD*)a2 = v11;
		*(_BYTE*)(a2 + 8) = 0;
		return a2;
	}
	else
	{
		if (v9 == v3 || *a3 < *(_DWORD*)(v9 + 32))
		{
			v17 = sub_140481EA0(v11, (__int64)a3);
			*(_QWORD*)(v9 + 16) = v17;
			v19 = *(_QWORD*)(a1 + 8);
			if (v9 == v19)
			{
				*(_QWORD*)(v19 + 8) = v17;
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v17;
			}
			else if (v9 == *(_QWORD*)(v19 + 16))
			{
				*(_QWORD*)(v19 + 16) = v17;
			}
		}
		else
		{
			v16 = sub_140481EA0(v11, (__int64)a3);
			*(_QWORD*)(v9 + 24) = v16;
			v17 = v16;
			v18 = *(_QWORD*)(a1 + 8);
			if (v9 == *(_QWORD*)(v18 + 24))
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
// 140481D46: conditional instruction was optimized away because r8.8==0

