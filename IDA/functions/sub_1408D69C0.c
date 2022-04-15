//----- (00000001408D69C0) ----------------------------------------------------
__int64 __fastcall sub_1408D69C0(__int64 a1, double a2)
{
	__int64 result; // rax
	unsigned int v4; // ebx
	int i; // esi

	result = sub_1408DA370(*(_DWORD*)a1, a2);
	v4 = 0;
	for (i = result; v4 < *(_DWORD*)(a1 + 4); ++v4)
		result = sub_1408D8CC0(a1, i, *(_QWORD*)(a1 + 8) + 76i64 * v4, 6);
	return result;
}

