//----- (000000014056AC90) ----------------------------------------------------
__int64 __fastcall sub_14056AC90(
	__int64 a1,
	unsigned int a2,
	int* a3,
	int a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	__int64 a8)
{
	__int64 v9; // rbx
	int v12; // eax
	__int64 v13; // rcx

	v9 = a2;
	sub_1401BC800((__int64*)(a1 + 296), a2);
	sub_1407DB590(*(int**)(a1 + 296), a3, 16 * v9);
	v12 = sub_14018CDF0();
	v13 = qword_140C65898;
	*(_DWORD*)(a1 + 312) = a4 + v12;
	return sub_1400EA3E0(*(_QWORD*)(v13 + 29504), "ItemModified", byte_1409EAD24, a1, a5, a6, a7, a8);
}
// 1409EAD24: using guessed type _BYTE byte_1409EAD24[24];
// 140C65898: using guessed type __int64 qword_140C65898;

