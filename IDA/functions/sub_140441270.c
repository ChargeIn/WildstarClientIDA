//----- (0000000140441270) ----------------------------------------------------
int* __fastcall sub_140441270(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rbx
	int* v5; // rdi
	int* v6; // rax
	_DWORD* v7; // r9
	_QWORD* v8; // r8
	__int64 v9; // rcx
	__int64 v10; // [rsp+40h] [rbp+8h] BYREF

	v10 = a1;
	result = sub_14018B280(56i64, 0);
	v4 = result;
	v5 = result + 8;
	if (result != (int*)-32i64)
	{
		*v5 = *(_DWORD*)a2;
		v6 = sub_14018B280(32i64, 0);
		*((_QWORD*)v5 + 2) = v6;
		*(_QWORD*)v6 = v6;
		*(_QWORD*)(*((_QWORD*)v5 + 2) + 8i64) = *((_QWORD*)v5 + 2);
		v7 = *(_DWORD**)(a2 + 16);
		v8 = *(_QWORD**)v7;
		v10 = **((_QWORD**)v5 + 2);
		sub_140441830(v9, &v10, v8, v7);
		return v4;
	}
	return result;
}
// 1404412D5: variable 'v9' is possibly undefined

