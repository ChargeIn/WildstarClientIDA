#include "../winhttp.h"

//----- (0000000140417ED0) ----------------------------------------------------
__int64 __fastcall sub_140417ED0(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edx
	unsigned int v4; // eax
	void(__fastcall * **v5)(_QWORD); // rax
	__int64 result; // rax
	int v7; // [rsp+38h] [rbp+10h] BYREF
	unsigned int v8; // [rsp+3Ch] [rbp+14h]

	v2 = sub_140417BF0(a1, 1u);
	if (v2 && (v2[85] & 0x400) != 0 && (v3 = v2[96]) != 0)
	{
		v4 = 0;
		while (!_bittest(&v3, v4))
		{
			if (++v4 >= 0x1F)
			{
				v4 = 31;
				break;
			}
		}
		v7 = 0;
		v8 = v4;
		v5 = (void(__fastcall***)(_QWORD))sub_1403AC780(qword_140C65898 + 160, &v7);
		return sub_140415D60(a1, v5);
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

