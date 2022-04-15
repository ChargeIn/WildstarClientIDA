//----- (000000014062FCB0) ----------------------------------------------------
__int64 __fastcall sub_14062FCB0(__int64 a1, __int64 a2, int* a3, int* a4)
{
	int v4; // eax
	unsigned __int64 v8; // rdi
	int* v9; // rax
	int* v10; // rbx
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx

	v4 = dword_140C65C14;
	*(_QWORD*)(a1 + 8) = a2;
	dword_140C65C14 = v4 + 1;
	*(_DWORD*)a1 = v4 + 1;
	if (a3)
	{
		v8 = 0i64;
		if (*(_BYTE*)a3)
		{
			do
				++v8;
			while (*((_BYTE*)a3 + v8));
		}
		v9 = sub_14018B280(v8 + 17, 0);
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
		sub_1407DB590(v9 + 4, a3, v8);
		*((_BYTE*)v10 + v8) = 0;
		*(_QWORD*)(a1 + 16) = v10;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	if (a4)
	{
		v11 = 0i64;
		if (*(_WORD*)a4)
		{
			do
				++v11;
			while (*((_WORD*)a4 + v11));
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
		sub_1407DB590(v12 + 4, a4, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		*(_QWORD*)(a1 + 24) = v13;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65C14: using guessed type int dword_140C65C14;

