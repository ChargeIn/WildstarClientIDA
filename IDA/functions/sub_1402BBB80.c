//----- (00000001402BBB80) ----------------------------------------------------
int* __fastcall sub_1402BBB80(__int64 a1, int* a2)
{
	int* v2; // rax
	int v4; // edi
	__int64 v5; // rdx
	int* v6; // rax
	__int64 v7; // rdx
	int* v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rdx
	int* v11; // rax
	__int64 v12; // rdx
	int* result; // rax
	__int64 v14; // rdx

	v2 = *(int**)(a1 + 184);
	v4 = 4 * (*(_DWORD*)(a1 + 48) & 1 | 2);
	if (v2 < a2)
		v2 = a2;
	*(_QWORD*)(a1 + 184) = v2;
	if (v2)
		v2 = sub_14018C320(*(_QWORD*)(a1 + 128), 2i64 * (_QWORD)v2, v4);
	v5 = *(_QWORD*)(a1 + 184);
	*(_QWORD*)(a1 + 128) = v2;
	if (v5)
		v6 = sub_14018C320(*(_QWORD*)(a1 + 136), 2 * v5, v4);
	else
		v6 = 0i64;
	v7 = *(_QWORD*)(a1 + 184);
	*(_QWORD*)(a1 + 136) = v6;
	if (v7)
		v8 = sub_14018C320(*(_QWORD*)(a1 + 144), 4 * v7, v4);
	else
		v8 = 0i64;
	v9 = *(_QWORD*)(a1 + 152);
	v10 = 4i64 * *(_QWORD*)(a1 + 184) + 4;
	*(_QWORD*)(a1 + 144) = v8;
	v11 = sub_14018C320(v9, v10, v4);
	v12 = *(_QWORD*)(a1 + 184);
	*(_QWORD*)(a1 + 152) = v11;
	if (v12)
		result = sub_14018C320(*(_QWORD*)(a1 + 160), 8 * v12, v4);
	else
		result = 0i64;
	v14 = *(_QWORD*)(a1 + 184);
	*(_QWORD*)(a1 + 160) = result;
	if (v14)
	{
		result = sub_14018C320(*(_QWORD*)(a1 + 168), 8 * v14, v4);
		*(_QWORD*)(a1 + 168) = result;
	}
	else
	{
		*(_QWORD*)(a1 + 168) = 0i64;
	}
	return result;
}

