//----- (0000000140569480) ----------------------------------------------------
__int64 __fastcall sub_140569480(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 result; // rax
	__int64 v7; // rbp
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rdx
	int* v13; // rax
	__int64* v14; // rdi
	int* v15; // rbx
	__int64 v16; // rsi
	int v17; // eax
	_QWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
	char v19[56]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v20; // [rsp+78h] [rbp+10h]

	*(_QWORD*)(a2 + 8) = 0i64;
	*(_DWORD*)(a2 + 16) = 0;
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_QWORD*)(a2 + 104) = 0i64;
	*(_DWORD*)(a2 + 40) = 0;
	*(_QWORD*)(a2 + 48) = 0i64;
	*(_QWORD*)(a2 + 56) = 0i64;
	*(_QWORD*)(a2 + 64) = 0i64;
	*(_QWORD*)(a2 + 72) = 0i64;
	*(_QWORD*)(a2 + 80) = 0i64;
	*(_QWORD*)(a2 + 88) = 0i64;
	result = sub_140236580(a3);
	v7 = result;
	if (result)
	{
		*(_QWORD*)(a2 + 56) = sub_1407A1120(a1, a3);
		*(_QWORD*)(a2 + 64) = sub_1407A11C0(a1, a3);
		*(_QWORD*)(a2 + 72) = sub_1407A1260(a1, a3);
		*(_QWORD*)(a2 + 80) = sub_1407A1300(a1, a3);
		*(_QWORD*)(a2 + 88) = sub_1407A13A0(a1, a3);
		v8 = sub_140239000(*(_DWORD*)(v7 + 312));
		v9 = *(_QWORD*)(a1 + 1320);
		v10 = *(_QWORD*)(v9 + 8);
		v11 = v8;
		v12 = v9;
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < *(_DWORD*)(v7 + 312))
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v12 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v12 == v9 || (v20 = v12, *(_DWORD*)(v7 + 312) < *(_DWORD*)(v12 + 32)))
			v20 = *(_QWORD*)(a1 + 1320);
		if (v8 && v20 == v9)
		{
			v13 = sub_14018B280(16i64, 0);
			v14 = (__int64*)v13;
			if (v13)
			{
				*((_QWORD*)v13 + 1) = 0i64;
				*(_QWORD*)v13 = 0i64;
			}
			else
			{
				v14 = 0i64;
			}
			v15 = (int*)(v11 + 4);
			v16 = 32i64;
			do
			{
				if (*v15)
					sub_140003460(v14, v15);
				++v15;
				--v16;
			} while (v16);
			v17 = *(_DWORD*)(v7 + 312);
			v18[1] = v14;
			LODWORD(v18[0]) = v17;
			sub_140055F80(a1 + 1312, (__int64)v19, v18);
		}
		return sub_1405693B0(a1, a3);
	}
	return result;
}
// 140569480: using guessed type char var_38[56];

