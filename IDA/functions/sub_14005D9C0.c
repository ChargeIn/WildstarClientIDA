//----- (000000014005D9C0) ----------------------------------------------------
char __fastcall sub_14005D9C0(__int64 a1)
{
	__int64 v1; // rbp
	_QWORD* v3; // rcx
	_QWORD* v4; // rsi
	_QWORD* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	char v8; // di
	__int64 v9; // rdx
	__int64 v10; // rax

	v1 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD**)(v1 + 80);
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 == v3)
		*(_QWORD*)(v1 + 80) = 0i64;
	else
		*v3 = *v4;
	*v4 = **(_QWORD**)(v1 + 176);
	**(_QWORD**)(v1 + 176) = v4;
	LOBYTE(v5) = *((_BYTE*)v4 + 9) & 0xF8;
	*((_BYTE*)v4 + 9) = (unsigned __int8)v5 | *(_BYTE*)(v1 + 32) & 3;
	v6 = v4[2];
	if (v6)
	{
		if ((*(_BYTE*)(v6 + 10) & 4) == 0)
		{
			v5 = sub_140062370(v6, 2, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 312i64));
			if (v5)
			{
				v7 = *(_QWORD*)(v1 + 112);
				v8 = *(_BYTE*)(a1 + 101);
				*(_BYTE*)(a1 + 101) = 0;
				*(_QWORD*)(v1 + 112) = 2i64 * *(_QWORD*)(v1 + 120);
				v9 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v9 = *v5;
				*(_DWORD*)(v9 + 8) = *((_DWORD*)v5 + 2);
				v10 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)(v10 + 16) = v4;
				*(_DWORD*)(v10 + 24) = 7;
				*(_QWORD*)(a1 + 16) += 32i64;
				LOBYTE(v5) = sub_140061D30(a1, *(_QWORD*)(a1 + 16) - 32i64, 0i64);
				*(_BYTE*)(a1 + 101) = v8;
				*(_QWORD*)(v1 + 112) = v7;
			}
		}
	}
	return (char)v5;
}
// 140061D30: using guessed type __int64 __fastcall sub_140061D30(_QWORD, _QWORD, _QWORD);

