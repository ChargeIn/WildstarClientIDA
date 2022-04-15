//----- (000000014006C1C0) ----------------------------------------------------
__int64 __fastcall sub_14006C1C0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r8
	__int64 v4; // r11
	__int64 v5; // r10
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 16);
	if (v2
		&& (v4 = *(_QWORD*)(a1 + 24),
			v5 = *(_QWORD*)(a1 + 32),
			(unsigned __int64)(8i64 * *(_QWORD*)(v2 + 32) - 8 * v4 - v5) >= 0x40))
	{
		v6 = *(_QWORD*)v4 >> v5;
		if (((v5 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			v6 |= (unsigned __int64)*(unsigned __int8*)(v4 + 8) << (64 - (unsigned __int8)v5);
		*(_QWORD*)(a1 + 32) &= 7ui64;
		*(_QWORD*)(a1 + 24) = v4 + ((unsigned __int64)(v5 + 32) >> 3);
		v8 = (unsigned int)v6;
		*(_DWORD*)(a1 + 8) += *(_DWORD*)(a1 + 24) - v4;
		result = 0i64;
		*a2 = v6;
	}
	else
	{
		result = sub_140336D60(a1, &v8, 0x20ui64);
		*a2 = v8;
	}
	return result;
}

