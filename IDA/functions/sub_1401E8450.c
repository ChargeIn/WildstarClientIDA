//----- (00000001401E8450) ----------------------------------------------------
__int64 __fastcall sub_1401E8450(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // rdx
	__int64 result; // rax

	if (a2 && a3)
	{
		v3 = a2 - qword_140C3FE68;
		if (v3 + (unsigned __int64)a3 <= qword_140C3FE70)
		{
			*(_QWORD*)a1 = v3;
			*(_DWORD*)(a1 + 8) = a3;
			return 0i64;
		}
		else
		{
			*(_QWORD*)a1 = 0i64;
			*(_DWORD*)(a1 + 8) = 0;
			return 2147500037i64;
		}
	}
	else
	{
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_DWORD*)(a1 + 8) = 0;
	}
	return result;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

