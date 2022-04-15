//----- (00000001408D8360) ----------------------------------------------------
__int64 __fastcall sub_1408D8360(__int64 a1)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		result = sub_1408D8CC0(a1, 1, *(_QWORD*)(a1 + 8) + 100i64 * i, 9);
	return result;
}

