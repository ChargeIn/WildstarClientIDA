//----- (0000000140496550) ----------------------------------------------------
int* sub_140496550()
{
	int* result; // rax

	result = sub_14018B280(40i64, 0);
	if (result)
	{
		*((_QWORD*)result + 4) = 0i64;
		*((_QWORD*)result + 3) = 0i64;
		*(_QWORD*)result = off_140B675F0;
	}
	return result;
}
// 140B675F0: using guessed type __int64 (__fastcall *off_140B675F0[3])();

