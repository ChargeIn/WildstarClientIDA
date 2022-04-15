//----- (00000001400922D0) ----------------------------------------------------
__int64 __fastcall sub_1400922D0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_140336A40(a1, a2, (_QWORD*)a3);
	if ((int)result >= 0)
	{
		result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 4ui64);
				if ((int)result >= 0)
					return sub_14006C120(a1, (__int64*)(a3 + 24), v7);
			}
		}
	}
	return result;
}
// 140092351: variable 'v7' is possibly undefined

