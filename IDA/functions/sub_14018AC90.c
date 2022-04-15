#include "../winhttp.h"

//----- (000000014018AC90) ----------------------------------------------------
_QWORD* __fastcall sub_14018AC90(unsigned __int64 a1)
{
	unsigned __int64*** v2; // rbp
	_QWORD* v3; // rbx
	__int64 v4; // rax
	__int64 v6; // rdx
	unsigned __int64 v7; // rsi
	unsigned __int64 v8; // rdi
	unsigned __int64 v9; // rax
	SIZE_T v10; // rdx
	unsigned __int64 v11; // rdi

	v2 = (unsigned __int64***)&qword_140C87990[4 * a1];
	if (!v2[3] || (v3 = **v2) == 0i64)
	{
		if (a1 >= 0x20)
		{
			v9 = (unsigned __int64)VirtualAlloc(0i64, 0x100000000ui64, 0x2000u, 4u);
			if (v9)
			{
				v10 = dwSize;
				qword_140C87970 += 0x100000000i64;
				v11 = HIDWORD(v9);
				qword_140C7F970[HIDWORD(v9)] = v9;
				v3 = VirtualAlloc((LPVOID)v9, v10, 0x1000u, 4u);
				if (v3)
				{
					qword_140C87978 += dwSize;
					v3[1] &= 0xFFFFF000FFFFFFFFui64;
					v3[1] |= (v11 & 0xFFF) << 32;
					return v3;
				}
			}
		}
		else
		{
			v4 = sub_14018AC90(a1 + 1);
			v3 = (_QWORD*)v4;
			if (v4)
			{
				v6 = qword_140C7F970[HIDWORD(*(_QWORD*)(v4 + 8)) & 0xFFF];
				v7 = v6 + ((1i64 << a1) ^ (v4 - v6));
				if ((v7 & qword_140C7F968) == 0)
				{
					if (!VirtualAlloc((LPVOID)v7, dwSize, 0x1000u, 4u))
						return 0i64;
					qword_140C87978 += dwSize;
				}
				*(_QWORD*)v7 &= ~0x8000000000000000ui64;
				v8 = *(_QWORD*)v7 ^ (a1 << 56);
				*(_QWORD*)(v7 + 8) ^= (v3[1] ^ *(_QWORD*)(v7 + 8)) & 0xFFF00000000i64;
				*(_QWORD*)(v7 + 8) &= 0xFFFF0FFFFFFFFFFFui64;
				*(_QWORD*)v7 ^= v8 & 0x7F00000000000000i64;
				sub_140189620((__int64)v2, v7);
				return v3;
			}
		}
		return 0i64;
	}
	sub_140189970(&qword_140C87990[4 * a1], **v2);
	return v3;
}
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C87970: using guessed type __int64 qword_140C87970;
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87990: using guessed type __int64 qword_140C87990[38];

