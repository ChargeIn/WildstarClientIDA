//----- (00000001405F6F10) ----------------------------------------------------
__int64 __fastcall sub_1405F6F10(__int64 a1)
{
	unsigned int* v2; // rcx
	unsigned int v3; // edx
	__int64 result; // rax

	v2 = *(unsigned int**)(a1 + 8);
	v3 = v2[10];
	if (v3 == 5)
		return *v2;
	if (v3 == 1 || v3 == 15 || v3 == 10)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16));
	if (((v3 - 8) & 0xFFFFFFF7) == 0)
		return *v2;
	if (v3 == 7)
	{
		result = sub_140227BC0(v2[12]);
	}
	else
	{
		if (v3 != 28)
			return v2[12];
		result = sub_140228000(v2[12]);
	}
	if (result)
		return *(unsigned int*)(result + 4);
	return result;
}

