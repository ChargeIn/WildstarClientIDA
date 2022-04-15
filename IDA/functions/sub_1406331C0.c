//----- (00000001406331C0) ----------------------------------------------------
int* __fastcall sub_1406331C0(__int64 a1, int* a2)
{
	int* result; // rax

	result = sub_14018B280(64i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *a2;
		*((_QWORD*)result + 5) = off_140B68F20;
		result[12] = a2[4];
		result[13] = a2[5];
		result[14] = a2[6];
		result[15] = a2[7];
	}
	return result;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

