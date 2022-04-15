//----- (00000001408821B0) ----------------------------------------------------
__int64 __fastcall sub_1408821B0(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v4; // rbx
	int v5; // r8d
	int v6; // ebx
	int v7; // eax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 result; // rax
	__int64 v11; // rcx
	bool v12; // zf

	v4 = a2[1] & 0xFFFFFFFFFFFFFFFCui64;
	if (v4 >= 0x100)
	{
		v7 = sub_140882470(a2[1] & 0xFFFFFFFFFFFFFFFCui64);
		v5 = v7 - 7;
		v6 = (v4 >> ((unsigned __int8)v7 - 5)) ^ 0x20;
	}
	else
	{
		v5 = 0;
		v6 = (int)v4 / 8;
	}
	v8 = a2[3];
	v9 = a2[2];
	*(_QWORD*)(v9 + 24) = v8;
	*(_QWORD*)(v8 + 16) = v9;
	result = v6;
	v11 = v6 + 32i64 * v5;
	if (*(_QWORD**)(a1 + 8 * v11 + 136) == a2)
	{
		*(_QWORD*)(a1 + 8 * v11 + 136) = v9;
		if (v9 == a1)
		{
			result = (unsigned int)~(1 << v6);
			v12 = ((unsigned int)result & *(_DWORD*)(a1 + 4i64 * v5 + 36)) == 0;
			*(_DWORD*)(a1 + 4i64 * v5 + 36) &= result;
			if (v12)
				*(_DWORD*)(a1 + 32) &= ~(1 << v5);
		}
	}
	return result;
}

