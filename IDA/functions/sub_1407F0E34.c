//----- (00000001407F0E34) ----------------------------------------------------
__int64 __fastcall sub_1407F0E34(WCHAR* a1, WCHAR* a2, __int64 a3, _OWORD* a4)
{
	__int64 v4; // rbp
	WCHAR* v5; // rdi
	WCHAR* v6; // rsi
	__int64 result; // rax
	signed __int64 v8; // rsi
	unsigned __int16 v9; // bx
	WCHAR v10; // cx
	WCHAR v11; // ax
	__int128 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+30h] [rbp-18h]
	char v14; // [rsp+38h] [rbp-10h]

	v4 = a3;
	v5 = a2;
	v6 = a1;
	result = 0i64;
	if (a3)
	{
		if (a1 && a2)
		{
			sub_1407DE348((__int64)&v12, a4);
			if (*(_QWORD*)(v12 + 312))
			{
				do
				{
					v9 = sub_1407DF528(*v6, &v12);
					v11 = sub_1407DF528(*v5, &v12);
					++v6;
					++v5;
					v10 = v11;
					--v4;
				} while (v4 && v9 && v9 == v11);
			}
			else
			{
				v8 = (char*)v6 - (char*)v5;
				do
				{
					v9 = *(WCHAR*)((char*)v5 + v8);
					if ((unsigned __int16)(v9 - 65) <= 0x19u)
						v9 += 32;
					v10 = *v5;
					if ((unsigned __int16)(*v5 - 65) <= 0x19u)
						v10 += 32;
					++v5;
					--v4;
				} while (v4 && v9 && v9 == v10);
			}
			result = v9 - (unsigned int)v10;
			if (v14)
				*(_DWORD*)(v13 + 200) &= ~2u;
		}
		else
		{
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			return 0x7FFFFFFFi64;
		}
	}
	return result;
}

