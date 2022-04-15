//----- (00000001405C4EC0) ----------------------------------------------------
void __fastcall sub_1405C4EC0(__int64* a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // r15
	int* v9; // rbp
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	_QWORD* v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rbx
	_QWORD* i; // r14
	__int64 v16; // rcx
	__int64 v17; // rcx
	char v18; // [rsp+30h] [rbp-48h] BYREF

	v2 = a1[2];
	if (v2 == a1[3])
	{
		v6 = (v2 - a1[1]) / 40;
		if (v6)
			v7 = 2 * v6;
		else
			v7 = 1i64;
		v8 = 10 * (sub_14018A3E0(40 * v7) / 0x28ui64);
		v9 = sub_14018B280(v8 * 4, 0);
		v10 = sub_1405C5E20(a1[1], a2, v9);
		v11 = v10;
		if (v10)
			sub_1405BECB0(v10);
		v12 = sub_1405C5E20(a2, a1[2], v11 + 5);
		v13 = a1[2];
		v14 = a1[1];
		for (i = v12; v14 != v13; v14 += 40i64)
		{
			v16 = *(_QWORD*)(v14 + 8);
			if (v16)
				sub_14018B900(v16, 0);
		}
		v17 = a1[1];
		if (v17)
			sub_14018B900(v17, 0);
		a1[2] = (__int64)i;
		a1[3] = (__int64)&v9[v8];
		a1[1] = (__int64)v9;
	}
	else
	{
		if (v2)
		{
			*(_QWORD*)(v2 + 8) = 0i64;
			*(_QWORD*)(v2 + 16) = 0i64;
			*(_QWORD*)(v2 + 24) = 0i64;
			sub_14001C1B0((_QWORD*)v2, *(int**)(v2 - 32), *(_QWORD*)(v2 - 24));
			*(_DWORD*)(v2 + 32) = *(_DWORD*)(v2 - 8);
			*(_DWORD*)(v2 + 36) = *(_DWORD*)(v2 - 4);
		}
		a1[2] += 40i64;
		sub_1405C5F60(a2, a1[2] - 80, a1[2] - 40);
		v5 = sub_14018B280(2i64, 0);
		sub_1407DB590(v5, (int*)&word_140B7B704, 0i64);
		if (v5)
			*(_WORD*)v5 = 0;
		if (&v18 != (char*)a2)
			sub_14001C480(a2, v5, v5);
		*(_QWORD*)(a2 + 32) = 0i64;
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;

