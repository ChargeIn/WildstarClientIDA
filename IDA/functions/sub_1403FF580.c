//----- (00000001403FF580) ----------------------------------------------------
int* __fastcall sub_1403FF580(__int64 a1, int* a2)
{
	int* result; // rax
	int* v4; // rbx

	result = sub_14018B280(80i64, 0);
	v4 = result;
	if (result != (int*)-32i64)
	{
		result[8] = *a2;
		result[9] = a2[1];
		result[10] = a2[2];
		result[11] = a2[3];
		sub_1403FB870((__int64)(result + 12), (__int64)(a2 + 4));
		return v4;
	}
	return result;
}

