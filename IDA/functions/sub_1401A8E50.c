//----- (00000001401A8E50) ----------------------------------------------------
__int64 __fastcall sub_1401A8E50(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax

	if (a2)
	{
		result = *(_QWORD*)(a1 + 104);
		--* (_DWORD*)(a1 + 112);
		*a2 = result;
		*(_QWORD*)(a1 + 104) = a2;
	}
	return result;
}

