//----- (00000001407AC660) ----------------------------------------------------
__int64 __fastcall sub_1407AC660(__int64 a1, int a2, int a3)
{
	unsigned __int64 v3; // r10
	__int64 result; // rax
	__int64 v5; // r11
	__int64 v6; // r9
	__int64 v7; // rdx

	v3 = *(_QWORD*)(a1 + 144);
	result = 0i64;
	if (v3)
	{
		v5 = *(_QWORD*)(a1 + 136);
		v6 = 0i64;
		while (**(_DWORD**)(v5 + 8 * v6) != a2)
		{
			result = (unsigned int)(result + 1);
			v6 = (unsigned int)result;
			if ((unsigned int)result >= v3)
				return result;
		}
		v7 = 8 * result;
		*(_DWORD*)(*(_QWORD*)(v5 + 8 * result) + 380i64) = a3;
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * result) + 388i64) = 0;
		result = *(_QWORD*)(a1 + 136);
		*(_DWORD*)(*(_QWORD*)(result + v7) + 384i64) = 0;
	}
	return result;
}

