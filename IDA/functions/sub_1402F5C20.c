//----- (00000001402F5C20) ----------------------------------------------------
__int64 __fastcall sub_1402F5C20(__int64 a1, int a2)
{
	__int64 result; // rax
	int v4; // edx
	__int64 v5; // rax
	int v6; // ecx
	int v7; // ecx

	result = *(unsigned int*)(a1 + 48);
	if (((unsigned int)result & a2) != 0)
	{
		v4 = result & ~a2;
		v5 = *(_QWORD*)(a1 + 1216);
		for (*(_DWORD*)(a1 + 48) = v4; v5; v5 = *(_QWORD*)(v5 + 1216))
		{
			v6 = *(_DWORD*)(v5 + 48);
			if ((v6 & 4) == 0)
				break;
			*(_DWORD*)(v5 + 48) = v6 & 0xFFFFFFFB;
		}
		result = *(unsigned int*)(a1 + 52);
		if ((result & 1) != 0)
		{
			_InterlockedExchange((volatile __int32*)(a1 + 52), result & 0xFFFFFFFE);
			for (result = *(_QWORD*)(a1 + 1216); result; result = *(_QWORD*)(result + 1216))
			{
				v7 = *(_DWORD*)(result + 52);
				if ((v7 & 0x20) == 0)
					break;
				_InterlockedExchange((volatile __int32*)(result + 52), v7 & 0xFFFFFFDF);
			}
		}
	}
	return result;
}

