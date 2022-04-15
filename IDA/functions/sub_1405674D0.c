//----- (00000001405674D0) ----------------------------------------------------
int* __fastcall sub_1405674D0(__int64 a1, int* a2)
{
	int* result; // rax

	result = sub_14018B280(80i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *a2;
		result[9] = a2[1];
		result[10] = a2[2];
		result[11] = a2[3];
		result[12] = a2[4];
		result[13] = a2[5];
		result[14] = a2[6];
		result[15] = a2[7];
		result[16] = a2[8];
		result[17] = a2[9];
		result[18] = a2[10];
		result[19] = a2[11];
	}
	return result;
}

