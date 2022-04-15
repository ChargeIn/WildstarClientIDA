//----- (00000001408A6560) ----------------------------------------------------
void** __fastcall sub_1408A6560(__int64 a1, float* a2, int a3, float* a4)
{
	if (a4)
		return (void**)sub_1408A6720(a1, a2, a3, a4, *(_QWORD*)(a1 + 16));
	else
		return sub_1408A6590(a1, (__int64)a2, a3, *(_QWORD*)(a1 + 16));
}

