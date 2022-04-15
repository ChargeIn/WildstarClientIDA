//----- (00000001405DA9F0) ----------------------------------------------------
__int64 __fastcall sub_1405DA9F0(__int64 a1, __int64* a2, _QWORD* a3, int a4)
{
	__int64 v4; // rax
	int* v5; // r14
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx
	__int64 v12; // rax

	v4 = *a2;
	*(_DWORD*)(a1 + 8) = a4;
	*(_QWORD*)a1 = v4;
	*(_QWORD*)(a1 + 184) = a2[1];
	*(_QWORD*)(a1 + 192) = a2[2];
	*(_DWORD*)(a1 + 208) = *((_DWORD*)a2 + 8);
	v5 = (int*)a2[3];
	if (v5)
	{
		v8 = 0i64;
		if (*(_WORD*)v5)
		{
			do
				++v8;
			while (*((_WORD*)v5 + v8));
		}
		v9 = sub_14018B280(2 * v8 + 18, 0);
		if (v9)
		{
			*((_QWORD*)v9 + 1) = v8;
			*(_QWORD*)v9 = off_140B55060;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = v9 + 4;
		v11 = 2 * v8;
		sub_1407DB590(v9 + 4, v5, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
		*(_QWORD*)(a1 + 216) = v10;
	}
	else
	{
		*(_QWORD*)(a1 + 216) = 0i64;
	}
	*(_DWORD*)(a1 + 224) = 23;
	*(_QWORD*)(a1 + 228) = 4i64;
	*(_QWORD*)(a1 + 236) = 0i64;
	*(_QWORD*)(a1 + 244) = 0i64;
	*(_QWORD*)(a1 + 252) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = a3;
	*(_QWORD*)(a1 + 272) = *a3;
	*a3 = a1;
	v12 = *(_QWORD*)(a1 + 272);
	if (v12)
		*(_QWORD*)(v12 + 264) = a1 + 272;
	if (a1 != -200)
		sub_1401E82F0((__int64*)(a1 + 200), -1.1754944e-38);
	*(_QWORD*)(a1 + 12) = 0i64;
	*(_QWORD*)(a1 + 20) = 0i64;
	*(_QWORD*)(a1 + 28) = 0i64;
	*(_QWORD*)(a1 + 36) = 0i64;
	*(_QWORD*)(a1 + 44) = 0i64;
	*(_QWORD*)(a1 + 52) = 0i64;
	*(_QWORD*)(a1 + 60) = 0i64;
	*(_QWORD*)(a1 + 68) = 0i64;
	*(_WORD*)(a1 + 76) = 0;
	sub_1407E4830((int*)(a1 + 78), 0i64, 0x66ui64);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

