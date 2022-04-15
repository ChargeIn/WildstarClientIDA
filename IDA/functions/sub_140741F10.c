//----- (0000000140741F10) ----------------------------------------------------
__int64 __fastcall sub_140741F10(__int64 a1, int* a2, int a3)
{
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 result; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B74D38;
	if (a2)
	{
		v6 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v6;
			while (*((_WORD*)a2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = v6;
			*(_QWORD*)v7 = off_140B55060;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, a2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 16) = v8;
		result = a1;
		*(_DWORD*)(a1 + 24) = a3;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
		result = a1;
		*(_DWORD*)(a1 + 24) = a3;
	}
	return result;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B74D38: using guessed type __int64 (__fastcall *off_140B74D38[3])();

