//----- (0000000140881EC0) ----------------------------------------------------
__int64 __fastcall sub_140881EC0(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v4; // rbx
	int v5; // r9d
	int v6; // ebx
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 result; // rax

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
	v8 = v6 + 32i64 * v5;
	v9 = *(_QWORD*)(a1 + 8 * v8 + 136);
	a2[3] = a1;
	a2[2] = v9;
	*(_QWORD*)(v9 + 24) = a2;
	*(_QWORD*)(a1 + 8 * v8 + 136) = a2;
	result = (unsigned int)(1 << v5);
	*(_DWORD*)(a1 + 32) |= result;
	*(_DWORD*)(a1 + 4i64 * v5 + 36) |= 1 << v6;
	return result;
}

