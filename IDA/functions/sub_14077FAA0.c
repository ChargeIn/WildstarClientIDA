#include "../winhttp.h"

//----- (000000014077FAA0) ----------------------------------------------------
__int64 __fastcall sub_14077FAA0(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // edx
	__int64 v4; // rax
	__int64 v5; // rbx
	unsigned int v6; // eax
	__int64 result; // rax
	int v8; // ecx

	if (!*(_DWORD*)(a1 + 276))
	{
		v2 = sub_140200220(0x321u);
		v3 = v2 ? *(_DWORD*)(v2 + 4) : 0;
		if (v3)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v4 = sub_1405A5B90(qword_140C65898, v3)) != 0
				|| (v4 = sub_1407A0FD0(qword_140C65B70, v3)) != 0)
			{
				sub_1405C7620((__int64*)a1, v4);
			}
		}
	}
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	result = sub_14024ACC0(v6);
	if (v5)
	{
		if (result)
		{
			result = *(unsigned int*)(result + 20);
			if ((unsigned int)result <= 7)
			{
				v8 = 164;
				if (_bittest(&v8, result))
					return sub_1405C8EC0(a1);
			}
		}
	}
	*(_DWORD*)(a1 + 240) = 0;
	*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	return result;
}
// 14077FAF7: variable 'v3' is possibly undefined
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

