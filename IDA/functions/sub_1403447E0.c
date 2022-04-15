//----- (00000001403447E0) ----------------------------------------------------
int __fastcall sub_1403447E0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rsi
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	unsigned int v6; // edx
	int result; // eax

	if (*(_DWORD*)(a1 + 40) != -2147483638)
	{
		sub_14034A1A0(a1 + 32, 0);
		sub_14034A2B0(a1 + 32);
		_InterlockedIncrement((volatile signed __int32*)(a1 + 16));
		v2 = 0i64;
		if (*(_QWORD*)(a1 + 24))
		{
			v3 = 0i64;
			do
			{
				v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v2);
				if (v4)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4);
					_InterlockedIncrement((volatile signed __int32*)(a1 + 16));
					v5 = (_QWORD*)(v3 + *(_QWORD*)(a1 + 64));
					if (v5)
					{
						if (*v5)
						{
							sub_140349890(v5, (_QWORD*)(a1 + 56));
							v6 = *(_DWORD*)(a1 + 40);
							if (v6 != -2147483638)
								sub_140349B20((__int64*)(a1 + 56), v6);
						}
					}
				}
				++v2;
				v3 += 32i64;
			} while (v2 < *(_QWORD*)(a1 + 24));
		}
		result = _InterlockedDecrement((volatile signed __int32*)(a1 + 16));
		if (result == 1)
			return sub_14034A1A0(a1 + 32, 0);
	}
	return result;
}

