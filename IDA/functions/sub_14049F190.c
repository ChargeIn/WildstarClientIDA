//----- (000000014049F190) ----------------------------------------------------
__int64 __fastcall sub_14049F190(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // r10d
	unsigned __int64 v5; // r11
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int v9; // ecx
	_DWORD* v10; // rax
	__int64 result; // rax
	int v12; // r8d

	v4 = 0;
	v5 = *(_QWORD*)(qword_140C65898 + 5792);
	v6 = 0;
	if (v5)
	{
		v7 = 0i64;
		while (1)
		{
			v8 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 5784) + 8 * v7);
			if (*(_DWORD*)(v8 + 12))
				break;
		LABEL_7:
			v7 = ++v6;
			if (v6 >= v5)
				goto LABEL_8;
		}
		v9 = 0;
		v10 = (_DWORD*)(v8 + 24);
		while (a4 != *v10)
		{
			++v9;
			++v10;
			if (v9 >= 0xA)
				goto LABEL_7;
		}
		result = 1i64;
	}
	else
	{
	LABEL_8:
		result = 0i64;
	}
	v12 = a3 - 1;
	if (v12)
	{
		if (v12 == 1)
			LOBYTE(v4) = (_DWORD)result == 0;
		return v4;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

