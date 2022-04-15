//----- (00000001400A3D50) ----------------------------------------------------
__int64 __fastcall sub_1400A3D50(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // r8
	_BYTE* v9; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, (__int64*)(a3 + 16), v8);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x12ui64);
				if ((int)result >= 0)
				{
					result = sub_14006BE30(a1, (_BYTE*)(a3 + 28), 3ui64);
					if ((int)result >= 0)
					{
						v9 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 28));
						*(_QWORD*)(a3 + 32) = v9;
						if (v9)
							return sub_140337160(a1, v9, 4i64 * *(unsigned __int8*)(a3 + 28));
						else
							return 2147500037i64;
					}
				}
			}
		}
	}
	return result;
}
// 1400A3D9E: variable 'v7' is possibly undefined
// 1400A3DAE: variable 'v8' is possibly undefined

