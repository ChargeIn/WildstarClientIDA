//----- (00000001404B38E0) ----------------------------------------------------
__int64 __fastcall sub_1404B38E0(__int64 a1, int a2, int a3, int a4, int* a5, int a6, int a7, int a8)
{
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx

	*(_DWORD*)(a1 + 8) = a3;
	*(_DWORD*)(a1 + 12) = 22;
	*(_DWORD*)a1 = a2 | 0x80000000;
	*(_DWORD*)(a1 + 4) = 0;
	*(_DWORD*)(a1 + 16) = a4;
	if (a5)
	{
		v9 = 0i64;
		if (*(_WORD*)a5)
		{
			do
				++v9;
			while (*((_WORD*)a5 + v9));
		}
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*((_QWORD*)v10 + 1) = v9;
			*(_QWORD*)v10 = off_140B55060;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = v10 + 4;
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, a5, v12);
		*(_WORD*)((char*)v11 + v12) = 0;
		*(_QWORD*)(a1 + 24) = v11;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	*(_DWORD*)(a1 + 36) = 4;
	*(_DWORD*)(a1 + 32) = a6;
	*(_DWORD*)(a1 + 40) = a7;
	*(_DWORD*)(a1 + 44) = a8;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

