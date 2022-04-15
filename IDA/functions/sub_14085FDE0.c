//----- (000000014085FDE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14085FDE0(__int64 a1)
{
	_QWORD* v1; // r8
	__int64 v2; // r9
	unsigned __int64 result; // rax

	v1 = *(_QWORD**)(a1 + 48);
	while (v1 != *(_QWORD**)(a1 + 56))
	{
		if ((v1[1] & 2) != 0)
		{
			v1 += 3;
		}
		else
		{
			v2 = *(_QWORD*)(a1 + 56);
			result = (unsigned __int64)((unsigned __int128)((v2 - *(_QWORD*)(a1 + 48)) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
			if ((unsigned int)((v2 - *(_QWORD*)(a1 + 48)) / 24) > 1)
			{
				*v1 = *(_QWORD*)(v2 - 24);
				v1[1] = *(_QWORD*)(v2 - 16);
				result = *(_QWORD*)(v2 - 8);
				v1[2] = result;
			}
			*(_QWORD*)(a1 + 56) -= 24i64;
		}
	}
	return result;
}

