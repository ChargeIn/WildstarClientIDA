//----- (0000000140080990) ----------------------------------------------------
__int64 __fastcall sub_140080990(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
		return sub_140085170(a1, (unsigned int*)(a2 + 8));
	return result;
}

