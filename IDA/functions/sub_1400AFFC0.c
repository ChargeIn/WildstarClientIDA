//----- (00000001400AFFC0) ----------------------------------------------------
__int64 __fastcall sub_1400AFFC0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	_BYTE* v8; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_1400A8A30(a1, v7, (_DWORD*)(a3 + 8));
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
				if ((int)result >= 0)
				{
					v8 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 20));
					*(_QWORD*)(a3 + 24) = v8;
					if (v8)
						return sub_140337160(a1, v8, 4i64 * *(unsigned int*)(a3 + 20));
					else
						return 2147500037i64;
				}
			}
		}
	}
	return result;
}
// 1400B0026: variable 'v7' is possibly undefined

