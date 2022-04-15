//----- (0000000140134CA0) ----------------------------------------------------
void* __fastcall sub_140134CA0(__int64 a1)
{
	int* v3; // rax
	int* v4; // rcx
	void* v5; // rbx
	char v6[8]; // [rsp+30h] [rbp-28h] BYREF
	int* v7; // [rsp+38h] [rbp-20h]
	int* v8; // [rsp+40h] [rbp-18h]
	int* v9; // [rsp+48h] [rbp-10h]

	if (!*(_QWORD*)a1 || *(_QWORD*)(a1 + 80) == *(_QWORD*)(a1 + 72))
		return 0i64;
	v3 = sub_14018B280(16i64, 0);
	v7 = v3;
	v8 = v3;
	v9 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	sub_1400F3010(
		*(_QWORD*)a1 + 384i64,
		*(LARGE_INTEGER*)(a1 + 8),
		*(_DWORD*)(a1 + 56),
		*(_QWORD*)(a1 + 72),
		byte_1409D8D24,
		v6);
	v4 = v7;
	if (v7 == v8)
	{
		v5 = &unk_1409D8D44;
	}
	else
	{
		if (v6 != (char*)(a1 + 224))
		{
			sub_14001C480(a1 + 224, v7, v8);
			v4 = v7;
		}
		v5 = *(void**)(a1 + 232);
	}
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return v5;
}
// 1409D8D24: using guessed type _BYTE byte_1409D8D24[32];
// 140134CA0: using guessed type char var_28[8];

