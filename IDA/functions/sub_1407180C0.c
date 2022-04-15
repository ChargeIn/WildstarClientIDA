//----- (00000001407180C0) ----------------------------------------------------
__int64 __fastcall sub_1407180C0(__int64 a1)
{
	__int64 result; // rax
	int v3; // r9d
	__int64 v4; // rcx
	__int64 v5; // rdx
	unsigned int v6; // ecx
	unsigned int v7; // eax

	result = *(_QWORD*)(a1 + 96);
	if (result)
	{
		v3 = dword_140C636A8;
		*(_DWORD*)(a1 + 48) = dword_140C636A8;
		*(_DWORD*)(result + 32) = v3;
		*(_DWORD*)(*(_QWORD*)(a1 + 96) + 36i64) = *(_DWORD*)(a1 + 72);
		v4 = *(_QWORD*)(a1 + 56);
		result = *(_QWORD*)(v4 + 312);
		v5 = *(_QWORD*)(result + 112);
		if (*(_DWORD*)(v5 + 24) == 10)
		{
			v6 = *(_DWORD*)(v5 + 32) + *(_DWORD*)(v4 + 404) - v3;
			if (v6)
			{
				v7 = *(_DWORD*)(a1 + 72);
				if (v7 != -1 && v6 < v7)
					v6 = *(_DWORD*)(a1 + 72);
				result = *(_QWORD*)(a1 + 96);
				*(_DWORD*)(result + 36) = v6;
			}
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

