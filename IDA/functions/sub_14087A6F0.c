//----- (000000014087A6F0) ----------------------------------------------------
__int64 __fastcall sub_14087A6F0(__int64 a1, int a2, char a3)
{
	__int64 v3; // rax
	__int64 v4; // rdx

	if (!a2)
	{
		v3 = *(unsigned int*)(a1 + 52);
		*(_DWORD*)(a1 + 44) = 0;
		v4 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(v4 + 416) + v3;
		*(_WORD*)(a1 + 84) = *(_WORD*)(v4 + 376);
		return 1i64;
	}
	if (a2 != 1)
		return 1i64;
	if (!a3)
	{
		*(_QWORD*)(a1 + 88) = *(unsigned int*)(a1 + 52)
			+ *(_QWORD*)(*(_QWORD*)(a1 + 24) + 416i64)
			+ (*(_DWORD*)(a1 + 44) >> 6) * (unsigned int)*(unsigned __int16*)(a1 + 96);
		return 1i64;
	}
	return sub_14087A490(a1);
}

