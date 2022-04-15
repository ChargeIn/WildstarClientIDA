//----- (0000000140134B40) ----------------------------------------------------
__int64 __fastcall sub_140134B40(int* a1)
{
	__int64 v3; // rdi
	_QWORD* v4; // rax
	__int64 v5; // rdx
	unsigned int v6; // eax
	unsigned int v7; // ebx
	char v8[8]; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+30h] [rbp-18h]

	if (!*(_QWORD*)a1)
		return 0i64;
	v9 = sub_14018B280(40i64, 0);
	v10 = 0i64;
	*(_BYTE*)v9 = 0;
	*((_QWORD*)v9 + 1) = 0i64;
	*((_QWORD*)v9 + 2) = v9;
	*((_QWORD*)v9 + 3) = v9;
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 400i64);
	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), a1[14]);
	v5 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v5 = *v4;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v6 = sub_1401342E0((__int64)v8, v3, -1, 0);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v7 = v6;
	sub_140008410((__int64)v8);
	sub_14018B900((__int64)v9, 0);
	return v7;
}
// 140134B40: using guessed type char var_28[8];

