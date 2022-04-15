//----- (0000000140932450) ----------------------------------------------------
_QWORD* __fastcall sub_140932450(__int64 a1, __int16 a2)
{
	int v2; // esi
	_QWORD* v4; // rax
	_QWORD* v6; // rax
	_QWORD* v7; // rdi
	_QWORD* v8; // rax
	__int64 v9; // rax
	_BYTE* v10; // rax

	LOWORD(v2) = a2;
	if (*(_DWORD*)a1)
		return 0i64;
	if (*(_DWORD*)(a1 + 108))
	{
		if ((unsigned __int8)a2 <= 0x16u)
		{
			v4 = sub_14092D610(a1, 7i64);
			if (v4)
			{
				*(_BYTE*)v4 = 6;
				*(_QWORD*)(a1 + 88) += 6i64;
				*(_DWORD*)((char*)v4 + 1) = 1686980765;
				*(_WORD*)((char*)v4 + 5) = -2012;
				*(_DWORD*)(a1 + 108) = 0;
			}
			else if (*(_DWORD*)a1)
			{
				return 0i64;
			}
		}
		*(_DWORD*)(a1 + 108) = 0;
	}
	v6 = sub_14092D590(a1, 32i64);
	v7 = v6;
	if (!v6)
		goto LABEL_18;
	*v6 = 0i64;
	v6[2] = v2 & 0x1000;
	v8 = *(_QWORD**)(a1 + 40);
	if (v8)
		*v8 = v7;
	else
		*(_QWORD*)(a1 + 16) = v7;
	v2 = (unsigned __int8)v2;
	*(_QWORD*)(a1 + 40) = v7;
	if ((unsigned __int8)v2 >= 0x19u && (unsigned int)sub_14091B870((_QWORD*)a1, v2))
		return 0i64;
	v9 = 15i64;
	if (v2 >= 22)
		v9 = 13i64;
	*(_QWORD*)(a1 + 88) += v9;
	v10 = sub_14092D610(a1, 2i64);
	if (!v10)
	{
	LABEL_18:
		*(_DWORD*)a1 = 2;
		return 0i64;
	}
	*v10 = 0;
	v10[1] = v2 + 4;
	return v7;
}

