//----- (00000001404B37E0) ----------------------------------------------------
__int64 __fastcall sub_1404B37E0(__int64 a1, int a2, char a3, int a4, int a5, int a6, int* a7, int a8, int a9, int a10)
{
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx

	*(_DWORD*)(a1 + 12) = a5;
	*(_DWORD*)(a1 + 4) = 1;
	*(_DWORD*)(a1 + 8) = a4;
	*(_DWORD*)(a1 + 16) = a6;
	*(_DWORD*)a1 = a2 | (1 << (30 - a3));
	if (a7)
	{
		v11 = 0i64;
		if (*(_WORD*)a7)
		{
			do
				++v11;
			while (*((_WORD*)a7 + v11));
		}
		v12 = sub_14018B280(2 * v11 + 18, 0);
		if (v12)
		{
			*((_QWORD*)v12 + 1) = v11;
			*(_QWORD*)v12 = off_140B55060;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = v12 + 4;
		v14 = 2 * v11;
		sub_1407DB590(v12 + 4, a7, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		*(_QWORD*)(a1 + 24) = v13;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	*(_DWORD*)(a1 + 40) = 23;
	*(_DWORD*)(a1 + 32) = a8;
	*(_DWORD*)(a1 + 36) = a9;
	*(_DWORD*)(a1 + 44) = a10;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

