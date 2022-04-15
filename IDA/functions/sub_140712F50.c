//----- (0000000140712F50) ----------------------------------------------------
__int64 __fastcall sub_140712F50(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax

	result = sub_140448970(a1, *(_QWORD*)(a1 + 8), a2);
	if (result)
		return *(unsigned int*)(result + 16);
	return result;
}

