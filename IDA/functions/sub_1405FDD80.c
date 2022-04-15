//----- (00000001405FDD80) ----------------------------------------------------
int* __fastcall sub_1405FDD80(__int64 a1, _QWORD* a2)
{
	int* result; // rax

	result = sub_14018B280(144i64, 0);
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 4) = *a2;
		*((_QWORD*)result + 5) = a2[1];
		*((_QWORD*)result + 6) = a2[2];
		*((_QWORD*)result + 7) = a2[3];
		*((_QWORD*)result + 8) = a2[4];
		*((_QWORD*)result + 9) = a2[5];
		*((_QWORD*)result + 10) = a2[6];
		*((_QWORD*)result + 11) = a2[7];
		*((_QWORD*)result + 12) = a2[8];
		*((_QWORD*)result + 13) = a2[9];
		*((_QWORD*)result + 14) = a2[10];
		*((_QWORD*)result + 15) = a2[11];
		*((_QWORD*)result + 16) = a2[12];
		*((_QWORD*)result + 17) = a2[13];
	}
	return result;
}

