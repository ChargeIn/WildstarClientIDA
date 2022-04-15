//----- (0000000140087090) ----------------------------------------------------
__int64 __fastcall sub_140087090(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 i; // rbx
	_BYTE* v10; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
		if ((int)result >= 0)
		{
			v8 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 16));
			*(_QWORD*)(a3 + 24) = v8;
			if (v8)
			{
				for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 16); i = (unsigned int)(i + 1))
				{
					result = sub_140336A40(a1, a2, (_QWORD*)(*(_QWORD*)(a3 + 24) + 8 * i));
					if ((int)result < 0)
						return result;
				}
				v10 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 16));
				*(_QWORD*)(a3 + 32) = v10;
				if (v10)
				{
					result = sub_140337160(a1, v10, 4i64 * *(unsigned int*)(a3 + 16));
					if ((int)result >= 0)
						return sub_14006C090(a1, (_DWORD*)(a3 + 40), 1ui64);
					return result;
				}
			}
			return 2147500037i64;
		}
	}
	return result;
}
// 1400870DD: variable 'v7' is possibly undefined

