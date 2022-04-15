//----- (00000001408EA560) ----------------------------------------------------
__int64 __fastcall sub_1408EA560(__int64 a1, unsigned int* a2)
{
	unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

	if ((unsigned int)sub_1408EB730(a1 + 88, *a2, a2, &v4) != 1)
		return 2i64;
	*(_QWORD*)(a1 + 352) = *(_QWORD*)(a1 + 360) + v4;
	return 1i64;
}

