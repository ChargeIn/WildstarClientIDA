//----- (0000000140862750) ----------------------------------------------------
__int64 __fastcall sub_140862750(__int64 a1, int* a2, int* a3)
{
	__int64 result; // rax

	*a2 = *(_BYTE*)(*(_QWORD*)(a1 + 40) + 379i64) & 3;
	result = *(_QWORD*)(a1 + 40);
	*a3 = (*(unsigned __int8*)(result + 379) >> 2) & 3;
	return result;
}

