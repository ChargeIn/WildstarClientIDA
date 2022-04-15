//----- (0000000140712E90) ----------------------------------------------------
__int64 __fastcall sub_140712E90(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
		return *(unsigned int*)(result + 44);
	return result;
}

