//----- (00000001407F0CAC) ----------------------------------------------------
__int64 __fastcall sub_1407F0CAC(WCHAR* a1, WCHAR* a2, _OWORD* a3)
{
	__int64 result; // rax
	signed __int64 v6; // rsi
	unsigned __int16 v7; // bx
	WCHAR v8; // cx
	WCHAR v9; // ax
	__int128 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+30h] [rbp-18h]
	char v12; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v10, a3);
	if (a1 && a2)
	{
		if (*(_QWORD*)(v10 + 312))
		{
			do
			{
				v7 = sub_1407DF528(*a1++, &v10);
				v9 = sub_1407DF528(*a2++, &v10);
				v8 = v9;
			} while (v7 && v7 == v9);
		}
		else
		{
			v6 = (char*)a1 - (char*)a2;
			do
			{
				v7 = *(WCHAR*)((char*)a2 + v6);
				if ((unsigned __int16)(v7 - 65) <= 0x19u)
					v7 += 32;
				v8 = *a2;
				if ((unsigned __int16)(*a2 - 65) <= 0x19u)
					v8 += 32;
				++a2;
			} while (v7 && v7 == v8);
		}
		result = v7 - (unsigned int)v8;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		result = 0x7FFFFFFFi64;
	}
	if (v12)
		*(_DWORD*)(v11 + 200) &= ~2u;
	return result;
}

