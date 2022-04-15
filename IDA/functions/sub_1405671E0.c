//----- (00000001405671E0) ----------------------------------------------------
int* __fastcall sub_1405671E0(__int64 a1, _QWORD* a2)
{
	int* result; // rax

	result = sub_14018B280(88i64, 0);
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 4) = *a2;
		*((_QWORD*)result + 5) = a2[1];
		*((_QWORD*)result + 6) = a2[2];
		*((_QWORD*)result + 7) = a2[3];
		*((_QWORD*)result + 8) = a2[4];
		*((_QWORD*)result + 9) = a2[5];
		*((_QWORD*)result + 10) = a2[6];
	}
	return result;
}

