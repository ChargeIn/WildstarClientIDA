//----- (00000001400A1230) ----------------------------------------------------
__int64 __fastcall sub_1400A1230(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, (_DWORD*)(a3 + 20));
				if ((int)result >= 0)
					return sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
			}
		}
	}
	return result;
}

