//----- (00000001400335E0) ----------------------------------------------------
int* __fastcall sub_1400335E0(__int64 a1, int* a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(72i64, 0);
	if (v3 != (int*)-32i64)
	{
		v3[8] = *a2;
		sub_140030C70((__int64)(v3 + 10), (__int64)(a2 + 2));
	}
	return v3;
}

