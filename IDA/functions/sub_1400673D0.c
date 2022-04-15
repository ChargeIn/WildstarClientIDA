//----- (00000001400673D0) ----------------------------------------------------
__int64 __fastcall sub_1400673D0(__int64 a1, int* a2)
{
	unsigned int v4; // ebp
	bool v5; // zf
	__int64 v6; // rax
	__int64 v7; // rdi
	int v8; // ecx
	int v9; // ecx

	v4 = 1;
	sub_140067E60(a1, a2, 0i64);
	while (*(_DWORD*)(a1 + 16) == 44)
	{
		v5 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v5)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v6 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v6;
		}
		v7 = *(_QWORD*)(a1 + 48);
		sub_14006A700(v7, a2);
		if (*a2 == 12)
		{
			v8 = a2[2];
			if ((v8 & 0x100) == 0 && v8 >= *(unsigned __int8*)(v7 + 74))
				--* (_DWORD*)(v7 + 60);
		}
		v9 = *(_DWORD*)(v7 + 60) + 1;
		if (v9 > *(unsigned __int8*)(*(_QWORD*)v7 + 115i64))
		{
			if (v9 >= 250)
				sub_140062CF0(*(_QWORD*)(v7 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v7 + 24) + 16i64));
			*(_BYTE*)(*(_QWORD*)v7 + 115i64) = v9;
		}
		sub_14006A980(v7, a2, (*(_DWORD*)(v7 + 60))++);
		sub_140067E60(a1, a2, 0i64);
		++v4;
	}
	return v4;
}
// 140067E60: using guessed type __int64 __fastcall sub_140067E60(_QWORD, _QWORD, _QWORD);

