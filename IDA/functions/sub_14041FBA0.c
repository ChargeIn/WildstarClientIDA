#include "../winhttp.h"

//----- (000000014041FBA0) ----------------------------------------------------
__int64 __fastcall sub_14041FBA0(__int64 a1, int* a2)
{
	int* v2; // rbx
	int* v4; // rdx
	__int64 result; // rax
	__int128 v6; // xmm0
	int* v7; // rdx
	__int128 v8; // xmm0

	v2 = a2;
	sub_1407E4830(a2, 0i64, 0x190ui64);
	sub_1407E4830(v2, 0i64, 0x90ui64);
	*(_QWORD*)v2 = 0xC5000000C5i64;
	*((_QWORD*)v2 + 1) = 0xC5000000C5i64;
	*((_QWORD*)v2 + 2) = 0xC5000000C5i64;
	*((_QWORD*)v2 + 3) = 0xC5000000C5i64;
	*((_QWORD*)v2 + 4) = 0xC5000000C5i64;
	*((_QWORD*)v2 + 5) = 0xC5000000C5i64;
	*((_QWORD*)v2 + 6) = 0xC5000000C5i64;
	v2[14] = 197;
	v4 = *(int**)(a1 + 80);
	if (v4)
	{
		if ((((unsigned __int8)v2 | (unsigned __int8)v4) & 0xF) != 0)
		{
			return (__int64)sub_1407DB590(v2, v4, 0x190ui64);
		}
		else
		{
			result = 3i64;
			do
			{
				v6 = *(_OWORD*)v4;
				v2 += 32;
				v4 += 32;
				*((_OWORD*)v2 - 8) = v6;
				*((_OWORD*)v2 - 7) = *((_OWORD*)v4 - 7);
				*((_OWORD*)v2 - 6) = *((_OWORD*)v4 - 6);
				*((_OWORD*)v2 - 5) = *((_OWORD*)v4 - 5);
				*((_OWORD*)v2 - 4) = *((_OWORD*)v4 - 4);
				*((_OWORD*)v2 - 3) = *((_OWORD*)v4 - 3);
				*((_OWORD*)v2 - 2) = *((_OWORD*)v4 - 2);
				*((_OWORD*)v2 - 1) = *((_OWORD*)v4 - 1);
				--result;
			} while (result);
			*(_OWORD*)v2 = *(_OWORD*)v4;
		}
	}
	else
	{
		v7 = (int*)(*(_QWORD*)(a1 + 64) + 156i64);
		if ((((unsigned __int8)v2 | (unsigned __int8)(*(_BYTE*)(a1 + 64) - 100)) & 0xF) != 0)
		{
			return (__int64)sub_1407DB590(v2, v7, 0x90ui64);
		}
		else
		{
			result = 1i64;
			do
			{
				v8 = *(_OWORD*)v7;
				v2 += 32;
				v7 += 32;
				*((_OWORD*)v2 - 8) = v8;
				*((_OWORD*)v2 - 7) = *((_OWORD*)v7 - 7);
				*((_OWORD*)v2 - 6) = *((_OWORD*)v7 - 6);
				*((_OWORD*)v2 - 5) = *((_OWORD*)v7 - 5);
				*((_OWORD*)v2 - 4) = *((_OWORD*)v7 - 4);
				*((_OWORD*)v2 - 3) = *((_OWORD*)v7 - 3);
				*((_OWORD*)v2 - 2) = *((_OWORD*)v7 - 2);
				*((_OWORD*)v2 - 1) = *((_OWORD*)v7 - 1);
				--result;
			} while (result);
			*(_OWORD*)v2 = *(_OWORD*)v7;
		}
	}
	return result;
}

