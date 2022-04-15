//----- (00000001408D6870) ----------------------------------------------------
void __fastcall sub_1408D6870(__int64 a1, double a2, char a3)
{
	__int64 v3; // xmm6_8
	unsigned int i; // ebx

	v3 = 0x3FF0000000000000i64;
	if (!a3)
		v3 = sub_1408FFA00(10.0, a2 * 0.05);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, *(double*)&v3, *(_QWORD*)(a1 + 8) + 76i64 * i, 5);
}

