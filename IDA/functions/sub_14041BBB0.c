//----- (000000014041BBB0) ----------------------------------------------------
__int64 __fastcall sub_14041BBB0(__int64 a1)
{
	_DWORD* v1; // rbx
	_DWORD** v3; // rax
	_DWORD* v4; // rdx
	_DWORD* v5; // rdx
	_DWORD* v6; // rdx
	__int64 v7; // rcx
	__int64 result; // rax

	v1 = 0i64;
	v3 = (_DWORD**)sub_140417660(a1, 1);
	if (v3)
	{
		v4 = *v3;
		if (*v3)
		{
			if (*(_QWORD*)v4)
			{
				LODWORD(v1) = 1;
				if (*(_DWORD*)(*(_QWORD*)v4 + 120i64))
					LODWORD(v1) = *(_DWORD*)(*(_QWORD*)v4 + 120i64);
			}
			else if (v4[302] && v4[285] && v4 != (_DWORD*)-1136i64)
			{
				if (v4[302] && v4[285])
					v1 = v4 + 284;
				LODWORD(v1) = v1[1];
			}
			else if (v4[300] && v4[262] && v4 != (_DWORD*)-1048i64)
			{
				if (!v4[300] || (v5 = v4 + 262, !*v5))
					v5 = 0i64;
				LODWORD(v1) = v5[17];
			}
			else if (v4[301] && v4[198] && v4 != (_DWORD*)-792i64)
			{
				if (!v4[301] || (v6 = v4 + 198, !*v6))
					v6 = 0i64;
				LODWORD(v1) = v6[8];
			}
		}
	}
	v7 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	result = 1i64;
	*(double*)v7 = (double)(int)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

