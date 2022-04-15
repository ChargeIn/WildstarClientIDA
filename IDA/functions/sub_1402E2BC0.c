//----- (00000001402E2BC0) ----------------------------------------------------
__int64 __fastcall sub_1402E2BC0(__int64 a1, unsigned int* a2, unsigned __int64 a3)
{
	int v3; // ebx
	__int64 result; // rax
	__int64 v7; // rcx
	int* v8; // rax

	v3 = a3;
	if (!a3)
		return 0i64;
	if (!a2)
		return 2147942487i64;
	if (a3 < 4)
		return 2147500037i64;
	v7 = *a2;
	*(_QWORD*)(a1 + 16) = v7;
	v8 = sub_14018B280(v7, 1u);
	*(_QWORD*)(a1 + 24) = v8;
	if (!v8)
		return 2147942414i64;
	result = sub_1402E30E0((__int64)v8, (int*)(a1 + 16), (__int64)(a2 + 1), v3 - 4);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

