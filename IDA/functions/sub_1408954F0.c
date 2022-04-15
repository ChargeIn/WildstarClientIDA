//----- (00000001408954F0) ----------------------------------------------------
__int64 __fastcall sub_1408954F0(__int64 a1, float* a2, char a3)
{
	int v6; // esi

	v6 = (int)(float)((float)(int)sub_140891630(*(_QWORD*)(a1 + 152)) * *a2);
	if (a3)
	{
		v6 = sub_140891A10(*(_QWORD*)(a1 + 152), v6);
		*a2 = (float)v6 / (float)(int)sub_140891630(*(_QWORD*)(a1 + 152));
	}
	return sub_140895400(a1, v6);
}

