//----- (00000001401A1120) ----------------------------------------------------
__int64 __fastcall sub_1401A1120(int** a1, LONG a2)
{
	int* v5; // rax
	signed int v6; // ebx
	int* v7; // rdi
	HANDLE SemaphoreW; // rax
	signed int LastError; // eax

	if (!a1)
		return 2147942487i64;
	v5 = sub_14018B280(24i64, 0);
	v6 = 0;
	v7 = v5;
	if (v5)
	{
		*(_QWORD*)v5 = off_140B5E750;
		v5[2] = 1;
		*((_QWORD*)v5 + 2) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	SemaphoreW = CreateSemaphoreW(0i64, a2, 0x7FFFFFFF, 0i64);
	*((_QWORD*)v7 + 2) = SemaphoreW;
	if (SemaphoreW)
		goto LABEL_11;
	LastError = GetLastError();
	v6 = LastError;
	if (LastError > 0)
		v6 = (unsigned __int16)LastError | 0x80070000;
	if (v6 >= 0)
		LABEL_11:
	*a1 = v7;
	else
		(*(void(__fastcall**)(int*))(*(_QWORD*)v7 + 8i64))(v7);
	return (unsigned int)v6;
}
// 140B5E750: using guessed type __int64 (__fastcall *off_140B5E750[13])();

