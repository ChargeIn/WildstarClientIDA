//----- (0000000140567240) ----------------------------------------------------
int* __fastcall sub_140567240(__int64 a1, _QWORD* a2)
{
	int* result; // rax

	result = sub_14018B280(64i64, 0);
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 4) = *a2;
		*((_QWORD*)result + 5) = a2[1];
		*((_QWORD*)result + 6) = a2[2];
		*((_QWORD*)result + 7) = a2[3];
	}
	return result;
}

