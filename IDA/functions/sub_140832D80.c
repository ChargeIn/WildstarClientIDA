//----- (0000000140832D80) ----------------------------------------------------
__int64 __fastcall sub_140832D80(__int64 a1, int a2)
{
	__int64 result; // rax

	for (result = *(_QWORD*)(a1 + 96); a2; --a2)
		result = *(_QWORD*)(result + 440);
	return result;
}

