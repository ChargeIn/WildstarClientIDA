//----- (0000000140897D50) ----------------------------------------------------
__int64 __fastcall sub_140897D50(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rax
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64 v7; // [rsp+30h] [rbp-18h]

	BYTE2(v6) &= 0xFCu;
	LOWORD(v6) = 0;
	v7 = 0i64;
	if ((unsigned int)sub_140897130((__int64)&v5, a2) == 1 && (v3 = (_QWORD*)sub_140896850(a1 + 8)) != 0i64)
	{
		*v3 = v5;
		v3[1] = v6;
		v3[2] = v7;
		return 1i64;
	}
	else
	{
		if ((*(_DWORD*)(v5 + 56) & 0xFFFFFFFD) == 0)
		{
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		}
		return 2i64;
	}
}

