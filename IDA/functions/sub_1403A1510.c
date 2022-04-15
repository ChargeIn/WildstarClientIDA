//----- (00000001403A1510) ----------------------------------------------------
__int64 __fastcall sub_1403A1510(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 result; // rax
	_QWORD* v5; // rcx
	bool v6; // zf
	int v7; // [rsp+30h] [rbp+8h] BYREF

	*(_DWORD*)(a1 + 27892) = 6;
	*(_QWORD*)(a1 + 27880) = 0i64;
	*(_DWORD*)(a1 + 27888) = 0;
	*(_DWORD*)(a1 + 27896) = 300;
	*(_DWORD*)(a1 + 27900) = -1;
	*(_DWORD*)(a1 + 27904) = 9;
	*(_DWORD*)(a1 + 27936) = 0;
	while (*(_QWORD*)(a1 + 25416))
	{
		v2 = *(_QWORD*)(a1 + 25416);
		v3 = *(_QWORD*)(v2 + 256);
		if (v3)
		{
			v7 = **(_DWORD**)(v2 + 48);
			result = sub_1400EE810(v3 + 576, &v7);
		}
		if (*(_QWORD*)v2)
		{
			result = *(_QWORD*)(v2 + 8);
			**(_QWORD**)v2 = result;
		}
		v5 = *(_QWORD**)(v2 + 8);
		if (v5)
		{
			result = *(_QWORD*)v2;
			*v5 = *(_QWORD*)v2;
		}
		v6 = *(_DWORD*)(v2 + 36) == 2;
		*(_QWORD*)v2 = 0i64;
		*(_QWORD*)(v2 + 8) = 0i64;
		*(_QWORD*)(v2 + 256) = 0i64;
		if (!v6)
		{
			result = (unsigned int)dword_140C636A8;
			*(_DWORD*)(v2 + 36) = 2;
			*(_DWORD*)(v2 + 76) = result;
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

