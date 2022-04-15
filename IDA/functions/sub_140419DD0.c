//----- (0000000140419DD0) ----------------------------------------------------
__int64 __fastcall sub_140419DD0(__int64 a1)
{
	int v1; // edi
	int v3; // ebx
	_QWORD* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	int v7; // eax
	_DWORD* v8; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	v4 = (_QWORD*)sub_140417660(a1, 1);
	if (v4)
	{
		v5 = *v4 ? *(_QWORD*)*v4 : 0i64;
		if (v5)
		{
			v6 = *(_QWORD*)(v5 + 64);
			if (v6)
				v7 = (*(_DWORD*)(v6 + 332) & 0x10000) != 0 ? 0x9C : 0;
			else
				v7 = 6;
			LOBYTE(v3) = v7 == 0;
			if ((*(_DWORD*)(v6 + 340) & 0x100) != 0 && !*(_DWORD*)(v5 + 32))
				v3 = 0;
		}
	}
	v8 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v3 != 0;
	v8[2] = 1;
	result = 1i64;
	*v8 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

