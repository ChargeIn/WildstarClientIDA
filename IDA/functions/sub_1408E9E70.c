//----- (00000001408E9E70) ----------------------------------------------------
__int64 __fastcall sub_1408E9E70(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	bool v5; // zf
	int v6; // eax
	int v7; // eax
	__int64 v8; // r9
	__int64 v9; // r8
	unsigned __int16 v10; // dx
	int v11; // r9d
	unsigned __int16 v12; // r8

	if (*(_QWORD*)(a1 + 264)
		|| (result = sub_140832B30(*(_DWORD*)(a1 + 128) << 11),
			*(_DWORD*)(a1 + 88) = 0,
			(*(_QWORD*)(a1 + 264) = result) != 0i64))
	{
		v5 = *(_WORD*)(a1 + 84) == 1;
		*(_DWORD*)(a1 + 276) = *(unsigned __int16*)(a2 + 16);
		v6 = *(_DWORD*)(a1 + 360);
		if (v5)
			v7 = *(_DWORD*)(a1 + 48) + v6;
		else
			v7 = *(_DWORD*)(a1 + 292) + *(_DWORD*)(a1 + 300) + v6;
		v8 = *(_QWORD*)(a1 + 264);
		v9 = *(_QWORD*)(a1 + 352);
		v10 = *(_WORD*)(a1 + 308);
		*(_DWORD*)(a1 + 280) = v7 - *(_DWORD*)(a1 + 352);
		*(_BYTE*)(a1 + 284) = 1;
		sub_1408EBC90(a1 + 88, v10, v9, v8);
		result = *(unsigned int*)(a1 + 92);
		*(_DWORD*)(a2 + 56) = result;
		if ((_DWORD)result != 2)
		{
			v11 = *(_DWORD*)(a1 + 328);
			v12 = *(_WORD*)(a1 + 88);
			*(_QWORD*)(a1 + 352) += *(unsigned int*)(a1 + 100);
			return sub_1408803E0(a1, *(_QWORD*)(a1 + 264), v12, v11, *(_DWORD*)(a1 + 272), a2);
		}
	}
	else
	{
		*(_DWORD*)(a2 + 56) = 2;
	}
	return result;
}

