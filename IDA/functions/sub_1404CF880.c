//----- (00000001404CF880) ----------------------------------------------------
__int64 sub_1404CF880()
{
	__int64 v0; // rsi
	int* v1; // rax
	int* v2; // rbx
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rax

	v0 = qword_140C65A28;
	v1 = sub_14018B280(32i64, 0);
	v2 = v1;
	if (v1)
	{
		*((_QWORD*)v1 + 2) = 0i64;
		*((_QWORD*)v1 + 1) = 0i64;
		*(_QWORD*)v1 = sub_1404CF730;
		sub_1404CFCC0((__int64*)v1 + 1);
		*((_QWORD*)v2 + 3) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	*(_QWORD*)v0 = v2;
	v3 = sub_140200220(0x491u);
	if (v3)
		v4 = *(_DWORD*)(v3 + 4);
	else
		v4 = 500;
	*(_DWORD*)(v0 + 152) = v4;
	v5 = sub_140200220(0x491u);
	if (v5)
		*(_DWORD*)(v0 + 156) = *(_DWORD*)(v5 + 8);
	else
		*(_DWORD*)(v0 + 156) = 30000;
	return 0i64;
}
// 140C65A28: using guessed type __int64 qword_140C65A28;

