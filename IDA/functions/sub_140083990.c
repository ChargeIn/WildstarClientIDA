//----- (0000000140083990) ----------------------------------------------------
__int64 __fastcall sub_140083990(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	unsigned int v8; // edi
	__int64 v9; // rbx
	__int64 v10; // r8
	_BYTE* v11; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
		if ((int)result >= 0)
		{
			v7 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 16));
			*(_QWORD*)(a3 + 24) = v7;
			if (!v7)
				return 2147500037i64;
			v8 = 0;
			if (*(_DWORD*)(a3 + 16))
			{
				do
				{
					v9 = *(_QWORD*)(a3 + 24) + 16i64 * v8;
					if (!v9)
						return 2147500037i64;
					result = sub_14006C090(a1, (_DWORD*)v9, 0xEui64);
					if ((int)result < 0)
						return result;
					result = sub_14006C120(a1, (__int64*)(v9 + 8), v10);
					if ((int)result < 0)
						return result;
				} while (++v8 < *(_DWORD*)(a3 + 16));
			}
			v11 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 16));
			*(_QWORD*)(a3 + 32) = v11;
			if (!v11)
				return 2147500037i64;
			return sub_140337160(a1, v11, 4i64 * *(unsigned int*)(a3 + 16));
		}
	}
	return result;
}
// 140083A58: variable 'v10' is possibly undefined

