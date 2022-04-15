//----- (00000001402E9650) ----------------------------------------------------
__int64 __fastcall sub_1402E9650(__int64 a1, unsigned int a2, int** a3)
{
	int* v7; // rbx
	int* v8; // rax
	int v9; // edi

	if (a2 >= 0x100 || !a3)
		return 2147942487i64;
	v7 = *(int**)(a1 + 8i64 * a2 + 32);
	if (v7)
	{
		(**(void(__fastcall***)(_QWORD))v7)(*(_QWORD*)(a1 + 8i64 * a2 + 32));
	}
	else
	{
		v8 = sub_14018B280(376i64, 1u);
		v7 = v8;
		if (!v8)
			return 2147942414i64;
		*(_QWORD*)v8 = off_140B63770;
		*((_QWORD*)v8 + 45) = 0i64;
		*((_QWORD*)v8 + 46) = 0i64;
		v8[2] = 1;
		*((_QWORD*)v8 + 2) = 0i64;
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		sub_1407E4830(v8 + 14, 0i64, 0x130ui64);
		v9 = sub_1402E7180(v7, a1, a2);
		if (v9 < 0)
		{
			sub_1402E6FB0(v7);
			sub_14018B900((__int64)v7, 0);
			return (unsigned int)v9;
		}
	}
	*a3 = v7;
	return 0i64;
}
// 140B63770: using guessed type __int64 (__fastcall *off_140B63770[25])();

