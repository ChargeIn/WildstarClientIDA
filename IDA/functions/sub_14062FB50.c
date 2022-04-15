//----- (000000014062FB50) ----------------------------------------------------
__int64 __fastcall sub_14062FB50(__int64 a1, int a2, int* a3, __int64 a4)
{
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B6FC30;
	if (a3)
	{
		v8 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v8;
			while (*((_WORD*)a3 + v8));
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
		sub_1407DB590(v9 + 4, a3, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
		*(_QWORD*)(a1 + 16) = v10;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 44) = 0;
	*(_QWORD*)(a1 + 32) = a4;
	*(_DWORD*)(a1 + 40) = a2;
	*(_QWORD*)(a1 + 48) = 0i64;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B6FC30: using guessed type __int64 (__fastcall *off_140B6FC30[6])();

