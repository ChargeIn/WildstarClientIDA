//----- (0000000140332BE0) ----------------------------------------------------
__int64 __fastcall sub_140332BE0(__int64 a1, unsigned __int16 a2, int a3)
{
	__int64 result; // rax
	__int64 v4; // rcx

	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 176))
	{
		result = *(_QWORD*)(a1 + 168);
		v4 = *(_QWORD*)(result + 8i64 * a2);
		if (v4)
			*(_DWORD*)(v4 + 420) = a3;
	}
	return result;
}

