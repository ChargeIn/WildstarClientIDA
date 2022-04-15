//----- (00000001408D5E60) ----------------------------------------------------
__int64 __fastcall sub_1408D5E60(__int64 a1)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		result = sub_1408D8CA0(a1, 1.0, 168i64 * i + *(_QWORD*)(a1 + 8) + 84i64, 15);
	return result;
}

