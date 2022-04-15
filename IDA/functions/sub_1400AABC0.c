//----- (00000001400AABC0) ----------------------------------------------------
__int64 __fastcall sub_1400AABC0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	__int64 v3; // rbx
	unsigned __int64 v5; // rdx
	__int64 v7; // rcx
	unsigned __int64 v8; // r9
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v3 = 0i64;
	v5 = *a2;
	if (v2
		&& (v7 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v7) >= 0x40))
	{
		v8 = (unsigned int)v5;
		v9 = *(_QWORD**)(v2 + 32);
		*v9 &= (1i64 << v7) - 1;
		*v9 |= (unsigned __int64)(unsigned int)v8 << *(_QWORD*)(a1 + 16);
		v10 = *(_QWORD*)(a1 + 16);
		if (((v10 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v8 >> (64 - (unsigned __int8)v10);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
		result = 0i64;
	}
	else
	{
		result = sub_140336470(a1, v5, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	if (*a2)
	{
		do
		{
			result = sub_1400AA550(a1, (unsigned __int16*)(*((_QWORD*)a2 + 1) + 96 * v3));
			if ((int)result < 0)
				break;
			v3 = (unsigned int)(v3 + 1);
		} while ((unsigned int)v3 < *a2);
	}
	return result;
}

