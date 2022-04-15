//----- (000000014040BDF0) ----------------------------------------------------
__int64 __fastcall sub_14040BDF0(__int64* a1)
{
	int v2; // eax
	unsigned __int64 v3; // rax
	__int64 v4; // rcx
	int v5; // edx
	unsigned __int8* v6; // r8
	__int64 v7; // rax
	__int64 v9; // [rsp+0h] [rbp-28h] BYREF
	int v10; // [rsp+8h] [rbp-20h]

	HIDWORD(v9) = 0;
	v10 = 0;
	if (*a1)
	{
		WORD2(v9) = WORD2(*a1);
		v3 = HIWORD(*a1);
		BYTE6(v9) = BYTE6(*a1);
		v2 = BYTE1(v3);
	}
	else
	{
		HIDWORD(v9) = 0;
		v10 = 0;
		v2 = 1;
	}
	if (v2 >= 1)
		return 0i64;
	v10 = 1;
	*(_WORD*)((char*)&v9 + 5) = 0;
	v4 = 256i64;
	v5 = 6;
	v6 = (unsigned __int8*)&v9 + 5;
	do
	{
		v7 = *v6--;
		v4 = v7 | (v4 << 8);
		--v5;
	} while (v5);
	*a1 = v4;
	return 1i64;
}

