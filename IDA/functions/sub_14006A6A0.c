//----- (000000014006A6A0) ----------------------------------------------------
int __fastcall sub_14006A6A0(__int64 a1, int* a2)
{
	int result; // eax
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rcx

	result = *a2;
	if (*a2 == 13)
	{
		v4 = a2[2];
		*a2 = 12;
		result = (unsigned __int8)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 4 * v4) >> 6);
		a2[2] = (unsigned __int8)result;
	}
	else if (result == 14)
	{
		v5 = a2[2];
		v6 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		result = *(_DWORD*)(v6 + 4 * v5) & 0x7FFFFF | 0x1000000;
		*(_DWORD*)(v6 + 4 * v5) = result;
		*a2 = 11;
	}
	return result;
}

