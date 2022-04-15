//----- (000000014048FF80) ----------------------------------------------------
int* __fastcall sub_14048FF80(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	int* result; // rax

	result = sub_14018B280(32i64, 0);
	if (result)
	{
		*((_QWORD*)result + 2) = a2;
		*((_QWORD*)result + 3) = a3;
		*(_QWORD*)result = off_140B68F20;
		result[2] = a4;
	}
	return result;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

