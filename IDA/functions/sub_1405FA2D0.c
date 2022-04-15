#include "../winhttp.h"

//----- (00000001405FA2D0) ----------------------------------------------------
int* __fastcall sub_1405FA2D0(__int64 a1, unsigned int a2)
{
	int* result; // rax
	int v4; // ecx

	result = (int*)sub_1401F3EA0(a2);
	if (result)
	{
		switch (result[1])
		{
		case 0:
		case 5:
			result = (int*)sub_1405FA840(a1, result);
			break;
		case 1:
			result = (int*)sub_14043F0B0(0x140000000i64, result[2], 3);
			break;
		case 2:
			result = (int*)sub_14043F0B0(0x140000000i64, result[2], 4);
			break;
		case 3:
			result = (int*)sub_14043F0B0(0x140000000i64, result[2], 5);
			break;
		case 4:
			v4 = result[2];
			result = (int*)qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 31212) = v4;
			break;
		case 6:
			result = (int*)sub_1405FAA20(0x140000000i64, (__int64)result);
			break;
		case 7:
			result = (int*)sub_14043F0B0(0x140000000i64, result[2], 11);
			break;
		default:
			return result;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

