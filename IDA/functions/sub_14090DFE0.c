//----- (000000014090DFE0) ----------------------------------------------------
__int64 __fastcall sub_14090DFE0(__int64 a1)
{
	int v2; // ecx
	int v3; // ebx
	int* v4; // rax
	int* v5; // rsi
	__int64 v7; // rcx
	bool v8; // cc

	v2 = *(_DWORD*)(a1 + 96);
	v3 = 2 * v2;
	if (2 * v2 > 204800)
		v3 = 204800;
	if (v2 >= 204800 || v3 - v2 < 100)
		return 72i64;
	v4 = (int*)off_140C1B1E0(2 * v3);
	v5 = v4;
	if (!v4)
		return 21i64;
	sub_1407DB590(v4, *(int**)(a1 + 32), 2i64 * *(int*)(a1 + 96));
	v7 = *(_QWORD*)(a1 + 32);
	v8 = *(_DWORD*)(a1 + 96) <= 2048;
	*(_QWORD*)(a1 + 72) = (char*)v5 + 2 * ((*(_QWORD*)(a1 + 72) - v7) >> 1);
	if (!v8)
		off_140C1B1E8(v7);
	*(_QWORD*)(a1 + 32) = v5;
	*(_DWORD*)(a1 + 96) = v3;
	return 0i64;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

