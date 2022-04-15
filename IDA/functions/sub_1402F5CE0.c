//----- (00000001402F5CE0) ----------------------------------------------------
__int64 __fastcall sub_1402F5CE0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // r9
	__int64 v3; // r8
	int v4; // eax
	__int64 v5; // rdx
	__int64 v6; // rdx
	int v7; // ecx

	result = *(unsigned int*)(a1 + 1408);
	v2 = a1;
	if ((result & 2) != 0)
	{
		v3 = *(_QWORD*)(a1 + 1232);
		*(_DWORD*)(a1 + 1412) &= ~2u;
		for (*(_DWORD*)(a1 + 1408) = result & 0xFFFFFFFD; v3; v3 = *(_QWORD*)(v3 + 1248))
		{
			v4 = *(_DWORD*)(v3 + 1408);
			if ((v4 & 2) != 0)
			{
				v5 = *(_QWORD*)(v3 + 1232);
				*(_DWORD*)(v3 + 1412) &= ~2u;
				for (*(_DWORD*)(v3 + 1408) = v4 & 0xFFFFFFFD; v5; v5 = *(_QWORD*)(v6 + 1248))
					sub_1402F5DA0(v5);
			}
		}
		for (result = *(_QWORD*)(v2 + 1216); result; result = *(_QWORD*)(result + 1216))
		{
			v7 = *(_DWORD*)(result + 1412);
			if ((v7 & 2) == 0)
				break;
			*(_DWORD*)(result + 1412) = v7 & 0xFFFFFFFD;
		}
	}
	return result;
}
// 1402F5D48: variable 'v6' is possibly undefined
// 1402F5D54: variable 'v3' is possibly undefined
// 1402F5D60: variable 'v2' is possibly undefined

