//----- (000000014006A030) ----------------------------------------------------
__int64 __fastcall sub_14006A030(__int64* a1)
{
	__int64 v1; // rax
	unsigned int v2; // esi
	__int64 result; // rax
	unsigned int v5; // ebx
	int v6; // edx
	__int64 v7; // r8
	int v8; // ecx

	v1 = a1[3];
	v2 = *((_DWORD*)a1 + 14);
	*((_DWORD*)a1 + 14) = -1;
	result = sub_14006BBF0((__int64)a1, 2147450902, *(_DWORD*)(v1 + 8));
	v5 = result;
	if (v2 != -1)
	{
		if ((_DWORD)result == -1)
		{
			return v2;
		}
		else
		{
			v6 = result;
			v7 = *(_QWORD*)(*a1 + 24);
			while (*(_DWORD*)(v7 + 4i64 * v6) >> 14 != 131070)
			{
				v8 = (*(_DWORD*)(v7 + 4i64 * v6) >> 14) - 0x1FFFF;
				if (v8 + v6 + 1 == -1)
					break;
				v6 += v8 + 1;
			}
			sub_14006A0D0(a1, v6, v2);
			return v5;
		}
	}
	return result;
}

