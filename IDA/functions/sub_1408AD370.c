//----- (00000001408AD370) ----------------------------------------------------
__int64 __fastcall sub_1408AD370(__int64 a1)
{
	unsigned int i; // ebx
	__int64 v3; // rdi
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 728); *(_DWORD*)(v3 + a1 + 764) = result)
	{
		v3 = 32i64 * i;
		sub_1408B1430(v3 + a1 + 752);
		result = *(unsigned int*)(v3 + a1 + 752);
		++i;
	}
	return result;
}

