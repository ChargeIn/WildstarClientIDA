//----- (00000001408CC810) ----------------------------------------------------
__int64 __fastcall sub_1408CC810(__int64 a1)
{
	int v1; // edi
	__int64 v3; // rax
	int v4; // edx
	_QWORD* v5; // rbx

	v1 = 1;
	v3 = a1 + 12;
	v4 = 1;
	do
	{
		--v4;
		*(_QWORD*)(v3 - 4) = 0i64;
		*(_DWORD*)(v3 + 4) = 0;
		*(_QWORD*)(v3 - 12) = 0i64;
		v3 += 24i64;
	} while (v4 >= 0);
	v5 = (_QWORD*)(a1 + 216);
	do
	{
		*(v5 - 1) = 0i64;
		*v5 = 0i64;
		sub_1408A8E90((__m128*)(v5 - 21), 1.0, 0.0, 0.0, 0.0, 0.0);
		--v1;
		v5 += 22;
	} while (v1 >= 0);
	return a1;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

