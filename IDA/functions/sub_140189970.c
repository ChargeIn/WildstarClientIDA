//----- (0000000140189970) ----------------------------------------------------
unsigned __int64 __fastcall sub_140189970(__int64* a1, unsigned __int64* a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v4; // r11
	unsigned __int64 result; // rax
	unsigned __int64 v6; // r11
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // r10
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // r8
	__int64 v12; // rdx
	unsigned __int64 v13; // rbx
	_QWORD* v14; // rdx

	v2 = *a2;
	v4 = --a1[3];
	result = (v2 >> 16) & 0xFFFFFFFFFFi64;
	if (result < v4)
	{
		v6 = *(_QWORD*)(*a1 + 8 * v4);
		if (result)
		{
			do
			{
				v7 = (result - 1) >> 1;
				v8 = *(_QWORD*)(*a1 + 8 * v7);
				if (v8 < v6)
					break;
				*(_QWORD*)(*a1 + 8 * result) = v8;
				**(_QWORD**)(*a1 + 8 * result) ^= (**(_QWORD**)(*a1 + 8 * result) ^ (result << 16)) & 0xFFFFFFFFFF0000i64;
				result = (result - 1) >> 1;
			} while (v7);
		}
		while (1)
		{
			v9 = a1[3];
			v10 = 2 * result + 2;
			v11 = 2 * result + 1;
			if (v10 >= v9 || (v12 = *a1, v13 = *(_QWORD*)(*a1 + 8 * v10), v13 >= v6))
			{
				if (v11 >= v9 || (v12 = *a1, *(_QWORD*)(*a1 + 8 * v11) >= v6))
				{
					*(_QWORD*)(*a1 + 8 * result) = v6;
					v14 = *(_QWORD**)(*a1 + 8 * result);
					result = (*v14 ^ (result << 16)) & 0xFFFFFFFFFF0000i64;
					*v14 ^= result;
					return result;
				}
			}
			else if (v13 < *(_QWORD*)(v12 + 8 * v11))
			{
				v11 = 2 * result + 2;
			}
			*(_QWORD*)(v12 + 8 * result) = *(_QWORD*)(v12 + 8 * v11);
			**(_QWORD**)(*a1 + 8 * result) ^= (**(_QWORD**)(*a1 + 8 * result) ^ (result << 16)) & 0xFFFFFFFFFF0000i64;
			result = v11;
		}
	}
	return result;
}

