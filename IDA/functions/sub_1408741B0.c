//----- (00000001408741B0) ----------------------------------------------------
__int64 __fastcall sub_1408741B0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_1408744F0(a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
		*(_DWORD*)(v3 + 8) = 0;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 16;
	return result;
}

