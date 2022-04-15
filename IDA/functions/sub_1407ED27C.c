//----- (00000001407ED27C) ----------------------------------------------------
__int64 __fastcall sub_1407ED27C(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	int v3; // ebx
	char v6; // si
	int v7; // eax
	unsigned __int16* v8; // rcx
	__int64 result; // rax
	__int64 v10; // [rsp+40h] [rbp-48h] BYREF
	unsigned __int16* v11; // [rsp+48h] [rbp-40h] BYREF
	unsigned __int16 v12[8]; // [rsp+50h] [rbp-38h] BYREF

	v3 = 0;
	v6 = sub_1407F3F38((__int64)v12, &v11, a2, 0, 0, 0, 0, a3);
	if ((v6 & 4) != 0)
	{
		v10 = 0i64;
		v3 = 512;
	}
	else
	{
		v7 = sub_1407F234C(v12, &v10);
		if ((v6 & 2) != 0 || v7 == 1)
			v3 = 128;
		if ((v6 & 1) != 0 || v7 == 2)
			v3 |= 0x100u;
	}
	v8 = v11;
	*(_DWORD*)a1 = v3;
	result = a1;
	*(_DWORD*)(a1 + 4) = v8 - a2;
	*(_QWORD*)(a1 + 16) = v10;
	return result;
}
// 1407ED27C: using guessed type unsigned __int16 var_38[8];

